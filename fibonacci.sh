a=0
b=1
read N
for ((i=0; i<N; i++))
do
 echo " $a "
 temp=$((a+b))
 a=$b
 b=$temp
done

