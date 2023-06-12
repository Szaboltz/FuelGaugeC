#include <stdio.h>
#include <stdlib.h>

void main(){
    float temp, velo, dis, gasto;
    printf("Digite o tempo de viagem (Em horas): ");
    scanf("%f", &temp);
    printf("Digite a velocidade media durante a viagem(Em K/h): ");
    scanf("%f", &velo);

    dis = temp * velo;

    gasto = dis/12;

    printf("A viagem durou: %3.3fh \nA velocidade media na viagem foi de: %3.0fK/h \nSendo que o carro possui uma autonomia de 12km por litro, logo a quatidade de combustivel gasto foi de: %3.1f Litros", temp,velo, gasto);
}