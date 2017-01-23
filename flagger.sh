#!/bin/bash
for ((c=1;c<=100;c++))
do
echo echo "Time: $(date)" >> tester.txt
git add .
git commit -m "I Win! # $c"
git pull
git push 
done
