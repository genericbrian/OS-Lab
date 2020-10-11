## Step-1
Use the C program
## Step-2
Step 2: Writing the make file
<<<<<<< HEAD
obj-m += helloworld.o
all:
 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
## Step 3: Inserting Kernel modules
## Step 4: Removing Kernel module
    
=======
obj-m += helloworld.o <br>
all: <br>
 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules <br>
clean: <br>
 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean <br>
Link to a tutorial:https://www.geeksforgeeks.org/linux-kernel-module-programming-hello-world-program/
>>>>>>> e37384d1997fcc4d113ca1df42c4183aa3cf2498
