#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo! \n");
    printf("Carta 1: \n");
    char estado[10];
    char codigo[5];
    char cidade[20];
    int populacao;
    int Pontosturisticos;
    float area;
    float pib;

    printf("Digite seu estado: \n");
    scanf("%s", &estado);
    
    printf("Codigo: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Populacao: \n");
    scanf("%d", &populacao);

    printf("Area em Km²: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &Pontosturisticos);

    printf("Estado: %s \n", estado);
    printf("Codigo da carta: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area em Km²: %f \n", area);
    printf("Pib: %f \n", pib);
    printf("Pontos Turisticos: %d \n", Pontosturisticos);

    return 0;



}
