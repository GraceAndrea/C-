/*Ingresar por pantalla 4 números enteros y se debe presentar el 
anterior y posterior de dichos números ingresados*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	//Almacenamiento de datos
	int n1=0, n2=0, n3=0, n4=0;
	
	printf("Ingrese primer número: \n ");
	scanf("%d", & n1); 
	printf("Ingrese primer número: \n ");
	scanf("%d", & n2);
	printf("Ingrese primer número: \n ");
	scanf("%d", & n3);
	printf("Ingrese primer número: \n ");
	scanf("%d", & n4);
	
	
	//ant=n-1
	//pos=n+1
	printf("%d ",n1);
	printf("%d \n",n2);
	printf("%d ",n1);
	printf("%d ",n2);
	printf("%d \n",n3);
	printf("%d ",n2);
	printf("%d ",n3);
	printf("%d \n",n4);
	printf("%d ",n4);
}	
