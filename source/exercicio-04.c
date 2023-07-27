// Exercício 04

#include <stdio.h>

float reajuste(float saldo, float porcentagem);

int main()
{
    float saldo, porcentagem;
    printf("Informe o saldo: ");
    scanf("%f", &saldo);
    printf("Informe o reajuste em porcentagem: ");
    scanf("%f", &porcentagem);
    porcentagem /= 100;
    printf("Novo saldo após o reajuste: %.2f", reajuste(saldo, porcentagem));
    
    
    return 0;
}

float reajuste(float saldo, float porcentagem){
    return saldo + saldo * porcentagem;
}

