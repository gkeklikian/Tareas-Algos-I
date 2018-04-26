#include <stdio.h>
#include <stdlib.h>

void funcion(void) {
    static int x = 0; /* define un static y lo inicializa en 0. */
    x++; /* le suma 1 al nùmero inicializado */
    printf("%d\n", x); /* Imprime el valor del numero */
}

int main(void)
{
    funcion(); /* Llama a la funcion 5 veces, va sumando de a 1 e imprimiendo el valor de x cada vez que la llama */
    funcion();
    funcion();
    funcion();
    funcion();

    return EXIT_SUCCESS;
}
