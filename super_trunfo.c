#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo! \n \n ");

    char estado1[10];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    int Pontosturisticos1;
    float area1;
    float pib1;
    
    char estado2[10];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    int Pontosturisticos2;
    float area2;
    float pib2;

    printf("Insira os dados da carta 1: \n \n ");

    printf("Digite o Estado: \n");
    scanf("%s", &estado1);
    
    printf("Codigo: \n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area em Km²: \n");
    scanf("%f", &area1);

    printf("Pib: \n");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &Pontosturisticos1);

    printf("Insira os dados da carta 2: \n \n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);
    
    printf("Codigo: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area em Km²: \n");
    scanf("%f", &area2);

    printf("Pib: \n");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &Pontosturisticos2);

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da carta: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area em Km²: %f \n", area1);
    printf("Pib: %f \n", pib1);
    printf("Pontos Turisticos: %d \n", Pontosturisticos1);

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da carta: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area em Km²: %f \n", area2);
    printf("Pib: %f \n", pib2);
    printf("Pontos Turisticos: %d \n", Pontosturisticos2);

     return 0;

}