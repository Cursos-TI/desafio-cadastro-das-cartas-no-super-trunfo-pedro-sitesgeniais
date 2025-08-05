#include <stdio.h>

struct Carta {
    char estado;            // Variavel para armazenar o estado (A-H)
    char codigo[4];         // Variavel para armazenar o codigo (exemplo: A01)
    char cidade[50];        // Variavel para armazenar o nome da cidade
    int populacao;          // Variavel para armazenar a populacao
    float area;             // Variavel para armazenar a area em km^2
    float pib;              // Variavel para armazenar o PIB em bilhoes
    int pontosTuristicos;   // Variavel para armazenar o numero de pontos turisticos
};

int main() {
    struct Carta carta1, carta2;  // Declaracao das variaveis do tipo Carta
    
    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");           // Solicita ao usuario os dados da Carta 1
    printf("Estado (A-H): ");                          // Solicita o estado
    scanf(" %c", &carta1.estado);                      // Leitura do estado
    printf("Codigo (exemplo: A01): ");                 // Solicita o codigo
    scanf("%s", carta1.codigo);                        // Leitura do codigo
    printf("Nome da Cidade: ");                        // Solicita o nome da cidade
    scanf(" %[^\n]", carta1.cidade);                   // Leitura do nome da cidade, permitindo espacos
    printf("Populacao: ");                             // Solicita a populacao
    scanf("%d", &carta1.populacao);                    // Leitura da populacao
    printf("Area (em km^2): ");                        // Solicita a area
    scanf("%f", &carta1.area);                         // Leitura da area
    printf("PIB (em bilhoes): ");                      // Solicita o PIB
    scanf("%f", &carta1.pib);                          // Leitura do PIB
    printf("Numero de Pontos Turisticos: ");           // Solicita o numero de pontos turisticos
    scanf("%d", &carta1.pontosTuristicos);             // Leitura do numero de pontos turisticos
    
    // Leituras dos dados da Carta 2
    printf("Digite os dados da Carta 2:\n");           // Solicita ao usuario os dados da Carta 2
    printf("Estado (A-H): ");                          // Solicita o estado
    scanf(" %c", &carta2.estado);                      // Leitura do estado
    printf("Codigo (exemplo: A01): ");                 // Solicita o codigo
    scanf("%s", carta2.codigo);                        // Leitura do codigo
    printf("Nome da Cidade: ");                        // Solicita o nome da cidade
    scanf(" %[^\n]", carta2.cidade);                   // Leitura do nome da cidade, permitindo espacos
    printf("Populacao: ");                             // Solicita a populacao
    scanf("%d", &carta2.populacao);                    // Leitura da populacao
    printf("Area (em km^2): ");                        // Solicita a area
    scanf("%f", &carta2.area);                         // Leitura da area
    printf("PIB (em bilhoes): ");                      // Solicita o PIB
    scanf("%f", &carta2.pib);                          // Leitura do PIB
    printf("Numero de Pontos Turisticos: ");           // Solicita o numero de pontos turisticos
    scanf("%d", &carta2.pontosTuristicos);             // Leitura do numero de pontos turisticos
    
    // Exibicao dos dados das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);                      // Exibe o estado da Carta 1
    printf("Codigo: %s\n", carta1.codigo);                      // Exibe o codigo
    printf("Cidade: %s\n", carta1.cidade);                      // Exibe o nome da cidade
    printf("Populacao: %d\n", carta1.populacao);                // Exibe a populacao
    printf("Area: %.2f km²\n", carta1.area);                   // Exibe a area
    printf("PIB: %.2f bilhões\n", carta1.pib);                  // Exibe o PIB
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos); // Exibe o numero de pontos turisticos

    // Exibicao dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);                      // Exibe o estado da Carta 2
    printf("Codigo: %s\n", carta2.codigo);                      // Exibe o codigo
    printf("Cidade: %s\n", carta2.cidade);                      // Exibe o nome da cidade
    printf("Populacao: %d\n", carta2.populacao);                // Exibe a populacao
    printf("Area: %.2f km²\n", carta2.area);                   // Exibe a area
    printf("PIB: %.2f bilhões\n", carta2.pib);                  // Exibe o PIB
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos); // Exibe o numero de pontos turisticos
    
    return 0;
}