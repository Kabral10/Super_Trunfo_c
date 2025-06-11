#include <stdio.h>

/*
Criar um programa em C que permita ao usuário inserir os dados de DUAS CARTAS do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

char codigo1[4], codigo2[4], nome1[20], nome2[20], estado1[20], estado2[20];
int popula1, popula2, turismo1, turismo2;
float PIB1, PIB2, area1, area2;
int main(){
//Inserindo informações manualmente
    printf("\n-- Criando Cartas --\n");
// primeira carta
    printf("\nPrimeira carta\n");
    printf("Escreva o codigo da primeira carta: \n");
    scanf("%s", &codigo1);
    printf("Escreva o nome do estado: \n");
    scanf("%s", &estado1);
    fgets(estado1,20,stdin);
    printf("Escreva o nome da cidade: \n");
    fgets(nome1,20,stdin);
    scanf("%s", &nome1);
    printf("Qual a população da cidade: \n");
    scanf("%d", &popula1);
    printf("Quantos pontos turisticos existem nessa cidade: \n");
    scanf("%d", &turismo1);
    printf("Escreva o produto interno bruto (PIB) da cidade: \n");
    scanf("%f", &PIB1);
    printf("Qual a area da cidade em km²: \n");
    scanf("%f", &area1);

//segunda carta
    printf("\nSegunda carta\n");
    printf("Escreva o codigo da segunda carta: \n");
    scanf("%s", &codigo2);
    printf("Escreva o nome do estado: \n");
    fgets(estado2,20,stdin);
    scanf(" %s", &estado2);
    printf("Escreva o nome da cidade: \n");
    fgets(nome2,20,stdin);
    scanf(" %s", &nome2);
    printf("Qual a população da cidade: \n");
    scanf("%d", &popula2);
    printf("Quantos pontos turisticos existem nessa cidade: \n");
    scanf("%d", &turismo2);
    printf("Escreva o produto interno bruto (PIB) da cidade: \n");
    scanf("%f", &PIB2);
    printf("Qual a area da cidade em km²: \n");
    scanf("%f", &area2);

//Exibindo informações
//primeira carta
    printf("\n-- Exibição de cartas --\n");
    printf("\n--Primeira Carta--\n");
    printf("O codigo da primeira carta é %s \n", codigo1);
    printf("O estado da carta é %s \n", estado1);
    printf("O nome da cidade é %s \n", nome1);
    printf("A população da cidade é de %d habitantes \n", popula1);
    printf("Essa cidade tem %d pontos turisticos \n", turismo1);
    printf("O produto interno bruto é de %.1f \n", PIB1);
    printf("A area dessa cidade é de %fkm² \n", area1);

//segunda carta
    printf("\n--Segunda Carta--\n");
    printf("O codigo da segunda carta é %s \n", codigo2);
    printf("O estado da carta é %s \n", estado2);
    printf("O nome da cidade é %s \n", nome2);
    printf("A população da cidade é de %d habitantes \n", popula2);
    printf("Essa cidade tem %d pontos turisticos \n", turismo2);
    printf("O produto interno bruto é de %.1f \n", PIB2);
    printf("A area dessa cidade é de %.1fkm² \n", area2);
    
    return 0;
}