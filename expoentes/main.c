#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente){
    int retorno;

    if (expoente == 0)
        return 1;

    retorno = base * potencia(base,expoente -1);

    return retorno;
}

int main()
{
    int base, expoente, resultado;

    printf("Informe a base: ");
    scanf("%d", &base);

    printf("Informe o expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(base,expoente);

    printf("O Resultado de %d elevado a %d eh %d\n", base, expoente, resultado);

    system("read a");

    return 0;
}
