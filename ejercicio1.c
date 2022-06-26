int bis(int x, int m);

int bic(int x, int m);

/* Calcular x|y usando solo llamadas a las funciones bis y bic */

int bool_or(int x, int y) {

 int resultado = __________ ;

 return resultado;

}

/* Calcula x^y usando solo llamadas a las funciones bis y bic */

int bool_xor(int x, int y) {

 int resultado = __________;

 return resultado;

}

int main(){

}

int bis(int x, int m) {

 unsigned int Z = x | 1<<m;
 return Z;

}

