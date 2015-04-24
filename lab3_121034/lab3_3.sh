read a;
read b;
echo Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for modulo ;
read o;
if [ $o = 1 ]
then
echo ` expr $a + $b `;
elif [ $o = 2 ]
then
echo ` expr $a - $b `;
elif [ $o = 3 ]
then
echo ` expr $a \*  $b `;
elif [ $o = 4 ]
then
echo ` expr $a / $b `;
elif [ $o = 5 ]
then
echo ` expr $a % $b `;
else
echo Enter number from 1-5 ;
fi
