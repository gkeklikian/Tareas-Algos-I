#include <stdio.h>
#include <stdlib.h>

#define MSJ_FILAS "Por favor, indique la cantidad de filas de la matriz"
#define MSJ_COLUMNAS "Por favor, indique la cantidad de columnas de la matriz"
#define MSJ_INGRESAR_MATRIZ "Ingrese los valores de la matriz, en orden de fila, bajando una columna cada vez que se acaba la fila"

int main(void){
	int filas, columnas, i, j, k, l, valormatriz;
	puts(MSJ_FILAS);
	scanf("%d", &filas);
	puts(MSJ_COLUMNAS);
	scanf("%d", &columnas);

	int matriz[filas][columnas];
	int matriz2[filas][columnas];

	for (i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			puts(MSJ_INGRESAR_MATRIZ);
			scanf("%d", &valormatriz);
			matriz[i][j] = valormatriz;
			matriz2[j][i] = valormatriz;
		}
	}

	/* ----TEST----
	 for (i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("%d\n", matriz2[i][j]);
		}
	}
	*/
	return EXIT_SUCCESS;
}
