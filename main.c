#include <stdio.h>

float adicao(float num0, float num1) {
    return num0 + num1;
}

float subtracao(float num0, float num1) {
    return num0 - num1;
}

float multiplicacao(float num0, float num1) {
    return num0 * num1;
}

float divisao(float num0, float num1) {
    if(num1 == 0) {
        printf("Nao e possivel dividir por zero.\n");
        return 0;
    }
    else {
        return num0 / num1;
    }
}

int main() {
    float num0, num1, result;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num0);

    printf("Digite o segundo numero: ");
    scanf("%f", &num1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = adicao(num0, num1);
            printf("Resultado: %.2f\n", result);
            break;
        case '-':
            result = subtracao(num0, num1);
            printf("Resultado: %.2f\n", result);
            break;
        case '*':
            result = multiplicacao(num0, num1);
            printf("Resultado: %.2f\n", result);
            break;
        case '/':
            result = divisao(num0, num1);
            if(result != 0) {
                printf("Resultado: %.2f\n", result);
            }
            break;
        default:
            printf("Operacao invalida.\n");
            break;
    }

    return 0;
}
