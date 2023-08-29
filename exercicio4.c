#include <stdio.h>

int main() {
    float peso;

    // Solicita ao usuário que insira o peso
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    // Verifica se o peso é menor que 60 kg e imprime o resultado
    if (peso < 60.0) {
        printf("O peso é menor que 60kg.\n");
    } else {
        printf("O peso não é menor que 60kg.\n");
    }

    return 0;
}