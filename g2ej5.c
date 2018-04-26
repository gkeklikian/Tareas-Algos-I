#include <stdio.h>
#include <stdlib.h>

#define ERROR_NUMERO_INVALIDO "Lo ingresado no es un numero valido."
#define ERROR_RANGO_TEMP "La temperatura ingresada esta fuera del rango esperado"
#define MSJ_COLOR_ESTRELLA "La estrella es de color "
#define MSJ_COLOR_O "Azul"
#define MSJ_COLOR_B "Blanco azulado"
#define MSJ_COLOR_A "Blanco"
#define MSJ_COLOR_F "Blanco amarillento"
#define MSJ_COLOR_G "Amarillo"
#define MSJ_COLOR_K "Naranja"
#define MSJ_COLOR_M "Rojo"


typedef enum{clase_O, clase_B, clase_A, clase_F, clase_G, clase_K ,clase_M} espectral_t;

int main(void){
	int temp;
	espectral_t clasificacion;
	char c;

	puts("Ingrese la temperatura del cuerpo celeste");
	if(scanf("%d", &temp) != 1){
		fprintf(stderr, "%s\n", ERROR_NUMERO_INVALIDO);
		return EXIT_FAILURE;	
	}

	while ((c=getchar())!='\n' && c!= EOF);

	if(temp < 1700 || temp > 50000){
		fprintf(stderr, "%s\n", ERROR_RANGO_TEMP);
		return EXIT_FAILURE;
	}
	else{

		if (28000<temp && temp<=50000){
			clasificacion = clase_O ;
		}
		else if (9600<temp && temp<=28000){
			clasificacion = clase_B ;
		}
		else if (7100<temp && temp<=9600){
			clasificacion = clase_A ;
		}
		else if (5700<temp && temp<=7100){
			clasificacion = clase_F ;
		}
		else if (4600<temp && temp<=5700){
			clasificacion = clase_G ;
		}
		else if (3200<temp && temp<=4600){
			clasificacion = clase_K ;
		}
		else if (1700<=temp && temp<=3200){
			clasificacion = clase_M ;
		}
		else 
			fprintf(stderr, "%s\n", ERROR_RANGO_TEMP);
	}

	switch(clasificacion){
			case (clase_O):
				printf("%s%s\n", MSJ_COLOR_ESTRELLA, MSJ_COLOR_O);
				break;

			case (clase_B):
				printf("%s%s\n", MSJ_COLOR_ESTRELLA, MSJ_COLOR_B);
				break;

			case (clase_A):
				printf("%s%s\n", MSJ_COLOR_ESTRELLA, MSJ_COLOR_A);
				break;

			case (clase_F):
				printf("%s%s\n", MSJ_COLOR_ESTRELLA, MSJ_COLOR_F);
				break;

			case (clase_G):
				printf("%s%s\n", MSJ_COLOR_ESTRELLA, MSJ_COLOR_G);
				break;

			case (clase_K):
				printf("%s%s\n", MSJ_COLOR_ESTRELLA, MSJ_COLOR_K);
				break;

			case (clase_M):
				printf("%s%s\n", MSJ_COLOR_ESTRELLA, MSJ_COLOR_M);
				break;

			default:
				fprintf(stderr, "%s\n", ERROR_RANGO_TEMP); 
				break; 
	}

	return EXIT_SUCCESS;
}

