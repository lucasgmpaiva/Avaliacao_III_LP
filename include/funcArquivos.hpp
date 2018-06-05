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
using namespace std;
#include "sapo.hpp"
#include "pista.hpp"

void lerArquivoSapos(vector<Sapo> &sapos);
void escreverArquivoSapos(vector<Sapo> &sapos);
void lerArquivoPistas(vector<Pista> &pistas);
void escreverArquivoPistas(vector<Pista> &pistas);

#endif
