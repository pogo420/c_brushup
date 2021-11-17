# mkdir build
gcc -c include/person.c -o build/person.o
gcc -c include/liquor.c -o build/liquor.o
gcc -c src/main.c -o build/main.o
gcc build/person.o build/liquor.o build/main.o -o build/entry.o
