#include <stdio.h>

int main() {
    // Variáveis
    int populacao1, populacao2;

    printf(" Comparação de cartas \n\n");
    
    // Entrada de dados
    printf("Digite a populacao de São Paulo(SP): ");
    scanf("%d", &populacao1);

    printf("Digite a populacao do Rio de Janeiro(RJ): ");
    scanf("%d", &populacao2);

    // Exibição dos dados
    printf("\nCarta 1 - São Paulo (SP) : %d \n", populacao1);
    printf("Carta 2 - Rio de Janeiro (RJ) : %d \n", populacao2);

    // Comparação
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (São Paulo) venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (Rio de Janeiro) venceu!\n");
    } else {
        
    }

    return 0;
}
