// Exercício 02

#include <stdio.h>

float media3(float x, float y, float z);

int main()
{
    float num1, num2, num3;
    printf("Informe as 3 notas separadas por espaços: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("Sua média é: %.2f", media3(num1, num2, num3));

    return 0;
}

float media3(float x, float y, float z){
    return (x+y+z)/3;
}

