// Exercício 09

#include <stdio.h>

int quociente(int dividendo, int divisor);

int main()
{
    int dividendo, divisor;
    printf("Informe o valor do dividendo: ");
    scanf("%d", &dividendo);
    while(1){
        printf("Informe o divisor: ");
        scanf("%d", &divisor);
        if (divisor < dividendo){
            break;
        } else {
            printf("Informe um divisor menor que o dividendo!\n");
        }
    }
    printf("O número %d é divisível por %d: %d vezes", dividendo, divisor, quociente(dividendo, divisor));
    return 0;
}

int quociente(int dividendo, int divisor){
    int resto = dividendo % divisor;
    return (dividendo-resto)/divisor;
}
