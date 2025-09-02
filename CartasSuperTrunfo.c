#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    unsigned long int população1, população2;
    float area1, area2;
    float PIB1, PIB2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    float inverso1, inverso2;
    float superpoder1, superpoder2;
    
        // Cadastro das Cartas:
        //Carta 1:
    printf("Digite os dados da sua carta: \n");    
    
    printf("Estado, representado por uma letra de A a H: ");
    scanf(" %c", &estado1);

    printf("Código da cidade, Ex(B01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &população1);

    printf("Área (em KM²): ");
    scanf("%f", &area1);

    printf("PIB (Produto Interno Bruto): ");
    scanf("%f", &PIB1);

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &turisticos1);

    //Calculo densidade e PIB per capita 

    densidade1 = (float)população1 / area1;   
    printf("Densidade Populacional: %.2f \n", densidade1);
    
    pibpc1 = (float) PIB1 / população1;
    printf("PIB per capita: %.2f \n", pibpc1);

    //Carta 2:
    printf("\nEstado, representado por uma letra de A a H: ");
    scanf(" %c", &estado2);

    printf("Código da cidade, Ex(B01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &população2);

    printf("Área (em KM²): ");
    scanf("%f", &area2);

    printf("PIB (Produto Interno Bruto): ");
    scanf("%f", &PIB2);

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &turisticos2);

    densidade2 = (float) população2 / area2;   
    printf("Densidade Populacional: %.2f \n", densidade2);
    
    pibpc2 = (float) PIB2 / população2;
    printf("PIB per capita: %.2f \n", pibpc2);

    // Cálculos Super Poder

    inverso1 = area1/(float)população1;
    inverso2 = area2/(float)população2;

    superpoder1 = (float)população1+area1+PIB1+turisticos1+inverso1+pibpc1;
    superpoder2 = (float)população2+area2+PIB2+turisticos2+inverso2+pibpc2;


    //Impressão Cartas
    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n",cidade1);
    printf("População: %lu \n", população1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", turisticos1);
    printf("Densidade Populacional: %.2f  hab/km² \n", densidade1);
    printf("PIB per capita: %.2f reais \n", pibpc1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("População: %lu \n", população2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per capita: %.2f reais \n", pibpc2);
    

    printf("\n Comparação Cartas: \n");

    printf("População: Carta %d venceu (%d)\n", população1 > população2 ? 1 : 2, população1 > população2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", turisticos1 > turisticos2 ? 1 : 2, turisticos1 > turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpc1 > pibpc2 ? 1 : 2, pibpc1 > pibpc2);
    printf("Super Poder: Carta %d venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 2, superpoder1 > superpoder2);


    return 0;
}
