// Exercício 10

#include <stdio.h>
#define TAM 30

int removeC(char string[], char c);

int main()
{
    char c, string[TAM];
    printf("Informe uma mensagem de até %d caractetes: ", TAM);
    scanf("%[^\n]%*c", string);
    printf("Informe um caratere: ");
    scanf("%c", &c);
    
    printf("Esse caratere teve %d ocorrências na mensagem inserida.\nNova mensagem formatada: ", removeC(string, c));
    for (int i = 0; i < TAM; i++){
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}

int removeC(char string[], char c){
    int ocorrencias = 0;
    for (int i = 0; i < TAM; i++){
        if (string[i] == c){
            ocorrencias++;
            string[i] = '*';
        }
    }
    return ocorrencias;
}
