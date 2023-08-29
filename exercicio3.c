#include <stdio.h>

int main()
{
    float altura;

    // Solicitar a entrada da altura
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    // Verificar se a altura é maior que 1,80m
    if (altura > 1.80)
    {
        printf("Você é mais alto(a) que 1,80 metros.\n");
    }
    else
    {
        printf("Você não é mais alto(a) que 1,80 metros.\n");
    }
}