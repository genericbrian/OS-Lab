## Step-1
Use the C program
## Step-2
Step 2: Writing the make file
obj-m += helloworld.o <br>
all: <br>
 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules <br>
clean: <br>
 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean <br>
Link to a tutorial:https://www.geeksforgeeks.org/linux-kernel-module-programming-hello-world-program/
