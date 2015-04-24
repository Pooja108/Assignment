#Write a shell script to check whether the scanned string is found in a file or not.
#Display appropriate message.
read str;
b= grep $str f1
if [ $? == 0 ] 
then
echo String matched
else
echo Match not found
fi
