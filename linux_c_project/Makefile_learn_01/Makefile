main.out:main.o sum.o Test_code.o
	gcc main.o sum.o test_code.o  -o main.out && ./main.out
main.o:main.c
	gcc -c main.c 
sum.o:sum.c 
	gcc -c sum.c
Test_code.o:
	gcc -c test_code.c
clean:
	rm -rf *o main.out
