read a;
read b;
echo Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for modulo ;


echo ` expr $a + $b `;
echo ` expr $a - $b `;
echo ` expr $a \*  $b `;
echo ` expr $a / $b `;

echo ` expr $a % $b `;
