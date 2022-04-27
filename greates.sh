read a
read b
read c
if [[ $a -ge $b ]] && [[ $a -ge $c ]]
then 
 echo "$a is largest"
elif [[ $b -ge $c ]] && [[ $b -ge $c ]]
then 
 echo "$b is largest"
else
 echo "$c is largest"
fi

