/**
* @author Lucas Gabriel Matias Paiva
* @file sapo.hpp
* @brief Cabeçalho da classe sapo que define como será o sapo da corrida
* @since 29/05/18
* @date 04/06/18
*/

#ifndef SAPO_H
#define SAPO_H

#include <string>
	using namespace std;
#include <time.h>
#include <iostream>

class Sapo{
private:
	int id;
	string nome;
	int distanciaPercorrida;
	int pulosDados;
	int totalPulos;
	int corridasRealizadas;
	int saltoMaximo;
	int posicaoRanking;
	int vitorias;
	int empates;

public:

	Sapo();
	Sapo(string nome, int totalPulos, int corridasRealizadas, int saltoMaximo, int vitorias, int empates);
	~Sapo();

	int getId();
	void setId(int novoId);

	string getNome();
	void setNome(string umNome);

	int getDistanciaPercorrida();
	void setDistanciaPercorrida(int umaDistancia);

	int getPulosDados();
	void setPulosDados(int pulos);

	int getTotalPulos();
	void setTotalPulos(int pulos);

	int getCorridasRealizadas();
	void setCorridasRealizadas(int corridas);

	int getSaltoMaximo();
	void setSaltoMaximo(int salto);

	int getPosicaoRanking();
	void setPosicaoRanking(int posicao);

	int getVitorias();
	void setVitorias(int vitorias);
	void novaVitoria();

	int getEmpates();
	void setEmpates(int empates);
	void novoEmpate();

	void pular();

	friend ostream& operator << (ostream &o, Sapo &sapo);

	//Variável estática para armazenar o valor do próximo ID a ser inserido em um sapo
	static int IdSeguinte;

};


#endif
