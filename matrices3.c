#include <stdio.h>
#include <stdlib.h>

#define MSJ_FILAS "Por favor, indique la cantidad de filas de la matriz"
#define MSJ_COLUMNAS "Por favor, indique la cantidad de columnas de la matriz"
#define MSJ_INGRESAR_MATRIZ "Ingrese los valores de la matriz, en orden de fila, bajando una columna cada vez que se acaba la fila"
#define MSJ_NUMEROMULTIPLICADO "Por favor, indique el numero a multiplicarle a la matriz"

int main(void){
	int filas, columnas, i, j, valormatriz, numeromultiplicado;
	puts(MSJ_FILAS);
	scanf("%d", &filas);
	puts(MSJ_COLUMNAS);
	scanf("%d", &columnas);
	puts(MSJ_NUMEROMULTIPLICADO);
	scanf("%d", &numeromultiplicado);

	int matriz[filas][columnas];

	for (i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			puts(MSJ_INGRESAR_MATRIZ);
			scanf("%d", &valormatriz);
			matriz[i][j] = valormatriz;
		}
	}

	for (i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			matriz[i][j]*= numeromultiplicado;
		}
	}

	return EXIT_SUCCESS;
}
