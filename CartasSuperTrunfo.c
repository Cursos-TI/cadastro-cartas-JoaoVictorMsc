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
    unsigned long int populacao, populacaoDois;
    float area, areaDois;
    float pib, pibDois;
    int numeroPontosTuristicos, numeroPontosTuristicosDois;
    float densidadePopulacional, densidadePopulacionalDois;
    float pibPerCapita, pibPerCapitaDois;
    float superPoder, superPoderDois;
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPibPerCapita, resultadoSuperPoder;
    int densidadePopulacionalInversa,densidadePopulacionalInversaDois;

    // recebimento de carta 01:
    printf("Carta 01: \n");
    //printf("Uma letra: \n");
    //scanf("%c", &estado);

    //printf("Codigo da Carta: \n");
    //scanf("%s", codigoCarta);

    //getchar();

    //printf("Nome da Cidade: \n");
    //fgets(nomeCidade, 50, stdin);

    printf("População: \n");
    scanf("%u", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Números de Pontos Turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);


    // recebimento de dados carta 02:
    printf("Carta 02: \n");
    //printf("Uma letra: \n");
    //scanf("%c", &estadoDois);

    //printf("Codigo da Carta: \n");
    //scanf("%s", codigoCartaDois);

    //getchar();

    //printf("Nome da Cidade 02: \n");
    //(nomeCidade, 50, stdin);

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
    densidadePopulacionalInversa = (float) area / populacao;
    densidadePopulacionalInversaDois = (float) areaDois / populacao;
    densidadePopulacionalDois = (float) populacaoDois / areaDois;

    pibPerCapita = (float) pib / populacao;
    pibPerCapitaDois = (float) pibDois / populacaoDois;

    // calculando super poder
    superPoder = (int) populacao + area + pib + numeroPontosTuristicos + pibPerCapita + densidadePopulacionalInversa;
    superPoderDois = (int) populacaoDois + areaDois + pibDois + numeroPontosTuristicosDois + densidadePopulacionalInversaDois;


    // comparação das cartas;

    int pop = (int) populacao > populacaoDois;
    int ar = (int) area > areaDois;
    int pi =  (int) pib > pibDois;
    int npt = (int) numeroPontosTuristicos > numeroPontosTuristicosDois;
    int ds = (int) densidadePopulacional < densidadePopulacionalDois;
    int ppc = (int) pibPerCapita > pibPerCapitaDois;
    int sp = (int) superPoder > superPoderDois;


    printf("Comparação de Cartas: \n");
    printf("População: Carta 1 venceu (%d)\n",pop);
    printf("Área: Carta 1 venceu (%d)\n",ar);
    printf("PIB: Carta 1 venceu (%d)\n",pi);
    printf("Pontos Turísticos:  Carta 1 venceu (%d)\n",npt);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n",ds);
    printf("PIB per Capita Carta 2 venceu (%d)\n",ppc);
    printf("Super Poder: Carta 1 venceu (%d)\n",sp);

    /*imprimindo carta 01:
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
    */
    /* imprimindo carta 02:
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
    */
return 0;
} 
