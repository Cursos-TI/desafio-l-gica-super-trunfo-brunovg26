#include <stdio.h>

int main() {
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    int opcao;

    printf("=== Comparacao de Cartas ===\n\n");

    // Entrada de dados
    printf("Digite a populacao de Sao Paulo (SP): ");
    scanf("%d", &populacao1);

    printf("Digite a area (km²) de Sao Paulo: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes) de Sao Paulo: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos de Sao Paulo: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nDigite a populacao do Rio de Janeiro (RJ): ");
    scanf("%d", &populacao2);

    printf("Digite a area (km²) do Rio de Janeiro: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes) do Rio de Janeiro: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos do Rio de Janeiro: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das cartas
    printf("\n=== Carta 1 - Sao Paulo (SP) ===\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 - Rio de Janeiro (RJ) ===\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    // Menu interativo
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparacao ===\n");

    switch(opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("Sao Paulo (SP): %d habitantes\n", populacao1);
            printf("Rio de Janeiro (RJ): %d habitantes\n", populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 (Sao Paulo) venceu!\n");
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("Sao Paulo (SP): %.2f km²\n", area1);
            printf("Rio de Janeiro (RJ): %.2f km²\n", area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 (Sao Paulo) venceu!\n");
            else if (area2 > area1)
                printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Sao Paulo (SP): %.2f bilhoes de reais\n", pib1);
            printf("Rio de Janeiro (RJ): %.2f bilhoes de reais\n", pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 (Sao Paulo) venceu!\n");
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("Sao Paulo (SP): %d pontos\n", pontosTuristicos1);
            printf("Rio de Janeiro (RJ): %d pontos\n", pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 (Sao Paulo) venceu!\n");
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opcao invalida! Escolha entre 1 e 4.\n");
            break;
    }

    return 0;
}

