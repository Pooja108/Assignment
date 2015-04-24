#Write a shell script to check whether the entered number is prime or not.

read n;
flag=0;
if [ $n == 1 ]
then
echo Neither Prime nor composite;
else
for ((i=2;i<$n;i++))
do
if [ ` expr $n % $i ` == 0 ]
then
flag=$((flag+1));
fi
done
if [ $flag == 0 ]
then 
echo Prime;
else
echo Composite;
fi
fi
