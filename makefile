all: main.o Vec2.o
	g++ bin/*.o -o bin/test.exe -I include
	@echo

main.o: src/main.cpp
	g++ src/main.cpp -c -o bin/main.o -I include

Vec2.o: src/Vec2.cpp
	g++ src/Vec2.cpp -c -o bin/Vec2.o -I include

clean:
	rm bin/*

new:
	mkdir bin

test: all
	bin/test.exe
