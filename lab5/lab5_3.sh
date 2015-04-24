#Write a shell script to accept a number and a word as command line arguments
#and print the word the given number of times on each line.

for ((i=0;i<$1;i++))
do 
echo $2
done
