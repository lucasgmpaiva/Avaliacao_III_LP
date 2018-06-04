/**
 * @author Lucas Gabriel Matias Paiva
 * @file corrida.cpp
 * @brief Implementa��o da classe corrida que define como ser� a corrida
 * @since 29/05/18
 * @date 04/06/18
 */

#include "../include/corrida.hpp"

int Corrida::tamanho;

Corrida::Corrida() { // @suppress("Class members should be properly initialized")

}

Corrida::Corrida(int id, int tamanhoA, vector<Sapo> sapos) {
	this->idCorrida = id;
	Corrida::tamanho = tamanhoA;
	this->sapos = sapos;
}

Corrida::~Corrida() {

}

int Corrida::getIdCorrida() {
	return this->idCorrida;
}

void Corrida::setIdCorrida(int id) {
	this->idCorrida = id;
}

bool Corrida::sapoRetardado() {
	for (int i = 0; i < (int) this->sapos.size(); i++) {
		if (sapos[i].getDistanciaPercorrida() < Corrida::tamanho)
			return true;
	}

	return false;
}

void Corrida::realizarCorrida() {
	int rank = 1;
	int a1 = 0;
	int a2 = 0;

	while (this->sapoRetardado()) {
		if (a1 != a2) {
			rank++;
			a2 = a1;
		}

		for (int i = 0; i < (int) this->sapos.size(); i++) {
			this->sapos[i].pular();
		}

		for (int i = 0; i < (int) this->sapos.size(); i++) {
			if (this->sapos[i].getDistanciaPercorrida() >= Corrida::tamanho
					&& this->sapos[i].getPosicaoRanking() == 0) {
				if (rank == 1)
					this->sapos[i].novaVitoria();
				this->sapos[i].setPosicaoRanking(rank);
				a1++;
			}
		}
	}

	rank++;

	int count;

	for(int i= 1; i<rank;i++){
		count = 0;
		for(int j = 0; j < (int)this->sapos.size();j++){
			if(this->sapos[j].getPosicaoRanking() == i)
				count++;
		}
		if(count > 1){
			for(int j = 0; j < (int)this->sapos.size();j++){
				if(this->sapos[j].getPosicaoRanking() == i)
					this->sapos[i].novoEmpate();
			}
		}
	}

	cout << "|-------------------Ranking------------------|" << endl;
	for(int i = 1; i<rank; i ++){
		for(int j = 0; j < (int)this->sapos.size(); j++){
			if(this->sapos[i].getPosicaoRanking() == i){
				cout << "Em " << i << "� Lugar: " << endl
						<< "Nome: " << this->sapos[i].getNome() << endl
						<< "ID: " << this->sapos[i].getId() << endl
						<< "Pulos: " << this->sapos[i].getPulosDados() << endl;
				cout << "|--------------------------------------------|" << endl;
			}
		}
	}

	for(int i = 0; i < (int) this->sapos.size(); i++){
		this->sapos[i].setCorridasRealizadas(this->sapos[i].getCorridasRealizadas()+1);
		this->sapos[i].setPulosDados(0);
		this->sapos[i].setPosicaoRanking(0);
		this->sapos[i].setDistanciaPercorrida(0);
	}

}

void Corrida::adicionarSapo(){
	cout << "|------------- Adicionando Sapo -------------|" << endl;
	string nome;
	cout << "Informe o nome do sapo:" << endl;
	getline(cin, nome);
	int potencia;
	cout << "Infomar a pot�ncia do pulo: " << endl;
	cin >> potencia;
	cin.ignore();
	Sapo sapo(nome, 0, 0, potencia, 0, 0);
	this->sapos.push_back(sapo);
	cout << nome << " adicionado � corrida!" << endl;
	cout << "|------------------------------ -------------|" << endl;
}
