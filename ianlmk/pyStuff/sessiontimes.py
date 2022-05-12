#!/usr/local/bin python3

# This thing has to compare files and decide if they are the same or different. 

import os
import sys
 

def compare(f1,f2):

  i = 0
  
  for line1 in f1:
    i +=1
    for line2 in f2:
      print("line {}".format(i))
      if line1 == line2:
        print("line: {} SAME.".format(i))
      else:
        print("line: {} DIFFERENT.".format(i))
      break
  
  f1.close()
  f2.close()

if __name__ == '__main__':
  f1 = open(input("file 1 path: "),"r") 
  
  compare(f1,f2)
