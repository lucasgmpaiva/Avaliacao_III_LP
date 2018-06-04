/**
* @author Lucas Gabriel Matias Paiva
* @file opPista.cpp
* @brief Implementação das funções para organizar o vetor de Pistas
* @since 02/06/18
* @date 04/06/18
*/

#include "../include/opPista.hpp"

void criarPista(vector<Pista> &pistas){
	int comprimento;
	cout << "|------------- Criando Pista -----------------|" << endl;
	cout << "Informe o comprimento da pista: " << endl;
	cin >> comprimento;
	Pista pista(comprimento);
	pistas.push_back(pista);
	cout << "Pista criada!" << endl;
	cout << "|_____________________________________________|" << endl;
}

void selectPista(vector<Pista> pistas){
	int selected, x=1;
	cout << "|------------- Selecionando Pista ------------|" << endl;
	cout << "Selecione uma das pistas abaixo:" << endl;
	for(int i = 0; i < (int) pistas.size(); i++){
		cout << pistas[i];
	}
	while(x){
		cout << "Selecionada: ";
		cin >> selected;
		for (int i = 0; i < (int) pistas.size(); i++) {
			if(selected == pistas[i].getId()){
				Corrida::tamanho = pistas[i].getComprimento();
				return;
			}
		}

		cout << "Pista inexistente!";
	}
}
