#writ a shell script to check if the input string is palindrome no or not
read str;
revstring=$(rev<<<$str)
if [ $str == $revstring ]
then
echo string is palindrome
else
echo string is not palindrome
fi
