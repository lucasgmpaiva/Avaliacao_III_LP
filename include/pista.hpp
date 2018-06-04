/**
* @author Lucas Gabriel Matias Paiva
* @file pista.hpp
* @brief Cabeçalho da classe pista que define como será a pista da corrida
* @since 02/06/18
* @date 04/06/18
*/


#ifndef PISTA_HPP
#define PISTA_HPP
#include <iostream>
#include <ostream>
using namespace std;

class Pista{
private:
	int idPista;
	int comprimento;

public:

	static int IDseguinte;

	Pista();
	Pista(int comprimento);
	~Pista();

	int getId();
	void setId(int id);
	int getComprimento();
	void setComprimento(int comprimento);

	friend ostream& operator<< (ostream &o, Pista &pista);
};




#endif
