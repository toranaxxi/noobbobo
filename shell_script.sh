#!/bin/bash

echo "enter first number"
read n1

echo "enter second number"
read n2

echo "choose an operation"
echo "1. add"
echo "2. subtract"
echo "3. mulitply"
echo "4. divide"
read opr

if [ $opr = "1" ]; then
echo $((n1+n2))
elif [ $opr = "2" ]; then
echo $((n1-n2))
elif [ $opr = "3" ]; then
echo $((n1*n2))
elif [ $opr = "4" ]; then
echo $((n1/n2))
fi
