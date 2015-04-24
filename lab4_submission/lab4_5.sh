#write a shell script to calculate HRA of employees depending upon their basic.

read n;
if [ $n -gt 1500 ]
then
echo 500;
else
echo ` expr $n / 10 `;
fi
