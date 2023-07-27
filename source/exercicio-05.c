// Exercício 05

#include <stdio.h>
#include <math.h>

float calc_perimetro(float base, float altura);
float calc_area(float base, float altura);
float calc_diagonal(float base, float altura);

int main()
{
    float base, altura;
    printf("Informe a base e altura de um retângulo, com os valores separados por espaço: ");
    scanf("%f %f", &base, &altura);
    printf("Valores para o perimetro, área e diagonal do retângulo respectivamente:: %f %f %f", calc_perimetro(base, altura), calc_area(base, altura), calc_diagonal(base, altura));
    
    return 0;
}

float calc_perimetro(float base, float altura){
    return 2*(base+altura);
}
float calc_area(float base, float altura){
    return base*altura;
}
float calc_diagonal(float base, float altura){
    return sqrt(pow(base, 2)+pow(altura, 2));
}

