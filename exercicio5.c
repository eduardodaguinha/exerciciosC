// Enunciado: Desenvolva um programa que receba dois números e exiba o maior entre eles. Se os números forem iguais, exiba a mensagem "Os números são iguais".

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float n1, n2 = 0;

    // Recebendo os valores
    printf("Oi, meu nome é Dudu. Vou descobrir qual é o maior número entre os dois que você digitar!\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Agora, digite o segundo número: ");
    scanf("%f", &n2);

    // Realizando a comparação
    printf("Por favor, aguarde...\n");
    if (n1 > n2) {
        printf("%.2f é maior que %.2f.", n1, n2);
    }
     if (n2 > n1) {
        printf("%.2f é maior que %.2f.", n2, n1);
    }
     if (n1 == n2) {
        printf("Os números são iguais.");
    }

    return 0;
}