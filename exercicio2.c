#include <stdio.h>

int main()
{

    float salario;
    float salarioMinimo = 1320.0;

    // Solicitar a entrada do salário
    printf("Digite o seu salário: ");
    scanf("%f", &salario);

    // Verificar se o salário é maior que o salário mínimo
    if (salario > salarioMinimo)
    {
        printf("Você ganha mais do que o salário mínimo.\n");
    }
    else
    {
        printf("Você ganha menos que o salário mínimo.\n");
    }
}