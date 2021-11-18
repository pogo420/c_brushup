# linking objects
build/entry.o: build/person.o build/liquor.o build/main.o
	gcc build/person.o build/liquor.o build/main.o -o build/entry.o

# person object 
build/person.o: include/person.c include/person.h
	gcc -c include/person.c -o build/person.o

# liquor object
build/liquor.o: include/liquor.c include/liquor.h
	gcc -c include/liquor.c -o build/liquor.o

# main object
build/main.o: src/main.c
	gcc -c src/main.c -o build/main.o

clean:
	rm build/*.o
