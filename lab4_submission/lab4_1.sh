#Write a shell script to accept numbers below 50 and to display the square of each.
#This should continue as long as the user wishes

n=0;
while [ $n -lt 50 ]
do
read n;
if [ $n -lt 50 ]
then
echo ` expr $n \* $n `;
fi
done
