#include <stdio.h> 

int mult_ok(int x, int y) {

 int p = x*y;

 /* x es 0, o dividir p por x = y */

 return !x || p/x == y;

}
