#include <stdio.h>

int main() {
    // --- CADASTRO DAS CARTAS (Dados pré-definidos para o exemplo) ---
    char pais1[50] = "Brasil", pais2[50] = "Japao";
    unsigned long int populacao1 = 214300000, populacao2 = 125700000;
    float area1 = 8515767.0, area2 = 377975.0;
    float pib1 = 1.61, pib2 = 4.94; // Em trilhões
    int pontos1 = 85, pontos2 = 120;
    float densidade1 = 25.16, densidade2 = 332.56;

    int opcao;
    float valor1, valor2;
    char atributoEscolhido[30];

    // --- MENU INTERATIVO ---
    printf("### SUPER TRUNFO: PAISES ###\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARACAO ---\n");

    // --- LOGICA DE COMPARACAO COM SWITCH ---
    switch (opcao) {
        case 1:
            valor1 = (float)populacao1;
            valor2 = (float)populacao2;
            sprintf(atributoEscolhido, "Populacao");
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            sprintf(atributoEscolhido, "Area");
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            sprintf(atributoEscolhido, "PIB");
            break;
        case 4:
            valor1 = (float)pontos1;
            valor2 = (float)pontos2;
            sprintf(atributoEscolhido, "Pontos Turisticos");
            break;
        case 5:
            valor1 = densidade1;
            valor2 = densidade2;
            sprintf(atributoEscolhido, "Densidade Demográfica");
            break;
        default:
            printf("Opcao invalida! Reinicie o jogo.\n");
            return 0;
    }

    // --- EXIBIÇÃO DOS DADOS ---
    printf("Carta 1 (%s): %.2f\n", pais1, valor1);
    printf("Carta 2 (%s): %.2f\n", pais2, valor2);
    printf("Atributo: %s\n", atributoEscolhido);
    printf("-------------------------------\n");

    // --- ESTRUTURA DE DECISAO ANINHADA ---
    if (valor1 == valor2) {
        printf("Resultado: Empate!\n");
    } else {
        // Regra especial para Densidade Demográfica (Menor valor vence)
        if (opcao == 5) {
            if (valor1 < valor2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", pais1);
            } else {
                printf("Resultado: Carta 2 (%s) Venceu!\n", pais2);
            }
        } 
        // Regra geral (Maior valor vence)
        else {
            if (valor1 > valor2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", pais1);
            } else {
                printf("Resultado: Carta 2 (%s) Venceu!\n", pais2);
            }
        }
    }

    return 0;
}