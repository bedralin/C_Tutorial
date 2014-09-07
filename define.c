#include <stdio.h>

#define PI 3.1415926535
#define HALFOF(x) x/2
#define SQUARED(x) x*x
// pseudo-functions using ternary operator ?:
#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))


int main() {
    printf("The constant pi is %g\n",PI);
    printf("Half of 10 is %d\n", HALFOF(10));
    printf("squared of 3 is %d\n",SQUARED(3));
}
