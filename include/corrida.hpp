/**
 * @author Lucas Gabriel Matias Paiva
 * @file corrida.hpp
 * @brief Cabeçalho da classe corrida que define como será a corrida
 * @since 29/05/18
 * @date 04/06/18
 */

#ifndef CORRIDA_HPP
#define CORRIDA_HPP
#include <vector>
#include <iostream>
using namespace std;
#include "sapo.hpp"

class Corrida {
protected:
	int idCorrida;
	vector<Sapo> sapos;

public:
	static int tamanho;
	Corrida();
	Corrida(int id, int tamanho, vector<Sapo> sapos);
	~Corrida();
	int getIdCorrida();
	void setIdCorrida(int id);
	void realizarCorrida();
	bool sapoRetardado();
	void adicionarSapo();
};

#endif
