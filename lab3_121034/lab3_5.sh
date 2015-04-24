k=0
while [ "$k" -lt 50 ]
do
read k;
if [ "$k" -lt 50 ]
then
echo ` expr $k \* $k `
fi
done;
