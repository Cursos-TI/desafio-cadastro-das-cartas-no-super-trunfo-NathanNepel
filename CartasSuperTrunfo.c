#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int população1, população2;
    float area1, area2;
    float PIB1, PIB2;
    int turisticos1, turisticos2;
    
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
    scanf("%d", &população1);

    printf("Área (em KM²): ");
    scanf("%f", &area1);

    printf("PIB (Produto Interno Bruto): ");
    scanf("%f", &PIB1);

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &turisticos1);

    //Carta 2:
    printf("\nEstado, representado por uma letra de A a H: ");
    scanf(" %c", &estado2);

    printf("Código da cidade, Ex(B01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &população2);

    printf("Área (em KM²): ");
    scanf("%f", &area2);

    printf("PIB (Produto Interno Bruto): ");
    scanf("%f", &PIB2);

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &turisticos2);

    //Impressão Cartas
    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n",cidade1);
    printf("População: %d \n", população1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", turisticos1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("População: %d \n", população2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", turisticos2);




    return 0;
}
