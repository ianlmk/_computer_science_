#!/bin/bash python3

import os
import sys

intList = [2,96,82,3,57,45,54,56,12,4,13,27,23]
charList = ['ayla','elizabeth','soleil','annabella','isla','maeve','quinn','mackenzie','aidan','rowana','delaney','kianna','mckenna']

def simple_sort(intList):
  print(sorted(intList))

def int_bubble_sort(intList):
  for i in range(0,len(intList)):
    for j in range(0,len(intList) - i - 1):
      if intList[j] > intList[j + 1]:
        for x in range(0, len(intList)):
          print("{} ".format(intList[x]), end =' ')
        print('')
        intList[j], intList[j + 1] = intList[j + 1], intList[j]


def string_bubble_sort(charList):
  for i in range(0,len(charList)):
    for x in range(1,len(charList) - i -1):
      if charList[x] > charList[x + 1]:
        charList[x], charList[x + 1] = charList[x + 1], charList[x]
        for y in range(0,len(charList)):
          print("{} ".format(charList[y]), end =' ')
        print('')
    




if __name__ =='__main__':
  print("intList = {}".format(intList))
  print("SIMPLE SORT INTs:\n using 'sorted(numList):' ")
  simple_sort(intList)
  print("\nINTEGER BUBBLE SORT: ")
  
  print("charList = {}".format(charList))
  print("SIMPLE SORT STRINGS:\n using 'sorted(charList):' ")
  int_bubble_sort(intList)
  print("\nSTRING BUBBLE SORT: ")
  string_bubble_sort(charList)

  print("\n")

