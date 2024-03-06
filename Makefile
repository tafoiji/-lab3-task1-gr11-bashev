bin/solution: bin/ obj/ obj/source.o
	gcc -o bin/solution obj/source.o

bin/:
	mkdir bin

obj/:
	mkdir obj

obj/source.o: src/source.c
	gcc src/source.c -o obj/source.o -c

clean:
	rm -r bin obj