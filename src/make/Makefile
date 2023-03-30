calculate: main math math.a math.so
	gcc -o calculate1 main.o math.o
	gcc -o calculate2 -static main.o math.a
	gcc -o calculate3 main.o math.so
main:
	gcc -c -o main.o main.c
math:
	gcc -c -o math.o math.c
math.a: math
	ar rcs math.a math.o
math.so: math
	gcc -shared -fpic -o math.so math.o
objdump: calculate
	objdump -xa calculate1 > calculate1.objdump
	objdump -xa calculate2 > calculate2.objdump
	objdump -xa calculate3 > calculate3.objdump
clean:
	rm -fr *.o *.so *.a calculate* *.objdump