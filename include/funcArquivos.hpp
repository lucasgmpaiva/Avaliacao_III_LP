/**
* @author Lucas Gabriel Matias Paiva
* @file funcArquivos.hpp
* @brief Cabeçalho das funções para ler e escrever arquivos de sapos e pistas
* @since 04/06/18
* @date 05/06/18
*/

#ifndef ARQUIVOS_HPP
#define ARQUIVOS_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
#include "sapo.hpp"
#include "pista.hpp"

/**
	* @brief Funcao que lê o arquivo dos Sapos e preenche o vector de Sapos
	* @param Vector de Sapos à ser preenchido
	* @return -------
	*/
void lerArquivoSapos(vector<Sapo> &sapos);
/**
	* @brief Funcao que escreve o arquivo dos Sapos com os Sapos presentes no vector
	* @param Vector de Sapos à ser escrito
	* @return -------
	*/
void escreverArquivoSapos(vector<Sapo> &sapos);
/**
	* @brief Funcao que lê o arquivo das Pistas e preenche o vector de Pistas
	* @param Vector de Pistas à ser preenchido
	* @return -------
	*/
void lerArquivoPistas(vector<Pista> &pistas);
/**
	* @brief Funcao que escreve o arquivo das Pistas com as Pistas presentes no vector
	* @param Vector de Pistas à ser escrito
	* @return -------
	*/
void escreverArquivoPistas(vector<Pista> &pistas);

#endif
