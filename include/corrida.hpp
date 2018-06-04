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
	vector<Sapo> sapos;

public:
	static int tamanho;
	Corrida();
	Corrida(vector<Sapo> &sapos);
	~Corrida();
	vector<Sapo> getSapos();
	void realizarCorrida();
	bool sapoRetardado();
	void adicionarSapo();
	void mostrarSapos();
};

#endif
