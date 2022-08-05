build:
	mkdir build
	gcc -c dll.c
	gcc -c main.c
	gcc dll.o main.o -o mainExe
	mv dll.o main.o mainExe ./build

clean:
	rm -r ./build

run:
	./build/mainExe