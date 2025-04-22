#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;
    char codigo[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Leitura dos dados da carta 1
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta 1 (XXYY): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", carta1.nome_cidade);

    printf("Digite a população da carta 1: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área da carta 1 (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da carta 1 (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Leitura dos dados da carta 2
    printf("\nDigite o estado da carta 2 (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta 2 (XXYY): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", carta2.nome_cidade);

    printf("Digite a população da carta 2: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área da carta 2 (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da carta 2 (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);

     return 0;
}



