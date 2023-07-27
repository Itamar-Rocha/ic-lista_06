// Exercício 03

#include <stdio.h>

int eh_primo(int x);

int main()
{
    int num;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &num);
    if (eh_primo(num)){
        printf("Esse número é primo.\n");
    } else {
        printf("Esse número não é primo.\n");
    }

    return 0;
}

int eh_primo(int x){
    int divisores = 0;
    
    for (int i = x; i > 0; i--){
        if (x%i == 0){
            divisores++;
        }
    }
    
    if (divisores > 2){
        // 0 == false
        return 0;
    } else {
        // 1 == true
        return 1;  
    }
}

