#include <stdio.h> 

int bis(int x, int m);

int bic(int x, int m);

/* Calcular x|y usando solo llamadas a las funciones bis y bic */

int bool_or(int x, int y) {

 int resultado = bis(x,y);

 return resultado;

}

/* Calcula x^y usando solo llamadas a las funciones bis y bic */

int bool_xor(int x, int y) {

 int resultado = bic(bis(x,y), bic(x,y)^x);

 return resultado;

}

int main(){

	printf("%d\n",bool_or(13,6));
	printf("%d\n",bool_xor(13,6));
	return 0;
}

int bis(int x, int m) {

 unsigned int Z = x | m;
 return Z;

}

int bic(int x, int m) {

 unsigned int Z = (x | m) ^ m;
 return Z;

}

