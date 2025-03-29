#include <stdio.h>

int main() {

    //dados da carta 1
        char estado1;
        char codigo1[50];
        char nomeCidade1[50];
        int populacao1;
        float area1;
        float pib1;
        int pontosTuristicos1;
        
        // dados da carta 2
    
        char estado2;
        char codigo2[50];
        char nomeCidade2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontosTuristicos2;
    
        // código da carta 1
    
        printf("\nDigite o estado da carta 1 : ");
        scanf(" %s", &estado1);
    
        printf("Digite o código da carta 1 : ");
        scanf("%4s", codigo1);
    
        printf("Digite o nome da cidade da carta 1: ");
        scanf(" %s", nomeCidade1);
    
        printf("Digite a população da cidade da carta 1: ");
        scanf("%d", &populacao1);
    
        printf("Digite a área da cidade da carta 1 : ");
        scanf("%f", &area1);
    
        printf("Digite o PIB da cidade da carta 1 : ");
        scanf("%f", &pib1);
    
        printf("Digite o número de pontos turísticos da cidade da carta 1: ");
        scanf("%d", &pontosTuristicos1);
        
        // código da carta 2
        
        printf("\nDigite o estado da carta 2 : ");
        scanf(" %s", &estado2);
        
        printf("Digite o código da carta 2 : ");
        scanf("%4s", codigo2);
        
        printf("Digite o nome da cidade da carta 2: ");
        scanf(" %s", nomeCidade2);
        
        printf("Digite a população da cidade da carta 2: ");
        scanf("%d", &populacao2);
        
        printf("Digite a área da cidade da carta 2 : ");
        scanf("%f", &area2);
        
        printf("Digite o PIB da cidade da carta 2 : ");
        scanf("%f", &pib2);
    
        printf("Digite o número de pontos turísticos da cidade da carta 2: ");
        scanf("%d", &pontosTuristicos2);
        
        // Exibe os dados lidos da carta 1
        
        printf("\nDados lidos1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("pontos Turísticos: %d", pontosTuristicos1);
    
        // Exibe os dados lidos da carta 2

         printf("\nDados lidos2:\n");
         printf("Estado: %s\n", estado2);
         printf("Código: %s\n", codigo2);
         printf("Nome da Cidade: %s\n", nomeCidade2);
         printf("População: %d\n", populacao2);
         printf("Área: %.2f km²\n", area2);
         printf("PIB: %.2f bilhões de reais\n", pib2);
         printf("Pontos Turísticos: %d\n", pontosTuristicos2);
     
    
        return 0;
    
    }


