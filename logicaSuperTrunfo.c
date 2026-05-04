#include <stdio.h>

int main() {

    char estado1[3], codigo1[10], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

    char estado2[3], codigo2[10], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // CARTA 1
    printf("=== Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // CARTA 2
    printf("\n=== Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // CÁLCULOS
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // COMPARAÇÃO (POPULAÇÃO)
    printf("\n=== Comparacao (Populacao) ===\n");

    printf("Carta 1: %s - %d\n", cidade1, populacao1);
    printf("Carta 2: %s - %d\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
