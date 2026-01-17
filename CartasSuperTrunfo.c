#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, codigo_carta[4], cidade[21];
  int populacao, pts_turisticos;
  float area, pib;

  char estado2, codigo_carta2[4], cidade2[21];
  int populacao2, pts_turisticos2;
  float area2, pib2;

  // Área para entrada de dados
    printf("**** INSERINDO DADOS DA CARTA 1 ****\n");

    printf("\nDigite o Estado (Uma letra de A a H): ");
    scanf(" %c", &estado);

    printf("Digite o Código da Carta (letra do Estado seguido de numero de 2 digitos - Ex.: A01): ");
    scanf("%3s", codigo_carta);

    // Limpa o buffer para funcionar o fgets a seguir
    getchar();

    // Usa-se o fgets para a variável cidade receber uma string que aceite o caractere "espaço"
    printf("Digite o Nome da Cidade: ");
    fgets(cidade, 20, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite o numero de habitantes da cidade (População): ");
    scanf("%d", &populacao);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos);
    
    printf("\n**** INSERINDO DADOS DA CARTA 2 ****\n");

    printf("\nDigite o Estado (Uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (letra do Estado seguido de numero de 2 digitos - Ex.: A01): ");
    scanf("%3s", codigo_carta2);

   // Limpa o buffer para funcionar o fgets a seguir
    getchar();

    // Usa-se o fgets para a variável cidade receber uma string que aceite o caractere "espaço"
    printf("Digite o Nome da Cidade: ");
    fgets(cidade2, 20, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite o numero de habitantes da cidade (População): ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos2);

  // Área para exibição dos dados da cidade
    printf("\n\nCARTA 1: \n");
    printf("\nEstado: %c \n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pts_turisticos);

    printf("\n\nCARTA 2: \n");
    printf("\nEstado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pts_turisticos2);
return 0;
} 
