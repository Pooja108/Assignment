#Write a shell script to count number of spaces in a file
#str= cat temp.txt
len=$( stat -c %s temp.txt)
echo $len
len=` expr $len - 1 `
 s=0
i=0
j=` `
echo "Length of string = $len"
while [ $i -le $len ]
do
str=$( cut -c $i temp.txt)
echo $str
if [ $str == $j ] 
then
s=` expr $s + 1 `
fi
i=` expr $i + 1 `
done
echo "Spaces = $s"
