// Enunciado: Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int n1, n2, n3, n4, soma;
    
    // Recebendo os valores
    printf("Oi, meu nome é Dudu e irei calcular a soma de 4 números inteiros!\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Agora, digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);
    printf("Por fim, digite o quarto número: ");
    scanf("%d", &n4);

    // Realizando a soma
    printf("Por favor, aguarde...\n");
    soma = n1 + n2 + n3 + n4;
    printf("A soma dos números digitados é %d.", soma);

    system("pause");
    return 0;
}