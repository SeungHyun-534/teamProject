manage : Grade.o CRUD.o Graph.o Search.o File.o main.c 
	gcc -o $@ $^
clean :
	rm *.o manage