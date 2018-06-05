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
	vector<Pista> pistas;
	lerArquivoSapos(sapos);
	lerArquivoPistas(pistas);
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
				escreverArquivoSapos(sapos);
				break;

			case 2:
				corrida.adicionarSapo();
				sapos = corrida.getSapos();
				escreverArquivoSapos(sapos);
				break;

			case 3:
				criarPista(pistas);
				escreverArquivoPistas(pistas);
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

	escreverArquivoSapos(sapos);
	escreverArquivoPistas(pistas);

	return 0;
}

