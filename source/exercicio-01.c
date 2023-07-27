// Exercício 01

#include <stdio.h>

int dobrar(int x);

int main()
{
    int num1, num2, num3;
    printf("Informe 3 números inteiros separados por vírgulas: ");
    scanf("%d,%d,%d", &num1, &num2, &num3);
    printf("O dobro desses números é, respectivamente: %d, %d, %d", dobrar(num1), dobrar(num2), dobrar(num3));

    return 0;
}

int dobrar(int x){
    return 2*x;
}

