#include <stdio.h>
#include <stdlib.h>

#define MSJ_DIMENSION "Por favor, indique la dimension de la matriz"
#define MSJ_TRAZA "El valor de la traza de su matriz es"
#define MSJ_INGRESAR_MATRIZ "Ingrese los valores de la matriz, en orden de fila, bajando una columna cada vez que se acaba la fila"

int main(void){
	int dimension, traza = 0, i, j, valormatriz;
	puts(MSJ_DIMENSION);
	scanf("%d", &dimension);

	int matriz[dimension][dimension];

	for (i=0; i<dimension; i++){
		for(j=0; j<dimension; j++){
			puts(MSJ_INGRESAR_MATRIZ);
			scanf("%d", &valormatriz);
			matriz[i][j] = valormatriz;
		}
	}

	for (i=0; i<dimension; i++){
		traza+= matriz[i][i];
	}

	printf("%s:%d\n", MSJ_TRAZA, traza);

	return EXIT_SUCCESS;
}
