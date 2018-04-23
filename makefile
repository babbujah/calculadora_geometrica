# Makefile for "laboratório 2"
# Created by Bruno César 02/04/2018
#
# Makefile completo separando os diferentes elementos da aplicacao como codigo (src),
# cabecalhos (include), executaveis (build), bibliotecas (lib), etc.
# Cada elemento é alocado em uma pasta especifica, organizando melhor o codigo fonte.
#
# Algumas variáveis são usadas com significado especial:
#
# $@ nome do alvo (target)
# $^ lista com os nomes de todos os pre-requisitos sem duplicatas
# $< nome do primeiro pre-requisito
#

# Comandos do sistema operacional
# Linux: rm -rf 
# Windows: cmd //C del 
RM = rm -rf 

# Compilador
CC = g++

# Variaveis para os subdiretorios
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build
DOC = ./doc

# Define o nome do binario/executavel final
PROG = $(BIN)/geometria

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean debug doxy doc

# Opcoes de compilacao
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

# Lista dos arquivos objeto (.o) que formam o binario/executavel final
OBJS = $(OBJ)/triangulo.o $(OBJ)/retangulo.o $(OBJ)/circulo.o $(OBJ)/piramide.o $(OBJ)/cubo.o $(OBJ)/paralelepipedo.o $(OBJ)/esfera.o $(OBJ)/controlador.o $(OBJ)/main.o

all : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

# Alvo para a compilação com informações de debug
# Altera a flag CFLAGS, incluindo as opções -g -O0 e recompila todo o projeto
debug: CFLAGS += -g -O0 
debug: all

# Alvo para a construcao do objeto build/main.o
# Define os arquivos objeto dos quais main.o depende.
$(OBJ)/main.o: $(OBJ)/controlador.o
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@

$(OBJ)/triangulo.o: $(INC)/triangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/triangulo.cpp -o $@

$(OBJ)/retangulo.o: $(INC)/retangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/retangulo.cpp -o $@

$(OBJ)/circulo.o: $(INC)/circulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/circulo.cpp -o $@

$(OBJ)/piramide.o: $(INC)/piramide.h $(OBJ)/triangulo.o $(OBJ)/retangulo.o
	$(CC) $(CPPFLAGS) -c $(SRC)/piramide.cpp -o $@

$(OBJ)/cubo.o: $(INC)/cubo.h $(OBJ)/retangulo.o
	$(CC) $(CPPFLAGS) -c $(SRC)/cubo.cpp -o $@

$(OBJ)/paralelepipedo.o: $(INC)/paralelepipedo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/paralelepipedo.cpp -o $@

$(OBJ)/esfera.o: $(INC)/esfera.h
	$(CC) $(CPPFLAGS) -c $(SRC)/esfera.cpp -o $@

$(OBJ)/controlador.o: $(INC)/controlador.h $(OBJ)/triangulo.o $(OBJ)/retangulo.o $(OBJ)/circulo.o $(OBJ)/piramide.o $(OBJ)/cubo.o $(OBJ)/esfera.o $(OBJ)/paralelepipedo.o
	$(CC) $(CPPFLAGS) -c $(SRC)/controlador.cpp -o $@

# Alvo para a criação do arquivo Doxyfile.
doxy:
	doxygen -g

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doc:
	$(RM) $(DOC)/*
	doxygen ./Doxyfile

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(PROG) $(OBJS)
