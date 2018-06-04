/**
* @author Lucas Gabriel Matias Paiva
* @file pista.cpp
* @brief Implementação da classe pista que define como será a pista da corrida
* @since 02/06/18
* @date 04/06/18
*/

#include "../include/pista.hpp"

int Pista::IDseguinte;

Pista::Pista(){ // @suppress("Class members should be properly initialized")

}

Pista::Pista(int comprimento){
	this->comprimento = comprimento;
	this->idPista = IDseguinte +1;
	IDseguinte++;
}

Pista::~Pista(){

}

int Pista::getId(){
	return this->idPista;
}

void Pista::setId(int id){
	this->idPista = id;
}

int Pista::getComprimento(){
	return this->comprimento;
}

void Pista::setComprimento(int comprimento){
	this->comprimento = comprimento;
}

ostream& operator<< (ostream &o, Pista &pista){
	o << "|---------------------------------------------|" << endl
			<< "ID: " << pista.getId() << endl
			<< "Comprimento: " << pista.getComprimento() << endl;

	return o;
}
