#!/usr/bin/ python3
'''
             author:    < Ian LaMotte-Kerr
        description:    < just a study on structures in python
              input:    < none for now
             output:    < various shit related to data types, structures and algorithms
             return:    < if you have to

'''

import sys
import os


print("#########################################################")
print("#                      INDEXING                         #")
print("#########################################################")
# indexes are position mapping tools
# you can call them directly, or in a loop. 

# EXAMPLES:
#----------string indexing----------#  
x = 'frog'
print("\nstring x = 'frog'\nx[3] = {}\n".format(x[3]))
#
#-----------list indexing-----------#
y = ['dog','cat','fish']
print("\nlist y = ['dog','cat','fish']\ny[0] = {}\n".format(y[0]))
#
#----------tuple indexing-----------# 
z = ('ian','caitlin','ayla','sawyer')
print("\ntuple: z = ('ian','caitlin','ayla','sawyer')\nz[2] = {}\n".format(z[2])) 
#-----------------------------------#

print("#########################################################")
print("#                      SLICING                          #")
print("#########################################################")
# slices find subSTRINGS, subLISTS, subTUPLES using indeces 
# format: [start:end+1:step] where:
  # start = the index to start, 
  # end+1 = the last position  
  # step = how many steps to take when iterating. Default is 1

# STRING EXAMPLES:
varA = 'computadora'
print("\nvarA = {}".format(varA)) 
for i in varA:
  print("'{}',".format(i), end = ' ')
print('')
for i in range(0, len(varA)):
  print("'{}',".format(i), end = ' ')

# from index 1 - 4:
print("\n  varA[1:4] = {}".format(varA[1:4]))

#from index 1 - 6, but every 2 chars
print("  varA[1:6:2] = {}".format(varA[1:6:2]))

#from index 3 on
print("  varA[3:] = {}".format(varA[3:]))

# from the beginning to index 5
print("  varA[:5] = {}".format(varA[:5]))

# last char ( len(varA) - 1)
print("  varA[-1] = {}".format(varA[-1]))

# from start until the second to last char
print("  varA[:-2] = {}".format(varA[:-2]))



print("\n#########################################################")
print("#                ADDING/CONCATENATING                   #")
print("#########################################################")
# adding and concatenating combine ints/strings/chars/lists
# formatting is similar for all data types. Tuples need a "," at the end of a single itemed tuple

print("\nSTRINGS:")
stringA = 'lunch' + 'box'
print("stringA = 'lunch' + 'box' | {}".format(stringA))
print("stringA * 3 = {}".format(stringA * 3))
print('')

print("LISTS:")
listA = ['mac','linux'] + ['windows','freeBSD']
print("listA = ['mac','linux'] + ['windows','freeBSD'] | {}".format(listA))
print("listA * 2 = {}".format(listA * 2))
print('')

print("TUPLES:")
tupleA = ('ian','caitlin','sawyer') + ('ayla',)
print("tupleA = ('ian','caitlin','sawyer') + ('ayla',) | {}".format(tupleA))
print("tupleA * 4 = {}".format(tupleA * 4))
print('')


print("\n#########################################################")
print("#                 MEMBERSHIP CHECKS                     #")
print("#########################################################")
# Membership checking returns boolean values. 
# These can be used for more than a print action

stringB = 'lunchbox'
result = ('u' in stringB)
print("stringB = 'lunchbox'\n  result = ('u' in stringB): {}".format(result))
print('')

listB = ['left','center','right']
result = ('center' not in listB)
print("listB = ['left','center','right']\n  result = ('center' not in listB): {}".format(result))
print('')

tupleB = ('coffee','tea','water')
result = ('coffee' in tupleB)
print("tupleB = ('coffee','tea','water')\n  result = ('coffee' in tupleB): {}".format(result))
print('')


print("\n#########################################################")
print("#                     ITERATIONS                        #")
print("#########################################################")
# Iterating structures is a "for" loop action
#

listC = ['one','two','three','four','five']

print("listC = ['one','two','three','four','five']\n>> for item in listC:\n   print(item)\n--------")

# just a for loop to iterate the list
for item in listC:
  print(item)
print("--------")

# to get the index along with the item, enumerate returns what we want: 
print(">> for h,k in enumerate(listC):\n  print(h,k)\n--------")
for h,k in enumerate(listC):
  print(h,k)
print("--------")

tupleC = ('snoopy','linus','charlie','lucy','pigpen',)


print("\n#########################################################")
print("#                    COUNT ITEMS                        #")
print("#########################################################")
# just use the len(var) operator

stringCount = 'letters' 
stringLen = len(stringCount)
print("stringCount = 'letters'\n  stringLen = len(stringCount)\n  stringLen: {}".format(stringLen))

listCount = [1,2,3,4,5,6,7,8,9,0]
listLen = len(listCount)
print("listCount = [1,2,3,4,5,6,7,8,9,0]\n  listLen = len(listCount)\n  listLen: {}".format(listLen))

tupleCount = (1,2,3,4,5,6,7,8,9)
tupleLen = len(tupleCount)
print("tupleCount = (1,2,3,4,5,6,7,8,9)\n  tupleLen = len(tupleCount)\n  tupleLen: {}".format(tupleLen))


print("\n#########################################################")
print("#                       MIN/MAX                         #")
print("#########################################################")
# There are a few ways to pull out min/max
# Start of algorithms. 
#------------ Minimum Algo ------------#
stringD= "the skinny brown fox xyz"
minChar = stringD[0]
maxChar = stringD[0]
for i in range(0,len(stringD)):
  if stringD[i] != ' ':
    if stringD[i] > minChar:
      minChar = stringD[i]
print("smallest char in '{}': '{}'".format(stringD, minChar))

for i in range(0, len(stringD)):
  if stringD[i] != ' ':
    if stringD[i] < maxChar:
      maxChar = stringD[i]
print("largest char in '{}': '{}'".format(stringD, maxChar))

    






