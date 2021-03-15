#include<stdio.h>		//Realizado por Perez lopez Edilberto 10 de marzo de 2021
#define p printf


int main(){
	int matriz[3][2][4],i,j,k;
	int *dir;
	dir= &matriz;	//apuntador asignado al arreglo de tres dimensiones
	
	for(i=0; i<3; i++){		//ciclo para mostrar la el arreglo de arreglos
		p("\nMatriz [%i]\n",i);
		for(j=0; j<2; j++){		//ciclos para mostrar las direcciones de memoria de cada posicion
			p("\n");
			for(k=0; k<4; k++){
				p("Direccion memoria [%i][%i]: %p\n",j ,k , &matriz[i][j][k] );
			}
		}
		p("\n");
	}
	p("\nPrimer elemento de la direccion de memoria: [%p]\n",&matriz[0][0][0]);  	//direccion de la primera posicion
    p("\nDireccion variable de tipo arreglo: [%p]",dir); 	//direccion de la variable a la que se esta apuntando
	return 0;
}
