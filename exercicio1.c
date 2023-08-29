#include <stdio.h>

int main()
{
    int idade;

    // Solicitar a entrada da idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Verificar se a idade é maior ou igual a 18

    if (idade >= 18)
    {
        printf("Você é maior de idade.\n");
    }
    else
    {
        printf("Você não é maior de idade.\n");
    }

    return 0;
}