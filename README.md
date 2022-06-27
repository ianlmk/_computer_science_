# _computer_science_
## A place for our code
___

Just a place to keep code for school. 

***

The .bashrc is a form of env config to make it easy for ME to run single file programs using `cs <source_cpp>`

Example: 
```
>>> cs 9.2.1.cpp
Fed342hjdSA#@
FedhjdSA
``` 

***

As I have been the only one to use version control to manage my code, all of the classes assignments are templated: 

```
>>> ls -R <path_to_template_dir_cs162>| grep ":$" | sed -e 's/:$//' -e 's/[^-][^\/]*\//──/g' -e 's/─/├/' -e '$s/├/└/'
.
├─algorithms
├─assignment1
├─assignment2
├─assignment3
├─assignment4
├─assignment5
├─discussions
├───discussion6
├─final
├───actual
├───practice1
├───practice2
├─midterm
├───actual
├───practice
├─misc
└─zybooks

```
