# AtividadeCorridaSapos
Avaliação que consiste na criação de um programa que realize uma corrida de sapos. A nota da avaliação irá compor a nota da 3ª unidade da matéria de Linguagem de Programação I (LP I).

## Desenvolvedor
Lucas Gabriel Matias Paiva</br>
Aluno do 3º Período do curso de Bacharelado em Tecnologia da Informação (BTI) no Instituto Metrópole Digital (IMD) da Universidade Federal do Rio Grande do Norte (UFRN)

## Para Compilar O Programa
  $ make </br>
  $ make move
  
## Para Executar O Programa
  $ ./bin/Corrida
  
## Informações
#### ->Passo 1 e 2:
<p> Ao iniciar o programa, é feita uma leitura dos arquivos de sapos e pistas. Os resultados da leitura são armazenados em seus vector's respectivos. E o vector de sapos é atribuido a uma corrida. As funções para a leitura do arquivo de sapos e para a leitura do arquivo de pistas se chamam, respectivamente, "lerArquivoSapos e "lerArquivoPistas", ambas definidas e implementadas em "opPista.hpp" e "opPista.cpp". </br>

#### -> Passo 3:
a) Para visualizar as estatísticas dos sapos, o usuário deve selecionar a opção 4 no menu principal do programa. Fazendo isso, o programa entrará num laço e exibirá as características de cada sapo, sendo que, para isso, foi feita uma sobrecarga do operador "<<" na classe Sapo. <\br>
b) Para visualizar as estatísticas das pistas, o usuário deve selecionar a opção 5 no menu principal do programa. Fazendo isso, o programa entrará num laço e exibirá as características de cada pista, sendo que, para isso, foi feita uma sobrecarga do operador "<<" na classe Pista. <\br>
c) Para iniciar uma corrida, o usuário deverá selecionar a opção 1 no menu principal do programa. Assim, o programa "chamará" a função para selecionar pista, denominada "selectPista", definida em opPista (tanto .hpp, quanto .cpp), que exibirá todas as pistas disponíveis e solicitará que o usuário selecione uma de acordo com seu identificador (ID). Fazendo isso, o programa "chamará" a função "realizarCorrida" definida e implementada na classe Corrida. E a corrida será realizada. E logo depois, o arquivo de Sapos será reescrito com as novas informações. <\br>
d) Para criar um sapo, o usuário deve selecionar a opção 2 no menu principal do programa. Ao fazer isso, o programa irá executar a função "adicionarSapo" definida na classe Corrida. Em seguida, serão solicitadas as características do sapo, e então o sapo será adicionado ao vector de Sapos e, por consequência à corrida. Por fim, o programa reescreverá o arquivo de Sapos para registrar o novo sapo adicionado. <\br>
e) Para criar uma pista, o usuário deve selecionar a opção 3 no menu principal do programa. Ao fazer isso, o programa irá executar a função "criarPista" definida em opPista (tanto .hpp, quanto .cpp). Em seguida, serão solicitadas o comprimento da pista, e então a pista será adicionada ao vector de Pistas e, por consequência será disponibilizada para ser usada em uma corrida. Por fim, o programa reescreverá o arquivo de pistas para registrar a nova pista adicionada. <\br>
 
### <a href='https://github.com/lucasgmpaiva/Avaliacao_III_LP'> Acesse aqui o projeto no GitHub </a>
