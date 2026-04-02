#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char estado2, codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // --- LEITURA CARTA 1 ---
    printf("CARTA 1\n");
    printf("Estado (Letra): \n");
    scanf(" %c", &estado1);
    printf("Codigo: \n");
    scanf(" %s", codigo1);
    printf("Nome da Cidade (Use_Underline): \n");
    scanf(" %s", nome1);
    printf("Populacao: \n");
    scanf(" %lu", &populacao1); // Lendo população 1
    printf("Area (Use Ponto): \n");
    scanf(" %f", &area1);
    printf("PIB (Use Ponto): \n");
    scanf(" %f", &pib1);
    printf("Pontos Turisticos: \n");
    scanf(" %d", &pontos1);

    // --- LEITURA CARTA 2 ---
    printf("\nCARTA 2\n");
    printf("Estado (Letra): \n");
    scanf(" %c", &estado2);
    printf("Codigo: \n");
    scanf(" %s", codigo2);
    printf("Nome da Cidade (Use_Underline): \n");
    scanf(" %s", nome2);
    printf("Populacao: \n");
    scanf(" %lu", &populacao2); // Lendo população 2
    printf("Area (Use Ponto): \n");
    scanf(" %f", &area2);
    printf("PIB (Use Ponto): \n");
    scanf(" %f", &pib2);
    printf("Pontos Turisticos: \n");
    scanf(" %d", &pontos2);

    // --- LOGICA DE COMPARACAO CORRETA ---
    printf("\n=================================\n");
    printf("RESULTADO: COMPARANDO POPULACAO\n");
    printf("=================================\n");
    printf("Carta 1 (%s): %lu habitantes\n", nome1, populacao1);
    printf("Carta 2 (%s): %lu habitantes\n", nome2, populacao2);
    printf("---------------------------------\n");

    // comparar POPULACAO1 com POPULACAO2
    if (populacao1 > populacao2) {
        printf("VENCEDOR: Carta 1 (%s) tem maior populacao!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("VENCEDOR: Carta 2 (%s) tem maior populacao!\n", nome2);
    } else {
        printf("RESULTADO: Empate tecnico na populacao!\n");
    }

    return 0;
}