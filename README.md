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
#### -> Passo 1 e 2:
<p> Ao iniciar o programa, é feita uma leitura dos arquivos de sapos e pistas. Os resultados da leitura são armazenados em seus vector's respectivos. E o vector de sapos é atribuido a uma corrida. As funções para a leitura do arquivo de sapos e para a leitura do arquivo de pistas se chamam, respectivamente, "lerArquivoSapos e "lerArquivoPistas", ambas definidas e implementadas em "opPista.hpp" e "opPista.cpp". </br>

#### -> Passo 3:
<p> a) Para visualizar as estatísticas dos sapos, o usuário deve selecionar a opção 4 no menu principal do programa. Fazendo isso, o programa entrará num laço e exibirá as características de cada sapo, sendo que, para isso, foi feita uma sobrecarga do operador "<<" na classe Sapo.
<p> b) Para visualizar as estatísticas das pistas, o usuário deve selecionar a opção 5 no menu principal do programa. Fazendo isso, o programa entrará num laço e exibirá as características de cada pista, sendo que, para isso, foi feita uma sobrecarga do operador "<<" na classe Pista.
<p> c) Para iniciar uma corrida, o usuário deverá selecionar a opção 1 no menu principal do programa. Assim, o programa "chamará" a função para selecionar pista, denominada "selectPista", definida em opPista (tanto .hpp, quanto .cpp), que exibirá todas as pistas disponíveis e solicitará que o usuário selecione uma de acordo com seu identificador (ID). Fazendo isso, o programa "chamará" a função "realizarCorrida" definida e implementada na classe Corrida. E a corrida será realizada. E logo depois, o arquivo de Sapos será reescrito com as novas informações.
<p> d) Para criar um sapo, o usuário deve selecionar a opção 2 no menu principal do programa. Ao fazer isso, o programa irá executar a função "adicionarSapo" definida na classe Corrida. Em seguida, serão solicitadas as características do sapo, e então o sapo será adicionado ao vector de Sapos e, por consequência à corrida. Por fim, o programa reescreverá o arquivo de Sapos para registrar o novo sapo adicionado.
<p> e) Para criar uma pista, o usuário deve selecionar a opção 3 no menu principal do programa. Ao fazer isso, o programa irá executar a função "criarPista" definida em opPista (tanto .hpp, quanto .cpp). Em seguida, serão solicitadas o comprimento da pista, e então a pista será adicionada ao vector de Pistas e, por consequência será disponibilizada para ser usada em uma corrida. Por fim, o programa reescreverá o arquivo de pistas para registrar a nova pista adicionada.
  
#### -> Passo 4:
<p> a) Ao selecionar para iniciar uma corrida, o programa irá exibir todas as pistas disponíveis para a realização de uma corrida, com o uso da função "selectPista" definida em opPista (tanto .hpp, quanto .cpp). Em seguida, é esperado do usuário, o id da pista que ele deseja.
<p> b) Após selecionada a pista, serão exibidos todos os sapos participantes da corrida para o usuário: seus nomes, seus id's e suas potências de salto/pulo. Isso acontece, pois a função "realizarCorrida" irá "chamar" a função "mostrarSapos" definida e implementada na classe Corrida.
<p> c) Enfim, para iniciar a corrida, o usuário deverá apertar enter, e em seguida a corrida começará.

#### -> Passo 5:
<p> a) Durante a corrida, quando cada sapo pular, serão exibidas, em tela, as informações: id, pulo dado e seu nome (não necessariamente nessa ordem). Tudo isso definidio da função "realizarCorrida" da classe Corrida.
<p> b) Assim que cada sapo chegar ao fim da corrida, será alertado que ele cruzou a linha de chegada, e em seguida apenas os sapos restantes irão exibir mensagens na tela. Tudo isso definidio da função "realizarCorrida" da classe Corrida.
<p> c) Por fim, a corrida só acabará quando o último sapo cruzar a linha de chegada. E assim, será exibido, em tela, o ranking completo com a posição de cada sapo ao final da corrida. Tudo isso definidio da função "realizarCorrida" da classe Corrida.

#### -> Passo 6:
<p> A reescrita de cada arquivo (de Sapos e Pistas) é feita: após uma corrida ser realizada, após um novo sapo ser criado, após uma nova pista ser criada e, para garantir, ao final do programa é realizada a reescrita. A escrita dos arquivos foi definida e implementada em "funcArquivos" (tanto .hpp, quanto .cpp), como "escreverArquivoSapos" e "escreverArquivoPistas".
  
### <a href='https://github.com/lucasgmpaiva/Avaliacao_III_LP'> Acesse aqui o projeto no GitHub </a>
