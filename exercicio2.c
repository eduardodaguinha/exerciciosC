// Enunciado: Faça um programa que receba três notas, calcule e mostre a média aritmética delas.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float n1, n2, n3, media;
    
    // Recebendo os valores
    printf("Oi, meu nome é Dudu e irei calcular a média aritmética de 3 notas!\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Agora, digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Por fim, digite a última nota: ");
    scanf("%f", &n3);

    // Calculando a média aritmética
    printf("Por favor, aguarde...\n");
    media = (n1 + n2 + n3) / 3;
    printf("A média aritmética das notas informadas é %.1f.", media);

    return 0;
}