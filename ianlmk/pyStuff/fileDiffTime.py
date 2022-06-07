#!/usr/local/bin python3

# This thing has to compare files and decide if they are the same or different. 

import os
import sys
import time 



sleepTime = 5
f1 = open(input("file 1 path: "),"r") 
f2 = open(input("file 2 path: "),"r")


def compare(f1,f2):

  i = 0
  same = True  
  for line1 in f1:
    i +=1
    for line2 in f2:
      if line1 == line2:
        same == True
      else:
        same = False
        break
      break
  
  if same == False:
    print("shits different yo")

  f1.close()
  f2.close()

def main(f1,f2): 
  time.sleep(sleepTime)
  compare(f1,f2)


if __name__ == '__main__':
  main(f1,f2)
