#include <stdio.h>

int main() {
    //Carta 1°
    char Estado;
    char codigo_da_carta [50];
    char nome_da_cidade [50];
    int populacao, Numero_de_Pontos_Turisticos;
    float area, PIB; 
    
    printf("Estado de A a H:\n");
    scanf("%s", &Estado);

    printf("Código da carta:\n");
    scanf("%s", &codigo_da_carta);

    printf("Nome da cidade:\n");
    scanf("%s", &nome_da_cidade);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &Numero_de_Pontos_Turisticos);

    

    return 0;
}



    