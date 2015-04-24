read file1
read file2
if [ -e $file1 -a -e $file2 ]
then
cat $file1>>$file2
else
cat $file1>$file2
fi
