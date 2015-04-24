echo $"Enter a"
read n1;
echo $"Enter b"
read n2;
if [[ "$a" -eq "$b" ]]
then
echo $"a and b are equal"
elif [[ "$a" -ge "$b" ]]
then
echo $a
elif [[ "$b" -ge "$a" ]]
then
echo $b
fi
