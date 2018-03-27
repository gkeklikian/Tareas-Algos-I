#include <stdio.h>
#include <stdlib.h>
#include "mensajes24.h"

int main(void){
	int diadelano, diadesemana, x;
	puts(msj_pedir_numero);
	x = scanf("%d", &diadelano);
	if(x!=1){
		fprintf(stderr, "%s: %s\n", msj_error, msj_error_ingreso);
		return EXIT_FAILURE;
	}
	diadesemana = diadelano % 7;
	switch(diadesemana){
		case 1:
			printf("%s\n", msj_domingo);
			break;
		case 2:
			printf("%s\n", msj_lunes);
			break;
		case 3:
			printf("%s\n", msj_martes);
			break;
		case 4:
			printf("%s\n", msj_miercoles);
			break;
		case 5:
			printf("%s\n", msj_jueves);
			break;
		case 6:
			printf("%s\n", msj_viernes);
			break;
		case 0:
			printf("%s\n", msj_sabado);
			break;
		default:
			printf("%s\n", msj_error); /* Si valide el numero ingresado, no tiene sentido que haya un default aca*/
		}
	return 0;
}
