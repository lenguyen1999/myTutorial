hello.o: hello.c
		gcc -c hello.c
		
hello: hello.o
		gcc -o hello hello.o

clean: hello.o hello.exe
		rm hello.o hello.exe
		echo "clean"