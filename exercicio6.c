// Enunciado: Desenvolva um algoritmo que simule uma calculadora. O usuário deve ter as seguintes opções: 1 - Somar, 2 - Subtrair, 3 - Multiplicar e 4 - Dividir. O usuário poderá processar apenas dois números por vez.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao;
    float n1, n2, resultado;

    // Menu de opções
    printf("Oi, meu nome é Dudu. Vou ajudar você, atuando como uma calculadora básica!\n");
    printf("Digite 1 para somar;\n");
    printf("Digite 2 para subtrair;\n");
    printf("Digite 3 para multiplicar;\n");
    printf("Digite 4 para dividir.\n");
    scanf("%d", &opcao);

    // Recebendo os valores de entrada
    printf("Insira o primeiro número: ");
    scanf("%f", &n1);
    printf("Insira o segundo número: ");
    scanf("%f", &n2);

    // Realizando o cálculo
    if(opcao == 1) {
        resultado = n1 + n2;
        printf("Por favor, aguarde...\n");
        printf("Resultado da soma: %.2f", resultado);
    } 
    if(opcao == 2) {
        resultado = n1 - n2;
        printf("Por favor, aguarde...\n");
        printf("Resultado da subtração: %.2f", resultado);
    } 
    if (opcao == 3) {
        resultado = n1 * n2;
        printf("Por favor, aguarde...\n");
        printf("Resultado da multiplicação: %.2f", resultado);
    }
    if (opcao == 4) {
        resultado = n1 / n2;
        printf("Por favor, aguarde...\n");
        printf("Resultado da divisão: %.2f", resultado);
    }

    return 0;
}