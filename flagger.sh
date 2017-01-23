#!/bin/bash
for ((c=1;c<=10;c++))
do
echo echo "Time: $(date)" >> tester.txt
git add .
git commit -m "Tester # $c"
git pull
git push 
done
