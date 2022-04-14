#!/bin/bash
i=0
all=0


while IFS= read -r LINE || [[ -n "$LINE" ]]; do
    all=$all+$LINE
    ((i++))
done

tot=`echo $all | bc -l`
ave=`echo "$tot / $i" | bc -l` 

echo $tot
echo $ave

printf "%.3f" $ave

