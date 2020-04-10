#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	float ciencias=4.5, mate=9, fisica=7.3, sociales=5.1;
	float promedio;
	
	promedio=(ciencias+mate+fisica+sociales)/4;
	
	printf("El promedio es: %f\n",promedio);
	if(promedio > 6.5){
		
		printf("Pasaste el curso");
	} else {
		printf("No pasaste");
	}
	
}
