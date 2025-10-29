#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    char estado, estado2;
    char codigo[10], codigo2[10];
    char cidade[50], cidade2[50];
    int populacao, turisticos, populacao2, turisticos2;
    float area, pib, area2, pib2;
    
    


    printf("#### SUPER TRUNFO: PAÍSES ####\n\n");
    printf("*** Cadastro de Cartas ***\n\n");
    printf("Olá Jogador!! Aqui você irá cadastrar as informações das duas primeiras cartas!\n\n");
    printf("** CADASTRO CARTA 1 **\n\n");

    printf("Digite uma letra de A a H que representam um dos 8 estados: \n");
    scanf("%c", &estado);

    printf("Digite o Código da Carta(Letra do estado + número 01 a 04. Ex: A01): \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área(km²): \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísitcos: \n");
    scanf("%d", &turisticos);

    printf("** CARTA 1 CADASTRADA COM SUCESSO **\n\n");

    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área(km²): %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n\n", turisticos);

    printf("** CADASTRO CARTA 2 **\n\n");

    printf("Digite uma letra de A a H que representam um dos 8 estados: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta(Letra do estado + número 01 a 04. Ex: A01): \n");
    scanf("%s", &codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área(km²): \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísitcos: \n");
    scanf("%d", &turisticos2);

    printf("** CARTA 2 CADASTRADA COM SUCESSO **\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área(km²): %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n\n", turisticos2);


    
    
    
}

