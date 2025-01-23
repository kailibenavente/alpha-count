program: AlphaCount.o
	gcc AlphaCount.o -o program

AlphaCount.o: AlphaCount.c
	gcc -c AlphaCount.c
