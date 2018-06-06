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
/**
	* @brief Construtor desparametrizado de Pista
	* @param -------
	* @return -------
*/
	Pista();
/**
	* @brief Construtor parametrizado de Pista
	* @param Um valor inteiro comprimento da pista
	* @return -------
*/
	Pista(int comprimento);
/**
	* @brief Destrutor da classe Pista
	* @param -------
	* @return -------
*/
	~Pista();
/**
	* @brief Funcao que retorna o ID da Pista
	* @param -------
	* @return Um valor inteiro Id da Pista
*/
	int getId();
/**
	* @brief Funcao que altera o ID da Pista
	* @param Um valor inteiro para ser o novo ID da Pista
	* @return -------
*/
	void setId(int id);
/**
	* @brief Funcao que retorna o comprimento da Pista
	* @param -------
	* @return Um valor inteiro comprimento da Pista
*/	
	int getComprimento();
/**
	* @brief Funcao que altera o comprimento da Pista
	* @param Um valor inteiro para ser o novo comprimento da Pista
	* @return -------
*/
	void setComprimento(int comprimento);
/**
	* @brief Sobrecarga do operador << para exibir os dados da Pista
	* @param Um objeto ostream para ser escrito, e a Pista a ser exibida
	* @return -------
*/
	friend ostream& operator<< (ostream &o, Pista &pista);
};




#endif
