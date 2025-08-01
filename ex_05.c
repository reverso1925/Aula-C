#include <stdio.h>
void main(){
    int nascimento;
    int atual;
    printf("Insira seu ano de nascimento: \n");
    scanf("%d", &nascimento);
    printf("Insira o ano atual: \n");
    scanf("%d", &atual);
    int idade =(atual - nascimento);
    printf("Sua idade atual é %d", idade);
}
