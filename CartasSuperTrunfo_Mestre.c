#include <stdio.h>
#include <string.h>
 
int main() {
    // Definindo as variáveis
    char estado, codigo_carta[4], cidade[21];
    unsigned long int populacao;
    int pts_turisticos;
    float area, pib, densidade, pib_p_capta, superpoder;

    char estado2, codigo_carta2[4], cidade2[21];
    unsigned long int populacao2;
    int pts_turisticos2;
    float area2, pib2, densidade2, pib_p_capta2, superpoder2;

    int resultado;

    //Inserindo os dados da Carta 1
    printf("**** INSERINDO DADOS DA CARTA 1 ****\n");

    printf("\nDigite o Estado (Uma letra de A a H): ");
    scanf("%c", &estado);

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

    //Calculando a Densidade Demográfica da Carta 1
    densidade = (float) populacao/area;

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib);

    //Calculando o PIB per capta da Carta 2
    pib_p_capta = (pib * 1000000000) /(float)populacao;

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos);

    //Calculando o SuperPoder da Carta 1
    superpoder = (float)populacao + area + pib + (float)pib_p_capta + (1/densidade);

    //Inserindo os dados da Carta 2   
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

    //Calculando a Densidade Demográfica da Carta 2
    densidade2 = (float) populacao2/area2;

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    //Calculando o PIB per capta da Carta 2
    pib_p_capta2 =  (pib2 * 1000000000)/ (float)populacao2;

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos2);

    //Calculando o SuperPoder da Carta 2
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pib_p_capta2 + (1/densidade2);

    // Mostrando os Dados das duas Cartas
    printf("\n\nCARTA 1: \n");
    printf("\nEstado: %c \n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pts_turisticos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", pib_p_capta);
    printf("SuperPoder: %.2f \n", superpoder);

    printf("\n\nCARTA 2: \n");
    printf("\nEstado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pts_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pib_p_capta2);
    printf("SuperPoder: %.2f \n\n", superpoder2);

    // COMPARANDO AS CARTAS E EXIBINDO OS RESULTADOS

    printf("\n******** Comparação de Cartas: ******** \n\n");
    resultado = populacao > populacao2;
    printf("População: Carta 1 venceu (%d) \n", resultado);

    resultado = area > area2;
    printf("Área: Carta 1 venceu (%d) \n", resultado);

    resultado = pib > pib2;
    printf("PIB: Carta 1 venceu (%d) \n", resultado);

    resultado = pts_turisticos > pts_turisticos2;
    printf("Pontos Turísticos: Carta 1 venceu (%d) \n", resultado);

    resultado = (1/densidade2) > (1/densidade);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n", resultado);

    resultado = pib_p_capta2 > pib_p_capta;
    printf("PIB per Capita: Carta 2 venceu (%d) \n", resultado);

    resultado = superpoder2 > superpoder;
    printf("SuperPoder: Carta 2 venceu (%d) \n", resultado);

    printf("\n\n");
    return 0;
}