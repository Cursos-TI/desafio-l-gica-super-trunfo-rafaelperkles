#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Super Trunfo!:\n");
        int codigocarta, pib;
        float populacao;
        float area;
        char estado[50];
        char cidade[50];
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

      printf("Digite o PIB: \n");
      scanf("%d", &pib);

      printf("Digite a População: \n");
      scanf("%f", &populacao);

      printf("Digite sua Area: \n");
      scanf("%f", &area);

      printf("Digite seu Estado: \n");
      scanf("%s", &estado);

      printf("Digite o nome da Cidade: \n");
      scanf("%s", &cidade);

      printf("Digite o Código da Carta \n");
      scanf("%d", &codigocarta);
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
      printf("- População: %f \n - Código da Carta: %d \n - Cidade: %s \n - Estado: %s \n ", populacao, codigocarta, cidade, estado);
      printf("- PIB: %d \n - Area: %f \n", pib, area);
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

