#include <stdio.h>
int main(){
    float metro;
    float cm;
    char escolha;
    printf("Para converter centímetros para metros pressione A, caso queira converter metros para centímetros pressione B");
    scanf("%c", &escolha);
    if (escolha == 'a') {
        printf("Digite a quantidade em centímetros: ");
        scanf("%f", &cm);
        float resultado = cm / 100;
        printf("%.2f centímetros é igual a %.2f metros\n", cm, resultado);
        } else if (escolha) == 'b' {
            printf("Digite a quantiade em metros: ");
            scanf("%f", &metro);
            float resultado = metro * 100;
            printf("%.2f metros é igual a %.2f centímetros\n", metro, resultado);
    }
    
}
