#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1;
  char Estado1[] = 'A';
  char condigo_da_carta1[20] = 'A01';
  char nome_da_cidade1[20] = "Brasilia";
  int população1 = 1558000;
  float area1 = 12550.90;
  float pib1 = 550.50;
  int numero_de_pontos_turisticos1 = 5;
 
  char carta2;
  char Estado2[] = 'B';
  char condigo_da_carta2[20] = 'B02';
  char nome_da_cidade2[20] = "Fortaleza";
  int população2 = 2055010;
  float area2 = 21060.20;
  float pib2 = 300.70;
  int numero_de_pontos_turisticos2 = 15;

  // Área para entrada de dados
  printf ("Escolha uma carta, 1 ou 2: ");
  scanf ("%s", carta1);

  printf ("Agora escolha outra carta diferente da anterior: ");
  scanf ("%s", carta2);

  // Área para exibição dos dados da cidade
  
 

  
return 0;
} 
