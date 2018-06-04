/**
* @author Lucas Gabriel Matias Paiva
* @file main.cpp
* @brief Arquivo de armazenamento do método main
* @since 29/05/18
* @date 04/06/18
*/

#include "../include/main.hpp"

int main(){
	vector<Sapo> sapos;
	//nome, totalPulos, corridasRealizadas, saltoMaximo, vitorias, empates
	Sapo s1("Elvis Presley", 0, 0, 5, 0, 0);
	sapos.push_back(s1);
	Sapo s2("Michael Jackson", 0, 0, 8, 0, 0);
	sapos.push_back(s2);
	Sapo s3("Bob Dylan", 0, 0, 7, 0, 0);
	sapos.push_back(s3);
	vector<Pista> pistas;
	//tamanho
	Pista p1(500);
	pistas.push_back(p1);
	Pista p2(250);
	pistas.push_back(p2);
	Pista p3(1000);
	pistas.push_back(p3);

	Corrida corrida(sapos);

	int opcao;

	do{
		cout << "|------------------- Menu --------------------|" << endl;
		cout << "Selecione a opção desejada: " << endl
				<< "0 - Sair do programa;" << endl
				<< "1 - Iniciar uma corrida;" << endl
				<< "2 - Adicionar sapo;" << endl
				<< "3 - Adicionar pista;" << endl
				<< "4 - Ver sapos (estatísticas);" << endl
				<< "5 - Ver pistas (estatísticas)." << endl << endl;
		cout << "Selecionada: ";
		cin >> opcao;

		switch (opcao) {
			case 0:
				cout << "Saindo do programa! =)" << endl;
				break;

			case 1:
				selectPista(pistas);
				corrida.realizarCorrida();
				sapos = corrida.getSapos();
				break;

			case 2:
				corrida.adicionarSapo();
				sapos = corrida.getSapos();
				break;

			case 3:
				criarPista(pistas);
				break;

			case 4:
				for(int i = 0; i < (int) sapos.size(); i++){
					cout << sapos[i];
				}
				break;

			case 5:
				for(int i = 0; i < (int) pistas.size(); i++){
					cout << pistas[i];
				}
				break;

			default:
				break;
		}


	}while(opcao != 0);

	return 0;
}

