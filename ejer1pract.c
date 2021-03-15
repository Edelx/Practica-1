#include <stdio.h>	//Realizado por Perez lopez Edilberto 10 de marzo de 2021
#define p printf

int main(){
	int numeros[10], i; 
	int *dir;		
	dir=&numeros;	//apuntador asigando al arreglo entero
	for(i=0;i<10;i++){ //ciclo para mostrar direccion de memoria de cada posicion
		
		p("La direccion del memoria del elemento [%d] es : %p\n ",i,&numeros[i]);	
	}
	p("\n");
	p("La direccion de memoria del primer elemento es: %p\n", &numeros[0]); //direccion de memoria del primer elemento
	p("\n");
	p("La direccion de memoria de la variable es: %p\n", dir); //direccion de memoria de la variable apuntada
	return 0;
}

