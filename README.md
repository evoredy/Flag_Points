# Flag_Points
Flag Points!

This is the bash script I utilized to gain 100 contributions for win a flag for our class.

Some conditions that must be met are:

git config --global credential.helper 'cache --timeout=3600'
//this will allow the script to run without pausing for a username and password--this will expire in 3600 seconds (15 min)
//verify you git install is functioning correctly

git config --global user.name "YOUR NAME"
//self explanatory

git config --global user.email "YOUR EMAIL ADDRESS"
//required to be set as a contributor's e-mail or else contirbutions will not increment

Make a "repository" like "Flag_Points," clone it, place the flagger.sh in the root of the clone directory and run it. It will spit out errors if your git is not configured correctly. If successful, it will iterate 100 times and succeed.

Enjoy the extra points!
