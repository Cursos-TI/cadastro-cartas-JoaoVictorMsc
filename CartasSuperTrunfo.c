#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   // nome das variaveis
    char estado, estadoDois;
    char codigoCarta[50], codigoCartaDois[50];
    char nomeCidade[50], nomeCidadeDois[50];
    int populacao, populacaoDois;
    float area, areaDois;
    float pib, pibDois;
    int numeroPontosTuristicos, numeroPontosTuristicosDois;
    float densidadePopulacional, densidadePopulacionalDois;
    float pibPerCapita, pibPerCapitaDois;

    // recebimento de carta 01:
    printf("Carta 01: \n");
    printf("Uma letra: \n");
    scanf("%c", &estado);

    printf("Codigo da Carta: \n");
    scanf("%s", codigoCarta);

    getchar();

    printf("Nome da Cidade: \n");
    fgets(nomeCidade, 50, stdin);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Números de Pontos Turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);


    // recebimento de dados carta 02:
    printf("Carta 02: \n");
    printf("Uma letra: \n");
    scanf("%c", &estadoDois);

    printf("Codigo da Carta: \n");
    scanf("%s", codigoCartaDois);

    getchar();

    printf("Nome da Cidade 02: \n");
    fgets(nomeCidade, 50, stdin);

    printf("População: \n");
    scanf("%d", &populacaoDois);

    printf("Área: \n");
    scanf("%f", &areaDois);

    printf("PIB: \n");
    scanf("%f", &pibDois);

    printf("Números de Pontos Turisticos: \n");
    scanf("%d", &numeroPontosTuristicosDois);

    // calculos nescessarios:

    densidadePopulacional = (float) populacao / area;
    densidadePopulacionalDois = (float) populacaoDois / areaDois;

    pibPerCapita = (float) pib / populacao;
    pibPerCapitaDois = (float) pibDois / populacaoDois;



    //imprimindo carta 01:
    printf("Carta 01:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n",codigoCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n",area);
    printf("PIB: %.2f bilhoes de reais \n",pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita);

    // imprimindo carta 02:
    printf("Carta 02:\n");
    printf("Estado: %c \n", estadoDois);
    printf("Código: %s \n",codigoCartaDois);
    printf("Nome da Cidade: %s \n", nomeCidadeDois);
    printf("População: %d \n", populacaoDois);
    printf("Área: %.2f km²\n",areaDois);
    printf("PIB: %.2f bilhoes de reais \n", pibDois);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosDois);
    printf("Densidade Populacional: %.2f hab/km² \n",densidadePopulacionalDois);
    printf("PIB per Capita: %.2f reais \n", pibPerCapitaDois);
return 0;
} 
