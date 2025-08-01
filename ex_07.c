#include <stdio.h>
void main() {
    char nome[50];
    float preço;
    int quantidade;
    printf("Insira o nome do produto: ");
    scanf("%s", nome);
    printf("Insira o preço unitário do produto: ");
    scanf("%f", &preço);
    printf("Insira a quantidade: ");
    scanf("%d", &quantidade);
    float total =(preço * quantidade);
    printf("%d unidades do produto %s custam R$%.2f\n", quantidade, nome, total);
}
