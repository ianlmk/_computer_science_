#!/usr/local/bin python3

# This thing has to compare files and decide if they are the same or different. 

import os
import sys
from datetime import datetime 



fName="analyze.txt"
f1 = open(fName,'r') 


def analyze():
  # integer declaratoin and default assignment
  sTime = 0
  timeSum = 0
  i = 0
  # current time var
  ct = 100

  # open the file
  with open(fName,'r') as f:
    # read the file line by line. assigne out to 'f'
    for line in f.readlines():
      # create fields using a delimiter
      fields = line.split(",")
      # standardized var assignment to fields
      session = fields[0]
      state = fields[1]
      time = fields[2].strip()
      # 2 possible states require time manipulations for later math
      if state == "open":
        sTime = int(ct) - int(time)
      elif state == "closed":
        sTime = int(time)

      i += 1
      timeSum += sTime
      print("{}.)  session: {}, state: {}, time: {}, sTime: {}, ".format(i,session,state,time,sTime)) 
    timeAve = timeSum / i
   
    print("\nmath: {} / {}\n".format(timeSum,i)) 
    print("average session time is: {}".format(timeAve))
  f.close()



if __name__ == '__main__':
  analyze()
