#include <stdio.h>

int main() {
    int i = 2;
    double f = 1.2;
    int j;

    f = f +i; // i is promoted to double type, expression is double type
    i = i + 3; // both i and 3 are ints, expression is int type
    j = f + 1; // ???

    printf("f is %.3e\n (e)",f);
    printf("f is %f\n (f)",f);
    
    printf("i is %d (d)\n",i);

    //printf("j is %f (f)\n",j);
    printf("j is %d (d)\n",j);

    int k;

    k = (int) (f+1); // double expression f+1 casted to int type
    printf("k is %d (d)\n",k);
}
