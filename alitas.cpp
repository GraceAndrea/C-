/*
ingrese el número de días que llevamos en casa por la situación actual,
dichos días convertirlos a horas y validar sí es mayor a 300 horas, 
en este caso presentar un mensaje que diga lo que sienten y en caso 
contrario un mensaje que diga "YA NO PUEDO MÁS, QUIERO ALITAS "
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	int dias=0, horas=0;
	printf("Ingrese el número de días en cuarentena:\n");
	scanf("%d", & dias);
	horas=(dias*24);
	
	printf("El número de horas en cuarentena es: %d\n",horas);
	if(horas > 300){
		
		printf("sad");
	} else {
		printf("YA NO PUEDO MÁS, QUIERO ALITAS");
	}
	
}
