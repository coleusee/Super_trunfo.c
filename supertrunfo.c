#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Desafio Super Trunfo - Cidades\n");

    // Carta 1
    char estado1[100], codigo1[5], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, superpoder1;

    // Carta 2
    char estado2[100], codigo2[5], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, superpoder2;

    // Entrada de dados - Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf("%s", estado1);
    printf("Codigo da Carta (A1): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    // Cálculos carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    superpoder1 = populacao1 + pontos_turisticos1 + pib_per_capita1 + area1 + pib1 + (1.0 / densidade_populacional1);

    // Entrada de dados - Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf("%s", estado2);
    printf("Codigo da Carta (A1): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    // Cálculos carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    superpoder2 = populacao2 + pontos_turisticos2 + pib_per_capita2 + area2 + pib2 + (1.0 / densidade_populacional2);

    // Menu de seleção de atributos
    int escolha1, escolha2;

    // Primeira escolha do atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - Superpoder\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha1);

    // Excluir o atributo escolhido para a segunda escolha
    printf("\nEscolha o segundo atributo para comparar:\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade Populacional\n");
    if (escolha1 != 6) printf("6 - PIB Per Capita\n");
    if (escolha1 != 7) printf("7 - Superpoder\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha2);

    // Comparação dos atributos escolhidos
    printf("\n--- Resultado da Comparação ---\n");

    // Comparação do primeiro atributo escolhido
    float valor1 = 0, valor2 = 0;

    switch (escolha1) {
        case 1: valor1 = populacao1; valor2 = populacao2; break;
        case 2: valor1 = area1; valor2 = area2; break;
        case 3: valor1 = pib1; valor2 = pib2; break;
        case 4: valor1 = pontos_turisticos1; valor2 = pontos_turisticos2; break;
        case 5: valor1 = densidade_populacional1; valor2 = densidade_populacional2; break;
        case 6: valor1 = pib_per_capita1; valor2 = pib_per_capita2; break;
        case 7: valor1 = superpoder1; valor2 = superpoder2; break;
    }

    // Comparação do segundo atributo
    float valor1_2 = 0, valor2_2 = 0;

    switch (escolha2) {
        case 1: valor1_2 = populacao1; valor2_2 = populacao2; break;
        case 2: valor1_2 = area1; valor2_2 = area2; break;
        case 3: valor1_2 = pib1; valor2_2 = pib2; break;
        case 4: valor1_2 = pontos_turisticos1; valor2_2 = pontos_turisticos2; break;
        case 5: valor1_2 = densidade_populacional1; valor2_2 = densidade_populacional2; break;
        case 6: valor1_2 = pib_per_capita1; valor2_2 = pib_per_capita2; break;
        case 7: valor1_2 = superpoder1; valor2_2 = superpoder2; break;
    }

    // Comparação do primeiro atributo com if-else e aninhamentos
    float soma1 = 0, soma2 = 0;

    if (escolha1 == 5) {
       
        if (valor1 < valor2) {
            printf("Carta 1 venceu no primeiro atributo: Densidade Populacional\n");
            soma1 += valor1;
        } else if (valor2 < valor1) {
            printf("Carta 2 venceu no primeiro atributo: Densidade Populacional\n");
            soma2 += valor2;
        } else {
            printf("Empate no primeiro atributo: Densidade Populacional\n");
        }
    } else {
        
        if (valor1 > valor2) {
            printf("Carta 1 venceu no primeiro atributo\n");
            soma1 += valor1;
        } else if (valor2 > valor1) {
            printf("Carta 2 venceu no primeiro atributo\n");
            soma2 += valor2;
        } else {
            printf("Empate no primeiro atributo\n");
        }
    }

    // Comparação do segundo atributo com if-else e aninhamentos
    if (escolha2 == 5) {
        
        if (valor1_2 < valor2_2) {
            printf("Carta 1 venceu no segundo atributo: Densidade Populacional\n");
            soma1 += valor1_2;
        } else if (valor2_2 < valor1_2) {
            printf("Carta 2 venceu no segundo atributo: Densidade Populacional\n");
            soma2 += valor2_2;
        } else {
            printf("Empate no segundo atributo: Densidade Populacional\n");
        }
    } else {
        // Para os outros atributos, quem tem o maior valor vence
        if (valor1_2 > valor2_2) {
            printf("Carta 1 venceu no segundo atributo\n");
            soma1 += valor1_2;
        } else if (valor2_2 > valor1_2) {
            printf("Carta 2 venceu no segundo atributo\n");
            soma2 += valor2_2;
        } else {
            printf("Empate no segundo atributo\n");
        }
    }

    // Exibição dos resultados finais
    printf("\nSoma dos atributos:\n");
    printf("%s (Carta 1): %.2f\n", nome1, soma1);
    printf("%s (Carta 2): %.2f\n", nome2, soma2);

    // Determinar o vencedor
    printf("\nResultado final: ");
    printf(soma1 > soma2 ? "Carta 1 venceu a rodada!\n" :
           (soma2 > soma1 ? "Carta 2 venceu a rodada!\n" : "Empate na rodada!\n"));

    return 0;
}

