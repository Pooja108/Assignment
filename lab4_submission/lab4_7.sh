#Write a shell script, which takes a filename as command line argument, asks the user
#if he wants to revoke the read, write permissions for the group and others for that
#particular file. If the answer is “y” then it should do so or else it should abort the
#operation.
echo enter the name of the file
read str
echo  $"Do you want to revoke permissions of read ,write from group and others?" 
read ch
if [ $ch = y ]
then
chmod 700 $str
fi 
