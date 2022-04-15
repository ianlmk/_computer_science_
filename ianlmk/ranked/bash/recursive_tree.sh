#!/usr/bin/env bash

declare -A a

depth=16
length=16
row=63
column=100

f() {
    local d=$depth l=$length r=$row c=$column
    [[ $d -eq 0 ]] && return
    for ((i=l; i; i--)); do
        a[$((r-i)).$c]=1
    done
    ((r -= l))
    for ((i=l; i; i--)); do
        a[$((r-i)).$((c-i))]=1
        a[$((r-i)).$((c+i))]=1
    done
    f $((d-1)) $((l/2)) $((r-l)) $((c-l))
    f $((d-1)) $((l/2)) $((r-l)) $((c+l))
}
f
for ((i=0; i<${row}; i++)); do
    for ((j=0; j<${column}; j++)); do
        if [[ ${a[$i.$j]} ]]; then
            printf 1
        else
            printf _
        fi
    done
    echo
done
