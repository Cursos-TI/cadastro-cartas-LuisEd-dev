#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

float calcularDensidadePopulacional(int populacao, float area){
  return populacao / area;
}

float calcularPibPerCapita(float pib, int populacao){
  return pib / populacao;
}

float calcularSuperPoder(int populacao, float area, float pib, int pontosTuristicos, float pibPerCapita, float densidadePopulacional){
  printf("%i\n", populacao);
  printf("%f ", area);
  printf("%f\n", pib);
  printf("%i\n", pontosTuristicos);
  printf("%f\n", pibPerCapita);
  printf("%f\n", densidadePopulacional);
  
  return populacao + area + pib + pontosTuristicos + pibPerCapita + (1 / densidadePopulacional);
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2, codigo1[4], codigo2[4], cidade1[50], cidade2[50];
  int populacao1, populacao2, pontosTuristicos1,  pontosTuristicos2, resultadoComparacao;
  float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

  printf("--- Super Trunfo ---\n\n");

  // Área para entrada de dados
  printf("Dados da primeira carta:\n");

  printf("Informe o estado:\n");
  scanf("%c", &estado1);

  printf("Informe o codigo:\n");
  scanf(" %3s", codigo1);

  printf("Informe a cidade:\n");
  getchar();
  fgets(cidade1, sizeof(cidade1), stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;

  printf("Informe a população:\n");
  scanf("%i", &populacao1);

  printf("Informe a área:\n");
  scanf("%f", &area1);

  printf("Informe o PIB:\n");
  scanf("%f", &pib1);

  printf("Informe o número de pontos turisticos:\n");
  scanf("%i", &pontosTuristicos1);

  densidadePopulacional1 = calcularDensidadePopulacional(populacao1, area1);
  pibPerCapita1 = calcularPibPerCapita(pib1, populacao1);
  superPoder1 = (populacao1, area1, pib1, pontosTuristicos1, pibPerCapita1, densidadePopulacional1);

  printf("\nDados da segunda carta:\n");

  printf("Informe o estado:\n");
  scanf(" %c", &estado2);

  printf("Informe o codigo:\n");
  scanf(" %3s", codigo2);

  printf("Informe a cidade:\n");
  getchar();
  fgets(cidade2, sizeof(cidade2), stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;

  printf("Informe a população:\n");
  scanf("%i", &populacao2);

  printf("Informe a área:\n");
  scanf("%f", &area2);

  printf("Informe o PIB:\n");
  scanf("%f", &pib2);

  printf("Informe o número de pontos turisticos:\n");
  scanf("%i", &pontosTuristicos2);

  densidadePopulacional2 = calcularDensidadePopulacional(populacao2, area2);
  pibPerCapita2 = calcularPibPerCapita(pib2, populacao2);
  superPoder2 = (populacao2, area2, pib2, pontosTuristicos2, pibPerCapita2, densidadePopulacional2);

  // Área para exibição dos dados da cidade
  printf("\n\n");
  printf("Primeira carta:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %i\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Densidade populacional: %.2f\n", densidadePopulacional1);
  printf("PIB per capita: %.2f\n", pibPerCapita1);
  printf("Super poder: %.2f\n", superPoder1);

  printf("\n");
  printf("Segunda carta:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %i\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Densidade populacional: %.2f\n", densidadePopulacional2);
  printf("PIB per capita: %.2f\n", pibPerCapita2);
  printf("Super poder: %.2f\n", superPoder2);

  printf("\n\n");
  printf("Comparação de Cartas:\n");
  
  resultadoComparacao = populacao1 > populacao2;
  printf("População: Carta %i venceu (%i)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);

  resultadoComparacao = area1 > area2;
  printf("Área: Carta %i venceu (%i)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);

  resultadoComparacao = pib1 > pib2;
  printf("PIB: Carta %i venceu (%i)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);

  resultadoComparacao = pontosTuristicos1 > pontosTuristicos2;
  printf("Pontos Turísticos: Carta %i venceu (%i)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);

  resultadoComparacao = densidadePopulacional1 < densidadePopulacional2;
  printf("Densidade Populacional: Carta %i venceu (%i)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);

  resultadoComparacao = pibPerCapita1 > pibPerCapita2;
  printf("PIB per Capita: Carta %i venceu (%i)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);

  resultadoComparacao = superPoder1 > superPoder2;
  printf("Super Poder: Carta %i venceu (%i)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);
  
  return 0;
} 