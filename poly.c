#include <stdio.h>

double poly(double x) {
    // Evaluate the polynomial:
    //	    4x^3 - 2x^2 + x + 5
    // using Horner's rule.
    double val;

    val = 4*x-2;
    val = val*x + 1;
    val = val*x + 5;
    return val;
}

double polyN(double x, double coeffs[], int numCoeffs) {
    int i;
    double val = 0.0;

    for (i=0; i < numCoeffs; i++) {
	val = val*x + coeffs[i];
    }
    return val;
}

int main() {
    int i;
    
    for (i=-5; i <= 5; i++) {
	printf("(%d,%g)\n",i,poly(i));
    }
}

