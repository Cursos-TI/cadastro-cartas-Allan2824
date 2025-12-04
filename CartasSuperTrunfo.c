#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  int carta1 = 1;
  char Estado1[20] = "Acre";
  char condigo_da_carta1[20] = "A01";
  char nome_da_cidade1[20] = "Jordão";
  int população1 = 198350;
  float area1 = 12550.90;
  float pib1 = 550.50;
  int numero_de_pontos_turisticos1 = 15;
 
  int carta2 = 2;
  char Estado2[] = "Bahia";
  char condigo_da_carta2[20] = "B02";
  char nome_da_cidade2[20] = "Boquira";
  int população2 = 2055010;
  float area2 = 21060.20;
  float pib2 = 300.70;
  int numero_de_pontos_turisticos2 = 5;


  // area para variavel de entrada de dados
  int jogador1;
 
  int jogador2;
  
  char opcao[20];
  
  
  // Área para entrada de dados
  printf("JOGADOR 1, Escolha uma carta, 1 ou 2: \n");
  scanf("%d", &jogador1);
  

  printf("JOGADOR 2, Digite o numero oposto do seu adversario: \n");
  scanf("%d", &jogador2);

  printf("Agora vocês devem escolher em acordo entre; POPULAÇÃO, AREA, BIP OU TURISMO: \n");
  scanf("%s", opcao);
  printf("\n");
  printf("\n");

  
  // Area para exibiçao da escolha dos jogadores
  printf("Primeiro Jogador, Carta: %d\n", jogador1);
  
  printf("Segundo Jogador, Carta: %d\n", jogador2);
  printf("\n");
  printf("\n");
  
  printf("IREMOS COMPARAR: %s", opcao);
  printf("\n");
  printf("\n");


  // Área para exibição dos dados da cidade
  
  printf("carta: %d\n", carta1);
  printf("estado: %s\n", Estado1);
  printf("codigo: %s\n", condigo_da_carta1);
  printf("Cidade: %s\n", nome_da_cidade1);
  printf("População: %i Milhões de pessoas\n",população1);
  printf("Area: %.2f km²\n", area1);
  printf("Pib: %.2f Bilhões\n", pib1),
  printf("Ponto turisticos: %d\n", numero_de_pontos_turisticos1);
  printf("\n");

  printf("carta: %d\n", carta2);
  printf("estado: %s\n", Estado2);
  printf("codigo: %s\n", condigo_da_carta2);
  printf("Cidade: %s\n", nome_da_cidade2);
  printf("População: %i Milhões de pessoas\n",população2);
  printf("Area: %.2f km²\n", area2);
  printf("Pib: %.2f Bilhões\n", pib2),
  printf("Ponto turisticos: %d\n", numero_de_pontos_turisticos2);
  printf("\n");


 // area para consideraçoes finais
 printf("CONFIRA, O JOGADOR QUE TEM A PONTUACAO MAIOR NA SUA CARTA, GANHOU!\n");
 
 
return 0;
}