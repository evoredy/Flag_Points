#!/bin/bash
for ((c=101;c<=200;c++))
do
echo echo "Time: $(date)" >> tester.txt
git add .
git commit -m "I Win! # $c"
git pull
git push 
done
