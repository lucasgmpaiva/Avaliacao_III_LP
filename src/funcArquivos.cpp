/**
 * @author Lucas Gabriel Matias Paiva
 * @file funcArquivos.cpp
 * @brief Implementação das funções para ler e escrever arquivos de sapos e pistas
 * @since 04/06/18
 * @date 05/06/18
 */

#include "../include/funcArquivos.hpp"

void lerArquivoSapos(vector<Sapo> &sapos) {
	string line;
	ifstream arquivo("Arquivos/Sapos.txt");

	if (!arquivo.is_open()) {
		cout << "Arquivo de sapos inexistente!" << endl;
		return;
	}

	int linhaAtual = 1;
	string nome;
	int corridasRealizadas, totalPulos, vitorias, empates, saltoMaximo;

	while (!arquivo.eof()) {
		getline(arquivo, line);
		if (line == "")
			break;
		switch (linhaAtual) {
		case 1:
			//Para garantir que ao ser criado no programa, o sapo tenha o mesmo ID do arquivo
			Sapo::IdSeguinte = stoi(line) - 1;
			break;
		case 2:
			nome = line;
			break;
		case 3:
			corridasRealizadas = stoi(line);
			break;
		case 4:
			totalPulos = stoi(line);
			break;
		case 5:
			saltoMaximo = stoi(line);
			break;
		case 6:
			vitorias = stoi(line);
			break;
		default:
			break;
		}
		if(linhaAtual == 7){
			empates = stoi(line);
			linhaAtual = 0;
			Sapo sapo(nome, totalPulos, corridasRealizadas, saltoMaximo,
										vitorias, empates);
			sapos.push_back(sapo);
		}
		linhaAtual++;
	}

	arquivo.close();
}

void escreverArquivoSapos(vector<Sapo> &sapos) {
	ofstream arquivo("Arquivos/Sapos.txt");
	if (!arquivo.is_open()) {
		cout << "Impossível inciar arquivo de sapos!" << endl;
		return;
	}
	for (int i = 0; i < (int) sapos.size(); i++) {
		arquivo << sapos[i].getId() << "\n" << sapos[i].getNome() << "\n" << sapos[i].getCorridasRealizadas() << "\n"
				<< sapos[i].getTotalPulos() << "\n" << sapos[i].getSaltoMaximo() << "\n" << sapos[i].getVitorias() << "\n"
				<< sapos[i].getEmpates() << "\n";
	}
	arquivo.close();
}

void lerArquivoPistas(vector<Pista> &pistas){
	string line;
	ifstream arquivo("Arquivos/Pistas.txt");

	if(!arquivo.is_open()){
		cout << "Arquivo de pistas inexistente!" << endl;
		return;
	}

	int linhaAtual = 1;
	int comprimento, id = 0;

	while(!arquivo.eof()){
		getline(arquivo, line);
		if(line == "")
			break;

		if(linhaAtual == 1 && (stoi(line)-id)==1){
			Pista::IDseguinte = stoi(line)-1;
			id = stoi(line);
		} else if(linhaAtual == 2){
			comprimento = stoi(line);
			linhaAtual = 0;
			Pista pista(comprimento);
			pistas.push_back(pista);
		}

		linhaAtual++;
	}

	arquivo.close();
}

void escreverArquivoPistas(vector<Pista> &pistas){
	ofstream arquivo("Arquivos/Pistas.txt");
	if(!arquivo.is_open()){
		cout << "Impossível inciar arquivo de pistas!" << endl;
		return;
	}
	for(int i=0; i<(int)pistas.size(); i++){
		arquivo << pistas[i].getId() << "\n" << pistas[i].getComprimento() << "\n";
	}
	arquivo.close();
}
