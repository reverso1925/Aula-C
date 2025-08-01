#include <stdio.h>
int main(){
    int nota1;
    int nota2;
    int media;
    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);
    media =(nota1 + nota2) / 2;
    printf("A média do aluno é: %d\n", media);
}
