// Enunciado: Jeremias possui um cronômetro que só consegue marcar o tempo em segundos. Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado em segundos e informe quantas horas, minutos e segundos se passaram a partir desse tempo.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int segundos, minutos, horas;

    // Recebendo o valor em segundos
    printf("Oi, meu nome é Dudu. Vou calcular o tempo que você inserir em segundos e convertê-lo para horas, minutos e segundos!\n");
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    // Realizando a conversão
    printf("Por favor, aguarde...\n");
    horas = segundos / 3600;
    segundos = segundos - (3600 * horas);
    minutos = segundos / 60;
    segundos = segundos - (60 - minutos);
    printf("Resultado da conversão: %d Hora(s), %d minuto(s) e %d segundo(s).", horas, minutos, segundos);

    return 0;
}