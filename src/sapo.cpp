/**
* @author Lucas Gabriel Matias Paiva
* @file sapo.cpp
* @brief Implementação da classe sapo que define como será o sapo da corrida
* @since 29/05/18
* @date 04/06/18
*/

#include "../include/sapo.hpp"
#include "../include/corrida.hpp"
#include <stdlib.h>
#include <time.h>

int Sapo::IdSeguinte;

Sapo::Sapo(){ // @suppress("Class members should be properly initialized")
	this->distanciaPercorrida = 0;
	this->pulosDados = 0;
}

Sapo::Sapo(string nome,int totalPulos, int corridasRealizadas, int saltoMaximo, int vitorias, int empates){
		this->id = Sapo::IdSeguinte + 1;
		Sapo::IdSeguinte++;
		this->nome = nome;
		this->distanciaPercorrida = 0;
		this->pulosDados = 0;
		this->totalPulos = totalPulos;
		this->corridasRealizadas = corridasRealizadas;
		this->vitorias = vitorias;
		this->empates = empates;
		this->saltoMaximo = saltoMaximo;
		this->posicaoRanking = 0;
}

Sapo::~Sapo(){

}


int Sapo::getId(){
	return this->id;
}

void Sapo::setId(int novoId){
	this->id = novoId;
}


string Sapo::getNome(){
	return this->nome;
}

void Sapo::setNome(string umNome){
	this->nome = umNome;
}


int Sapo::getDistanciaPercorrida(){
	return this->distanciaPercorrida;
}

void Sapo::setDistanciaPercorrida(int umaDistancia){
	this->distanciaPercorrida = umaDistancia;
}


int Sapo::getPulosDados(){
	return this->pulosDados;
}

void Sapo::setPulosDados(int pulos){
	this->pulosDados = pulos;
}


int Sapo::getTotalPulos(){
	return this->totalPulos;
}

void Sapo::setTotalPulos(int pulos){
	this->totalPulos = pulos;
}


int Sapo::getCorridasRealizadas(){
	return this->corridasRealizadas;
}

void Sapo::setCorridasRealizadas(int corridas){
	this->corridasRealizadas = corridas;
}


int Sapo::getSaltoMaximo(){
	return this->saltoMaximo;
}

void Sapo::setSaltoMaximo(int salto){
	this->saltoMaximo = salto;
}


int Sapo::getPosicaoRanking(){
	return this->posicaoRanking;
}

void Sapo::setPosicaoRanking(int posicao){
	this->posicaoRanking = posicao;
}

int Sapo::getVitorias(){
	return this->vitorias;
}

void Sapo::setVitorias(int vitorias){
	this->vitorias = vitorias;
}

void Sapo::novaVitoria(){
	this->vitorias++;
}

int Sapo::getEmpates(){
	return this->empates;
}
void Sapo::setEmpates(int empates){
	this->empates = empates;
}
void Sapo::novoEmpate(){
	this->empates++;
}

void Sapo::pular(){
	int pulo;
	if(this->distanciaPercorrida <= Corrida::tamanho){
		pulo = rand()%((this->saltoMaximo)+1);
		this->distanciaPercorrida += pulo;
		this->pulosDados++;
		this->totalPulos++;
		cout << "Nome: " << this->nome << endl;
		cout << "ID: " << this->id << endl;
		cout << "Pulo Dado: " << pulo << endl;
		if(this->distanciaPercorrida >= Corrida::tamanho)
			cout << "Sapo " << this->nome << " acaba de cruzar a linha de chegada!" << endl;
	}
}

ostream& operator << (ostream &o, Sapo &sapo){
	o << "|---------------------------------------------|" << endl
			<< "Nome: " << sapo.getNome() << endl
			<< "ID: " << sapo.getId() << endl
			<< "Corridas Realizadas: " << sapo.getCorridasRealizadas() << endl
			<< "Vitorias: " << sapo.getVitorias() << endl
			<< "Potência: " << sapo.getSaltoMaximo() << endl
			<< "Total de Pulos: " << sapo.getTotalPulos() << endl
			<< "|_____________________________________________|" << endl;

	return o;
}
