/*
Crear una función que permita determinar si un número es par o no.
La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

 */

#include <stdio.h>
#include <stdlib.h>
int funcionParEImpar (int num);
int main(void) {
	setbuf (stdout, NULL);
	int num;

	printf("Ingresar un numero: ");
	scanf ("%d", &num);

	funcionParEImpar(num);
}

	int funcionParEImpar(int num){
	  if(num % 2 == 0){
		  printf ("1");
	  }else{
		  printf("0");
	  }
	  return 0;
	}

