#include <stdio.h>

int main(){

    //Estado
    char estado01, estado02;

    //Código da carta
    char cod1[20], cod2[20];

    //Nome da cidade
    char cidade01[20], cidade02[20];

    //População
    unsigned long int popul01, popul02;

    //Área
    float area01, area02;

    //PIB
    float pib01, pib02;

    //Número de pontos turísticos
    int pontoT1, pontoT2;

    //Densidade Populacional
    float densid1,densid2;

    //PIB per Capita
    float pibC1,pibC2;

    //Super Poder das duas cartas
    float super1, super2;


    printf("Super trunfo. Digite as informações para dois Estados e cidades\n");

    printf("===================================\n");
    //Entrada de dados de primeira cidade
    printf("Primeira cidade\n");
    printf("Digite a letra do primeiro Estado: ");
    scanf(" %c", &estado01);

    printf("Digite o código da primeira carta: ");
    scanf("%s", cod1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade01);

    printf("Digite o número da população: ");
    scanf("%lu", &popul01);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area01);

    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib01);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontoT1);

    printf("===================================\n");
    //entrada de dado da segunda cidade
    printf("Segunda cidade\n");
    printf("Digite a letra do segundo Estado: ");
    scanf(" %c", &estado02);

    printf("Digite o código da segunda carta: ");
    scanf("%s", cod2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade02);

    printf("Digite o número da população: ");
    scanf("%lu", &popul02);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area02);

    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib02);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontoT2);

    //Calculo para a Densidade Populacional
    densid1 = popul01 / area01;
    densid2 = popul02 / area02;

    //Calculo do PIB per Capita
    pibC1 = pib01 / popul01;
    pibC2 = pib02 / popul02;

    //calculo do Super Poder das duas cartas
    super1 = popul01 + area01 + pib01 + pontoT1 + pibC1 + (1 / densid1);
    super2 = popul02 + area02 + pib02 + pontoT2 + pibC2 + (1 / densid2);

    printf("===================================\n");
    //Saída de dados da primeira cidade
    printf("Informações da primeira cidade\n");
    printf("A letra do primeiro estado é: %c\n", estado01);
    printf("O código da primeira carta é: %s\n", cod1);
    printf("O nome da primeira cidade é: %s\n", cidade01);
    printf("O número da população é: %lu\n", popul01);
    printf("A área em quilômetros quadrados é: %.2f\n", area01);
    printf("O PIB da primeira cidade é: %.2f de reais\n", pib01);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontoT1);
    printf("A Densidade Populacional é: %.2f\n", densid1);
    printf("O PIB per Capita da cidade é: %.2f\n", pibC1);
    printf("Super Poder: %.2f\n", super1);

    printf("===================================\n");
    //Saída de dados da segunda cidade
    printf("Informações da segunda cidade\n");
    printf("A letra do segundo estado é: %c\n", estado02);
    printf("O código da segunda carta é: %s\n", cod2);
    printf("O nome da segunda cidade é: %s\n", cidade02);
    printf("O número da população é: %lu\n", popul02);
    printf("A área em quilômetros quadrados é: %.2f\n", area02);
    printf("O PIB da segunda cidade é: %.2f de reais\n", pib02);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontoT2);
    printf("A Densidade Populacional é: %.2f\n", densid2);
    printf("O PIB per Capita da cidade é: %.2f\n", pibC2);
    printf("Super Poder: %.2f\n", super2);

    printf("===================================\n");
    //Comparando os atributos das cidades
    printf("Comparando os atributos das cidades\n");
    printf("População: Carta 1 venceu (%d)\n", popul01 > popul02);
    printf("Área: Carta 1 venceu (%d)\n", area01 > area02);
    printf("PIB: Carta 1 venceu (%d)\n", pib01 > pib02);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoT1 > pontoT2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibC1 > pibC2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densid1 < densid2); // menor vence
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);


    return 0;
}