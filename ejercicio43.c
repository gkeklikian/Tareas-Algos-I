#include <stdio.h>
#include <stdlib.h>
#include "mensajes43.h"

int main(void){
	float kilometros, litros, preciolitro, monto, rendimiento;
	float rendtotal, rendpromedio, mejorrend = 2147483648, peorrend = -2147483648, distanciatotal, combustibletotal, costototal;
	int x, y, z, contador = 0;
/* 2147483648 es 2³¹, el numero mas grande que acepta un float. */
	puts(pedir_kilometros);

	x = scanf("%f", &kilometros);
	if(x != 1){
		fprintf(stderr, "%s: %s\n", msj_error_prefijo, msj_error_ingreso);
		return EXIT_FAILURE;
	}

	while(kilometros != -1){
		puts(msj_combustible);
		y = scanf("%f", &preciolitro);
		if(y != 1){
			fprintf(stderr, "%s: %s\n", msj_error_prefijo, msj_error_ingreso);
			return EXIT_FAILURE;
		}

		puts(msj_monto);
		z = scanf("%f", &monto);
		if(z != 1){
			fprintf(stderr, "%s: %s\n", msj_error_prefijo, msj_error_ingreso);
			return EXIT_FAILURE;
		}


		litros = monto/preciolitro;
		rendimiento = kilometros/litros;

		contador = contador + 1;
		rendtotal = rendtotal + rendimiento;
		rendpromedio = rendtotal / contador;

		if(rendimiento < mejorrend){
			mejorrend = rendimiento;
		}

		if(peorrend < rendimiento){
			peorrend = rendimiento;
		}

		distanciatotal = distanciatotal + kilometros;
		combustibletotal = combustibletotal + litros;
		costototal = costototal + monto;

		printf("%s%f\n", msj_rendimiento, rendimiento);


		printf("%s\n", pedir_kilometros);

		x = scanf("%f", &kilometros);
		if(x != 1){
		fprintf(stderr, "%s: %s\n", msj_error_prefijo, msj_error_ingreso);
		return EXIT_FAILURE;
		}
	}

	printf("%s%f\n", msj_rendpromedio, rendpromedio);
	printf("%s%f\n", msj_mejorrend, mejorrend);
	printf("%s%f\n", msj_peorrend, peorrend);
	printf("%s%f\n", msj_distanciatotal, distanciatotal);
	printf("%s%f\n", msj_combustibletotal, combustibletotal);
	printf("%s%f\n", msj_costototal, costototal);


	return 0;
}
