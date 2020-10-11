## Step-1
Use the C program
## Step-2
Step 2: Writing the make file
obj-m += helloworld.o
all:
 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
## Step 3: Inserting Kernel modules
## Step 4: Removing Kernel module
