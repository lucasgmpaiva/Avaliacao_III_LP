/**
* @author Lucas Gabriel Matias Paiva
* @file opPista.hpp
* @brief Cabeçalho das funções para organizar o vetor de Pistas
* @since 02/06/18
* @date 04/06/18
*/

#ifndef OPPISTA_HPP
#define OPPISTA_HPP
#include <string>
#include <sstream>
#include <vector>
using namespace std;
#include "pista.hpp"
#include "corrida.hpp"

/**
	* @brief Funcao que cria Pista no vector de Pista
	* @param Um vector de pistas para armazenar a nova pista
	* @return -------
*/
void criarPista(vector<Pista> &pistas);
/**
	* @brief Funcao que pede ao usuario que selecione a pista para a corrida
	* @param Um vector de pistas para ser exibido
	* @return -------
*/
void selectPista(vector<Pista> pistas);


#endif
