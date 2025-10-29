#include <stdio.h>

int main() {
    // Variáveis dos atributos das cartas
    float populacao1 = 12300000, area1 = 1521.11, pib1 = 699.28, densidade1 = populacao1 / area1;
    float populacao2 = 6748000, area2 = 1200.25, pib2 = 360.12, densidade2 = populacao2 / area2;

    int escolha1, escolha2;
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;
    float soma_c1, soma_c2;

    printf("====================================\n");
    printf("     COMPARADOR DE CARTAS - CIDADES \n");
    printf("====================================\n\n");

    printf("Carta 1: São Paulo (SP)\n");
    printf("Carta 2: Rio de Janeiro (RJ)\n\n");

    // MENU 1 - escolha do primeiro atributo
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &escolha1);

    // MENU 2 - escolha do segundo atributo (sem repetir)
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 4; i++) {
        if (i == escolha1) continue; // evita repetição
        switch (i) {
            case 1: printf("%d - População\n", i); break;
            case 2: printf("%d - Área\n", i); break;
            case 3: printf("%d - PIB\n", i); break;
            case 4: printf("%d - Densidade Demográfica\n", i); break;
        }
    }
    printf("Digite sua opção: ");
    scanf("%d", &escolha2);

    // Atribuição dos valores conforme as escolhas
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Exibição dos resultados da comparação
    printf("\n====================================\n");
    printf("   RESULTADO DAS COMPARAÇÕES\n");
    printf("====================================\n\n");

    // Função auxiliar para exibir o nome do atributo
    char *nomeAtributo1, *nomeAtributo2;
    switch (escolha1) {
        case 1: nomeAtributo1 = "População"; break;
        case 2: nomeAtributo1 = "Área"; break;
        case 3: nomeAtributo1 = "PIB"; break;
        case 4: nomeAtributo1 = "Densidade Demográfica"; break;
    }
    switch (escolha2) {
        case 1: nomeAtributo2 = "População"; break;
        case 2: nomeAtributo2 = "Área"; break;
        case 3: nomeAtributo2 = "PIB"; break;
        case 4: nomeAtributo2 = "Densidade Demográfica"; break;
    }

    printf("Atributo 1: %s\n", nomeAtributo1);
    printf("São Paulo: %.2f | Rio de Janeiro: %.2f\n", valor1_c1, valor1_c2);
    if (escolha1 == 4) { // densidade -> menor vence
        if (valor1_c1 < valor1_c2)
            printf("-> São Paulo venceu neste atributo!\n\n");
        else if (valor1_c2 < valor1_c1)
            printf("-> Rio de Janeiro venceu neste atributo!\n\n");
        else
            printf("-> Empate neste atributo!\n\n");
    } else {
        if (valor1_c1 > valor1_c2)
            printf("-> São Paulo venceu neste atributo!\n\n");
        else if (valor1_c2 > valor1_c1)
            printf("-> Rio de Janeiro venceu neste atributo!\n\n");
        else
            printf("-> Empate neste atributo!\n\n");
    }

    printf("Atributo 2: %s\n", nomeAtributo2);
    printf("São Paulo: %.2f | Rio de Janeiro: %.2f\n", valor2_c1, valor2_c2);
    if (escolha2 == 4) { // densidade -> menor vence
        if (valor2_c1 < valor2_c2)
            printf("-> São Paulo venceu neste atributo!\n\n");
        else if (valor2_c2 < valor2_c1)
            printf("-> Rio de Janeiro venceu neste atributo!\n\n");
        else
            printf("-> Empate neste atributo!\n\n");
    } else {
        if (valor2_c1 > valor2_c2)
            printf("-> São Paulo venceu neste atributo!\n\n");
        else if (valor2_c2 > valor2_c1)
            printf("-> Rio de Janeiro venceu neste atributo!\n\n");
        else
            printf("-> Empate neste atributo!\n\n");
    }

    // Soma dos atributos
    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    printf("====================================\n");
    printf("SOMA DOS ATRIBUTOS:\n");
    printf("São Paulo: %.2f\n", soma_c1);
    printf("Rio de Janeiro: %.2f\n", soma_c2);
    printf("====================================\n");

    if (soma_c1 > soma_c2)
        printf("\n>>> RESULTADO FINAL: São Paulo venceu a rodada!\n");
    else if (soma_c2 > soma_c1)
        printf("\n>>> RESULTADO FINAL: Rio de Janeiro venceu a rodada!\n");
    else
        printf("\n>>> RESULTADO FINAL: Empate!\n");

    printf("====================================\n");

    return 0;
}
