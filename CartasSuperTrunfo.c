#include <stdio.h>

int main() {
    // Variáveis das cartas
    char estado1[20], estado2[20];
    char codigo1[5], codigo2[5];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; 
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis para cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados da Carta 1
    printf("Digite o estado da Carta 1: \n");
    scanf("%s", estado1);
    printf("Digite o código da Carta 1: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da Carta 1 (sem espaços): \n");
    scanf("%s", nomeCidade1);
    printf("Digite a população da Carta 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da Carta 1 (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1 (em reais, exemplo: 699280000000): \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1: \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("Digite o estado da Carta 2: \n");
    scanf("%s", estado2);
    printf("Digite o código da Carta 2: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da Carta 2 (sem espaços): \n");
    scanf("%s", nomeCidade2);
    printf("Digite a população da Carta 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da Carta 2 (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2 (em reais, exemplo: 300500000000): \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibindo as informações das cartas com cálculos
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}