#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero){
    int retono;

    if ((numero == 1) || (numero == 0))
        return 1;

    retono = numero * fatorial(numero - 1);

    return retono;
}

int main(){
    int numero;
    unsigned long int resultado;

    printf("Informe um numero: ");
    scanf("%d",&numero);

    resultado = fatorial(numero);

    printf("O fatorial de %d eh %li\n", numero, resultado);

    system("read a");

    return 0;
}
