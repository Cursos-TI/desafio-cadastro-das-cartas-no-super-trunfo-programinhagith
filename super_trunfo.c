#include <stdio.h>

int main() {

    // Dados da carta 1
    char estado1[50];
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da carta 2
    char estado2[50];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados da carta 1
    printf("\nDigite o estado da carta 1: ");
    scanf(" %s", estado1);

    printf("Digite o código da carta 1: ");
    scanf("%4s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a população da cidade da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da carta 2
    printf("\nDigite o estado da carta 2: ");
    scanf(" %s", estado2);

    printf("Digite o código da carta 2: ");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a população da cidade da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // convertendo bilhões para reais

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
