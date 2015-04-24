read n;
a=` expr $n + 1 `
if [ ` expr $n % 2 ` == 0 ]
then
b=` expr $n / 2 `
echo ` expr $b \* $a `;
else
b=` expr $a / 2 `
echo ` expr $n \* $b `;
fi
