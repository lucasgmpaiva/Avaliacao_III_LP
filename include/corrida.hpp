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
/**
	* @brief Construtor desparametrizado de Corrida
	* @param -------
	* @return -------
*/
	Corrida();
/**
	* @brief Construtor parametrizado de Corrida
	* @param Um vector de objetos da classe Sapos
	* @return -------
*/
	Corrida(vector<Sapo> &sapos);
/**
	* @brief Destrutor da classe Corrida
	* @param -------
	* @return -------
*/
	~Corrida();
/**
	* @brief Funcao que retorna o vector de Sapos da Corrida
	* @param -------
	* @return Vector de Sapos da Corrida
*/
	vector<Sapo> getSapos();
/**
	* @brief Funcao que realiza a corrida, passo-a-passo
	* @param -------
	* @return -------
*/
	void realizarCorrida();
/**
	* @brief Funcao que verifica se ainda falta algum sapo cruzar a linha de chegada
	* @param -------
	* @return Variável booleana que retorna true se faltar algum sapo, e false se não
*/
	bool sapoRetardado();
/**
	* @brief Funcao que solicitará ao usuário os dados do sapo e o adicionará à corrida
	* @param -------
	* @return -------
*/
	void adicionarSapo();
	void mostrarSapos();
};

#endif
