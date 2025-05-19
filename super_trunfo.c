#include <stdio.h>

int main() {
    // Carta 1 - Jogador 1 (Thati)
    char estado1, codigo1[5], cidade1[50];
    int pontos_turisticos1, populacao1;
    float area1, pib1;
    float densidade1, pib_per_capita1;

    // Carta 2 - Jogador 2 (Adversário)
    char estado2, codigo2[5], cidade2[50];
    int pontos_turisticos2, populacao2;
    float area2, pib2;
    float densidade2, pib_per_capita2;

    // Entrada dos dados da Carta 1
    printf("=== SUPER TRUNFO - CARTA 1 ===\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%4s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Quantos pontos turísticos tem a cidade? ");
    scanf("%d", &pontos_turisticos1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Entrada dos dados da Carta 2
    printf("\n=== SUPER TRUNFO - CARTA 2 ===\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Quantos pontos turísticos tem a cidade? ");
    scanf("%d", &pontos_turisticos2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Impressão dos dados
    printf("\n===== CARTAS SUPER TRUNFO =====\n");

    printf("\nCARTA 1 - SUA CARTA\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    printf("\nCARTA 2 - ADVERSÁRIO\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    return 0;
}