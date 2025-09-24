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
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", turisticos1);
    printf("Densidade Populacional: %.2f  hab/km² \n", densidade1);
    printf("PIB per capita: %.2f reais \n", pibpc1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("População: %lu \n", população2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
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

    printf("\n Comparação Cartas: \n");
    
    //Calculando atributo onde o maior define a carta vencedora (exceto DENSIDADE POPULACIONAL)
   
    printf("Carta 1: %s - PIB %.2f Bi\n", cidade1, PIB1);
    printf("Carta 2: %s - PIB %.2f Bi\n", cidade2, PIB2);

    
    if (PIB1 > PIB2){
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }

// Menu de atributos
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade populacional\n");
    scanf("%d", &atributo1);

    // Menu dinâmico para segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos turísticos\n"); break;
                case 5: printf("5 - Densidade populacional\n"); break;
            }
        }
    }
    scanf("%d", &atributo2);

    // Obter valores dos atributos com switch
    switch (atributo1) {
        case 1: valor1_carta1 = população1; valor1_carta2 = população2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = PIB1; valor1_carta2 = PIB2; break;
        case 4: valor1_carta1 = turisticos1; valor1_carta2 = turisticos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Atributo 1 inválido!\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = população1; valor2_carta2 = população2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = PIB1; valor2_carta2 = PIB2; break;
        case 4: valor2_carta1 = turisticos1; valor2_carta2 = turisticos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Atributo 2 inválido!\n"); return 1;
    }

    // Comparações individuais
    printf("\nComparando %s x %s\n", cidade1, cidade2);
    printf("Atributo 1: %d | Carta 1: %.2f | Carta 2: %.2f\n", atributo1, valor1_carta1, valor1_carta2);
    printf("Atributo 2: %d | Carta 1: %.2f | Carta 2: %.2f\n", atributo2, valor2_carta1, valor2_carta2);

    // Regra especial para densidade
    float resultado1 = (atributo1 == 5) ? (valor1_carta1 < valor1_carta2 ? 1 : 0) : (valor1_carta1 > valor1_carta2 ? 1 : 0);
    float resultado2 = (atributo2 == 5) ? (valor2_carta1 < valor2_carta2 ? 1 : 0) : (valor2_carta1 > valor2_carta2 ? 1 : 0);

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);

    // Resultado final
    printf("\nResultado Final:\n");
if (soma1 > soma2) {
    printf("Carta 1 venceu!\n");
} else if (soma2 > soma1) {
    printf("Carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}

    return 0;

}
