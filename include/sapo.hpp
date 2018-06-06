/**
* @author Lucas Gabriel Matias Paiva
* @file sapo.hpp
* @brief Cabeçalho da classe sapo que define como serão implementados os sapos da corrida
* @since 29/05/18
* @date 04/06/18
*/

#ifndef SAPO_H
#define SAPO_H

#include <string>
#include <iostream>
using namespace std;


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
/**
	* @brief Construtor desparametrizado de Sapo
	* @param -------
	* @return -------
*/
	Sapo();
/**
	* @brief Construtor parametrizado de Pista
	* @param Uma string para o nome do sapo
	* @param Um valor inteiro para o total de pulos do Sapo
	* @param Um valor inteiro para o total de corridas realizadas pelo Sapo
	* @param Um valor inteiro para a potência máxima que o Sapo poderá saltar
	* @param Um valor inteiro para o total de vitórias do Sapo
	* @param Um valor inteiro parao total de empates do Sapo
	* @return -------
*/
	Sapo(string nome, int totalPulos, int corridasRealizadas, int saltoMaximo, int vitorias, int empates);
/**
	* @brief Destrutor da classe Sapo
	* @param -------
	* @return -------
*/
	~Sapo();
/**
	* @brief Funcao que retorna o ID do Sapo
	* @param -------
	* @return Um valor inteiro Id do Sapo
*/
	int getId();
/**
	* @brief Funcao que altera o valor do id do sapo
	* @param Um valor inteiro para ser o novo id do sapo
	* @return -------
*/
	void setId(int novoId);
/**
	* @brief Funcao que retorna o nome do Sapo
	* @param -------
	* @return Uma string com o nome do Sapo
*/
	string getNome();
/**
	* @brief Funcao que altera o nome do sapo
	* @param Uma string para ser o novo nome do sapo
	* @return -------
*/
	void setNome(string umNome);
/**
	* @brief Funcao que retorna a distancia percorrida pelo Sapo
	* @param -------
	* @return Um valor inteiro distancia percorrida
*/
	int getDistanciaPercorrida();
/**
	* @brief Funcao que altera o valor da distancia percorrida pelo sapo
	* @param Um valor inteiro para ser a nova distancia percorrida pelo sapo
	* @return -------
*/
	void setDistanciaPercorrida(int umaDistancia);
/**
	* @brief Funcao que retorna os pulos dados pelo Sapo na corrida
	* @param -------
	* @return Um valor inteiro que representa os pulos dados pelo Sapo na corrida
*/
	int getPulosDados();
/**
	* @brief Funcao que altera o valor dos pulos dados pelo sapo na corrida
	* @param Um valor inteiro para ser o novo valor dos pulos dados pelo sapo na corrida
	* @return -------
*/
	void setPulosDados(int pulos);
/**
	* @brief Funcao que retorna o total de pulos do Sapo
	* @param -------
	* @return Um valor inteiro que representa o total de pulos do Sapo
*/
	int getTotalPulos();
/**
	* @brief Funcao que altera o total de pulos dados pelo sapo
	* @param Um valor inteiro para ser o novo total de pulos dados pelo sapo
	* @return -------
*/
	void setTotalPulos(int pulos);
/**
	* @brief Funcao que retorna o total de corridas realizadas pelo sapo
	* @param -------
	* @return Um valor inteiro que representa o total de corridas do sapo
*/
	int getCorridasRealizadas();
/**
	* @brief Funcao que altera o total de corridas realizadas pelo sapo
	* @param Um valor inteiro para ser o novo total de corridas realizadas pelo sapo
	* @return -------
*/
	void setCorridasRealizadas(int corridas);
/**
	* @brief Funcao que retorna a potencia de salto do sapo
	* @param -------
	* @return Um valor inteiro a potencia de salto do sapo
*/
	int getSaltoMaximo();
/**
	* @brief Funcao que altera o valor do salto maximo do sapo
	* @param Um valor inteiro para ser o novo salto maximo do sapo
	* @return -------
*/
	void setSaltoMaximo(int salto);
/**
	* @brief Funcao que retorna a posicao do sapo no ranking da corrida
	* @param -------
	* @return Um valor inteiro posicao do sapo no ranking da corrida
*/
	int getPosicaoRanking();
/**
	* @brief Funcao que altera a posicao no ranking do sapo
	* @param Um valor inteiro para ser a nova posicao do sapo no ranking
	* @return -------
*/
	void setPosicaoRanking(int posicao);
/**
	* @brief Funcao que retorna o total de vitorias do sapo
	* @param -------
	* @return Um valor inteiro total de vitorias do sapo
*/
	int getVitorias();
/**
	* @brief Funcao que altera o total de vitorias do sapo
	* @param Um valor inteiro para ser o novo total de vitorias do sapo
	* @return -------
*/
	void setVitorias(int vitorias);
/**
	* @brief Funcao que incrementa em 1 o numero de vitorias do sapo
	* @param -------
	* @return -------
*/
	void novaVitoria();
/**
	* @brief Funcao que retorna o total de empates do sapo
	* @param -------
	* @return Um valor inteiro total de empates do sapo
*/
	int getEmpates();
/**
	* @brief Funcao que altera o total de empates do sapo
	* @param Um valor inteiro para ser o novo total de empates do sapo
	* @return -------
*/
	void setEmpates(int empates);
/**
	* @brief Funcao que incrementa em 1 o numero de empates do sapo
	* @param -------
	* @return -------
*/
	void novoEmpate();
/**
	* @brief Funcao que realiza o pulo do Sapo e exibe na tela o quanto ele pulou
	* @param -------
	* @return -------
*/
	void pular();
/**
	* @brief Sobrecarga do operador << para exibir os dados do Sapo
	* @param Um objeto ostream para ser escrito, e o Sapo a ser exibido
	* @return -------
*/
	friend ostream& operator << (ostream &o, Sapo &sapo);

	//Variável estática para armazenar o valor do próximo ID a ser inserido em um sapo
	static int IdSeguinte;

};


#endif
