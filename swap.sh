#!/bin/bash
echo "Enter two variable"
read a
read b
a=$((a+b))
b=$((a-b))
a=$((a-b))
echo " a = $a , b = $b"

