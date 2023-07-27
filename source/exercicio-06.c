// Exercício 06

#include <stdio.h>
#include <math.h>

float calc_perimetro(float lado);
float calc_area(float lado);
float calc_diagonal(float lado);

int main()
{
    float lado;
    printf("Informe o lado do quadrado: ");
    scanf("%f", &lado);
    printf("Valores para o perimetro, área e diagonal desse quadrado respectivamente:: %f %f %f", calc_perimetro(lado), calc_area(lado), calc_diagonal(lado));
    
    return 0;
}

float calc_perimetro(float lado){
    return 2*lado;
}
float calc_area(float lado){
    return pow(lado, 2);
}
float calc_diagonal(float lado){
    return lado*sqrt(2);
}

