#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	//Almacenamiento de datos
	char nombre[11], apellido[12], curso[5];
	
	float ciencias=0, mate=0, fisica=0, sociales=0, programacion=0;
	
	float promedio;
	
	//ingreso de datos
	printf("Ingrese su nombre:");
	scanf("%s", & nombre);
	
	printf("Ingrese su apellido:");
	scanf("%s", & apellido);	
	
	printf("Ingrese curso:");
	scanf("%s", & curso);
	
	printf("Ingrese nota de ciencias: \n ");
	scanf("%f", & ciencias);
	
	printf("Ingrese nota de matemática: \n ");
	scanf("%f", & mate);
	
	printf("Ingrese nota de física: \n ");
	scanf("%f", & fisica);
	
	printf("Ingrese nota de sociales: \n ");
	scanf("%f", & sociales);
	
	printf("Ingrese nota de programación: \n ");
	scanf("%f", & programacion);

	promedio = (ciencias+mate+fisica+sociales+programacion)/5;
	
	printf("-----CALCULO DE PROMEDIO DE NOTAS");
	
	printf("Sus datos son:\n");
	printf("Nombre: %s\n", nombre);
	printf("Apellido: %s\n", apellido);
	printf("Curso: %s\n", curso);

	printf("La nota de ciencias es: %.2f\n ", ciencias);	
	printf("La nota de matemática es: %.2f\n ", mate);
	printf("La nota de física es: %.2f\n ", fisica);
	printf("La nota de sociales es: %.2f\n ", sociales);
	printf("La nota de programación es: %.2f\n ", programacion);

	printf("Su promedio es: %.2f \n ", promedio);
}
