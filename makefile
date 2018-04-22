#Makefile para "empresa" aplicação C++ 
#Desenvolvido por Bruno Lopes e Willian Talles em 02/04/2018

PROG = geometria
CC = g++
CPPFLAGS = -g -O0 -Wall -pedantic -ansi -std=c++11
OBJS = triangulo.o retangulo.o circulo.o piramide.o cubo.o paralelepipedo.o esfera.o controlador.o main.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

triangulo.o: triangulo.h
	$(CC) $(CPPFLAGS) -c triangulo.cpp

retangulo.o: retangulo.h
	$(CC) $(CPPFLAGS) -c retangulo.cpp

circulo.o: circulo.h
	$(CC) $(CPPFLAGS) -c circulo.cpp

piramide.o: piramide.h
	$(CC) $(CPPFLAGS) -c piramide.cpp

cubo.o: cubo.h
	$(CC) $(CPPFLAGS) -c cubo.cpp

paralelepipedo.o: paralelepipedo.h
	$(CC) $(CPPFLAGS) -c paralelepipedo.cpp

esfera.o: esfera.h
	$(CC) $(CPPFLAGS) -c esfera.cpp

controlador.o: controlador.h
	$(CC) $(CPPFLAGS) -c controlador.cpp

main.o: controlador.o
	$(CC) $(CPPFLAGS) -c main.cpp

clean:
	rm -f $(PROG) $(OBJS)