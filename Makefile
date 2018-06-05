
PROG = Corrida
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic
OBJS = sapo.o pista.o corrida.o opPista.o funcArquivos.o main.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o bin/$(PROG)

main.o :
	$(CC) $(CPPFALGS) -c src/main.cpp

sapo.o : include/sapo.hpp
	$(CC) $(CPPFLAGS) -c src/sapo.cpp

pista.o : include/pista.hpp
	$(CC) $(CPPFLAGS) -c src/pista.cpp

corrida.o : include/corrida.hpp
	$(CC) $(CPPFLAGS) -c src/corrida.cpp	

opPista.o : include/opPista.hpp
	$(CC) $(CPPFLAGS) -c src/opPista.cpp

funcArquivos.o : include/funcArquivos.hpp
	$(CC) $(CPPFLAGS) -c -std=c++11  src/funcArquivos.cpp

move:
	mv *.o build/

clean:
	rm -f build/*.o
	rm -f bin/*