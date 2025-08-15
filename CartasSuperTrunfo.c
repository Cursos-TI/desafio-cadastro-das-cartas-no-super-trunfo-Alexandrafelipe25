#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1 [10];
    char codigo1 [5];
    char cidade1 [20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1 = (float)populacao1 / area1;
    float percapita1 = (float)pib1 / populacao1;
   

    char estado2 [10];
    char codigo2 [5];
    char cidade2 [20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2 = (float)populacao2 / area2;
    float percapita2 = (float)pib2 / populacao2;

      
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Carta 1 \n");
    printf("Digite seu Estado da PRIMEIRA CARTA: \n");
    scanf("%s", &estado1);

    printf("Digite o código da sua carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite total de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da sua cidade em km2: \n");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da sua cidade: \n");
    scanf("%f", &pib1);

    printf("Digite quantidade de pontos turisticos de sua cidade: \n");
    scanf("%d", &pontosturisticos1);

   
    printf("Carta 2! \n");
    printf("Digite seu Estado da SEGUNDA CARTA: \n");
    scanf("%s", &estado2);

    printf("Digite o código da sua carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite total de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da sua cidade em km2: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da sua cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantidade de pontos turisticos de sua cidade: \n");
    scanf("%d", &pontosturisticos2);
   
     //calculos
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %0.f km²\n", area1);
    printf("PIB: %0.f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n",pontosturisticos1);
    printf("Densidade Demográfica: %.2f hab/m²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %0.f km²\n", area2);
    printf("PIB: %0.f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n",pontosturisticos2);
    printf("Densidade Demográfica %.2f hab/m²\n", densidade2);
    printf("PIB per Capita %.2f reais\n", percapita2);



    return 0;
}
