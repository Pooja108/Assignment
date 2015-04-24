#write a shell script that greets the user by saying Good Morning, Good Afternoon,
#and Good Evening according to the system time.
T=$(date +"%H")
if [ $T -gt 4 -a $T -lt 12 ]
then
echo Good Morning
elif [ $T -gt 12 -a $T -lt 17 ]
then
echo Good Afternoon
elif [ $T -gt 16 -a $T -lt 20 ]
then
echo Good Evening
else
echo Good Night
fi
