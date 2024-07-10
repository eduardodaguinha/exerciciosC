// Enunciado: Faça um programa que receba o salário de um funcionário e o percentual de aumento. O programa deve calcular e mostrar o valor do aumento e o novo salário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float salario, percentualAumento, aumento, novoSalario;

   // Recebendo os valores
    printf("Oi, meu nome é Dudu. Com os dados que você fornecer, irei calcular o valor do aumento e o valor do seu novo salário!\n");
    printf("Digite o salário em R$: ");
    scanf("%f", &salario);
    printf("Digite o número do percentual de aumento: ");
    scanf("%f", &percentualAumento);

    // Realizando o cálculo
    printf("Por favor, aguarde...\n");
    aumento = salario * (percentualAumento / 100);
    novoSalario = salario + aumento;
    printf("O aumento foi de R$ %.2f, resultando em um novo salário de R$ %.2f.", aumento, novoSalario);

    system("pause");
    return 0;
}