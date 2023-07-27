// Exercício 08

#include <stdio.h>

float desconto(float valor, float porcentagem);

int main()
{
    float valor, percentual;
    printf("Informe o valor do produto: ");
    scanf("%f", &valor);
    printf("Informe o percentual de desconto: ");
    scanf("%f", &percentual);
    percentual /= 100;
    printf("Novo valor com desconto: %.2f", desconto(valor, percentual));
    
    return 0;
}

float desconto(float valor, float porcentagem){
    return valor - valor * porcentagem;
}
