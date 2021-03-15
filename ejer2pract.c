#include <stdio.h>		//Realizado por Perez lopez Edilberto 10 de marzo de 2021
#define p printf

int main(){
    int mat[3][3], j, i;
    int *dir;
    dir= &mat;	//apuntador asignado al arreglo de dos dimensiones
    
    for(i=0; i<3; i++){		//ciclos para mostrar direccion de memoria de cada posicion
		p("\n");
        for (j=0; j<3; j++){
            p("Direccion memoria [%i][%i]: %p\n", i, j, &mat[i][j] );
        }
        p("\n");
    }
    p("\nPrimer elemento de la direccion de memoria: [%p]\n",&mat[0][0]);  //direccion de memoria de la primera posicion
    p("\nDireccion variable de tipo arreglo: [%p]",dir);		//direccion de memoria de la variable a la que se apunta                        
    return 0; 
}

