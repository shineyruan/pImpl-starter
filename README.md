# pImpl Starter
Starter files for in-lab pImpl activity including HelloWorld.h, HelloWorld.cpp, HelloWorldImpl.h, HelloWorldImpl.cpp, main.cpp, &amp; Makefile

## To use:
ssh into CAEN :
```
  $ ssh uniqname@login-oncampus.engin.umich.edu
```
once ssh-ed into CAEN, run:
```  
  $ module load gcc/7.1.0
```  
follow the instructions on the EECS 482 semaphores lab Q3 - Opaque Pointers to complete the starter files, then compile with:
```
  $ make
```
if you're finished, your results should look like:
```
  hello world 1
  hello world 2
  hello world 3
```
Be sure to look inside the Makefile & think about which .o files get recompiled when you make changes to HelloWorld.cpp, HelloWorldImpl.cpp, HelloWorldImpl.h, etc. Based on your answer, what is one of the benefits of using the pImpl idiom?
