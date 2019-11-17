


all:basicMath.o power.o main.o mymaths mymathd mains maind

basicMath.o:basicMath.c
	$ gcc -Wall -c $^
	 
power.o:power.c
	$ gcc -Wall -c $^

main.o:main.c 
	$ gcc -Wall -c $^

mymaths:basicMath.o power.o
	$ ar rc libmyMath.a $^
	
mains:main.o 
	$ gcc -Wall main.o -L. -lmyMath -o $@
	
mymathd:basicMath.o power.o
	$ gcc -Wall -shared -o libmyMath.so $^ 

maind:main.o 
	$ gcc -Wall main.o -L. -lmyMath -o $@
	
clean:
	$ rm *o *a maind mains

.PHONY: mymaths mymath
