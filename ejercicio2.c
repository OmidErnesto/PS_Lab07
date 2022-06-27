#include <stdio.h> 
#include <stdint.h>
#include <inttypes.h>  

int64_t mult_ok(int64_t x, int64_t y) {

 int64_t p = x*y;

 /* x es 0, o restar al int64_t maximo p ser mayor que 0*/

 return !x || INT64_MAX - p > 0;

}

int main(){

	printf("%" PRId64 "\n",mult_ok(152123123123153,15316));
        return 0;
}
