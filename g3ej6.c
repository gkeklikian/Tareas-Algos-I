#include <stdio.h>
#define M_PI 3.14
#define PEDIR_RADIO "Ingrese el valor del radio"
#define PEDIR_ALTURA "Ingrese el valor de la altura"
#define msj_diametro "El diametro es: "
#define msj_circunferencia "La circunferencia es: "
#define msj_base "La base es: "
#define msj_volumen "El volumen es: "

float cilindro_diametro(double radio, double altura){
	double diametro;
	diametro = radio * 2;
	printf("%s%lf\n", msj_diametro, diametro);
	return diametro;
}

float cilindro_circunferencia(double radio, double altura){
	double circunferencia;
	circunferencia = M_PI * radio * 2;
	printf("%s%lf\n", msj_circunferencia, circunferencia);
	return circunferencia;
}

float cilindro_base(double radio, double altura){
	double base;
	base = M_PI * radio * radio;
	printf("%s%lf\n", msj_base, base);
	return base;
}

float cilindro_volumen(double radio, double altura){
	double volumen;
	volumen = M_PI * radio * radio * altura;
	printf("%s%lf\n", msj_volumen, volumen);
	return volumen;
}


int main(void){
	double radio, altura;
	puts(PEDIR_RADIO);
	scanf("%lf", &radio);
	puts(PEDIR_ALTURA);
	scanf("%lf", &altura);

	cilindro_circunferencia(radio, altura);
	cilindro_base(radio, altura);
	cilindro_diametro(radio, altura);
	cilindro_volumen(radio, altura);
	return 0;
}
