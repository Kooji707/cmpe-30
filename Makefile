week1.exe: week1.c
	gcc -o week1.exe week1.c
	./week1.exe
	ls -l
clean: 
	rm week1.exe; 