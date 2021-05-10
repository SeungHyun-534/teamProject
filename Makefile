manage : Grade.o CRUD.o Graph.o main.c 
	gcc -o $@ $^
clean :
	rm *.o manage