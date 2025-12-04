#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1;
  char Estado[20] = 'A';
  char condigo_da_carta[20] = 'A01';
  char nome_da_cidade[20] = "Brasilia";
  int população = 1558000;
  float area = 12550.90;
  float pib = 550.50;
  int numero_de_pontos_turisticos = 5;
 
  char carta2 = 2;
  char Estado[20] = 'B';
  char condigo_da_carta[20] = 'B02';
  char nome_da_cidade[20] = "Fortaleza";
  int população = 2055010;
  float area = 21060.20;
  float pib = 300.70;
  int numero_de_pontos_turisticos = 15;

  // Área para entrada de dados
  printf ("Escolha uma carta, 1 ou 2: ");
  scanf ("%s", carta1);

  printf ("Agora escolha outra carta diferente da anterior: ");
  scanf ("%s", carta2);

  // Área para exibição dos dados da cidade
  
 

  
return 0;
} 
