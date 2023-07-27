// Exercício 07

#include <stdio.h>
#include <math.h>

float hipotenusa(float c1, float c2);

int main()
{
    float c1, c2;
    printf("Informe o valor dos dois catetos de um triângulo, separados por espaço: ");
    scanf("%f %f", &c1, &c2);
    printf("A hipotenusa desse triângulo vale: %f", hipotenusa(c1, c2));
    
    return 0;
}

float hipotenusa(float c1, float c2){
    return sqrt(pow(c1,2)+pow(c2,2));
}

