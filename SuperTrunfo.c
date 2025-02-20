#include <stdio.h>

// Definição da estrutura para armazenar as informações da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaSuperTrunfo;

int main() {
    CartaSuperTrunfo carta1, carta2;

    // Leitura dos dados da primeira carta
    printf("Digite a letra do estado (A-H) da primeira carta: ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", carta1.codigo);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %49s", carta1.nomeCidade);
    printf("Digite a população da cidade da primeira carta: ");
    scanf(" %d", &carta1.populacao);
    printf("Digite a área da cidade da primeira carta (km²): ");
    scanf(" %f", &carta1.area);
    printf("Digite o PIB da cidade da primeira carta: ");
    scanf(" %f", &carta1.pib);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf(" %d", &carta1.pontosTuristicos);

    // Leitura dos dados da segunda carta
    printf("Digite a letra do estado (A-H) da segunda carta: ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da segunda carta (ex: A01): ");
    scanf(" %s", carta2.codigo);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %49s", carta2.nomeCidade);
    printf("Digite a população da cidade da segunda carta: ");
    scanf(" %d", &carta2.populacao);
    printf("Digite a área da cidade da segunda carta (km²): ");
    scanf(" %f", &carta2.area);
    printf("Digite o PIB da cidade da segunda carta: ");
    scanf(" %f", &carta2.pib);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf(" %d", &carta2.pontosTuristicos);

    // Exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}