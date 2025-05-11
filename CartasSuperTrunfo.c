#include <stdio.h>

int main (){

    char estado, estado2;
    char code[20], code2[20];
    char nome[20], nome2[20];
    int populacao, populacao2;
    float pib, pib2;
    float area, area2;
    int pontos, pontos2;

    printf("Carta 1:\n");                       
    
    printf("Digite a letra do estado: \n");
    scanf("%c", &estado);

    printf("Digite o código do estado: \n");
    scanf("%s", code);

    printf("Digite o nome do estado: \n");
    scanf("%s", nome);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km² do estado: \n");
    scanf("%f", &area);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos);



    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", code);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões \n", pib);
    printf("Número de pontos turísticos: %d \n", pontos);
    
printf("\n");



printf("Carta 2:\n");               
    
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código do estado: \n");
    scanf("%s", &code2);

    printf("Digite o nome do estado: \n");
    scanf("%s", &nome2);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km² do estado: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos2);

 printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", code2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos2);


return 0;


}