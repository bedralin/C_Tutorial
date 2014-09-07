#include <stdio.h>
#include <stdlib.h>  // Defines exit() function

double sums(double values[], int howMany, double *sumOfCubesPtr) { 
    double sumOfSquares;
    int i;

    if (sumOfCubesPtr == 0) {  // How did that happen?
        printf("Whoa there!\n");
	exit(1);
    }
    
    *sumOfCubesPtr = 0; // Dereference pointer to return value #2 
    sumOfSquares = 0; // Initialize return value #1

    for (i=0; i < howMany; i++) {
        double temp = values[i]*values[i];
        sumOfSquares += temp;
        *sumOfCubesPtr += temp*values[i];
    }
    // values[4] = 20;  // arrays are pointers
    return sumOfSquares;
}

// This function sets all elements of a passed array to 0
void setTo0(double arr[], int N) {
    int i;
    double *iptr;
    for (i=0, iptr=&arr[0]; i < N; i++, iptr++) { // iptr++ is incrementing address
        *iptr = 0; // *iptr is altering value
    } 
}

int main() {
    double testcases[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double squares, cubes;
      
    squares = sums(testcases, 5, &cubes);
    printf("testcases are %f, %f, %f, %f and %f.\n",testcases[0],testcases[1],testcases[2],testcases[3],testcases[4]);
    printf("squares is %f and cubes is %f.\n",squares,cubes);

    printf("address of cubes is %p.\n",&cubes);

    setTo0(testcases,5);
    printf("After using setTo0, testcases are %f, %f, %f, %f and %f.\n",testcases[0],testcases[1],testcases[2],testcases[3],testcases[4]);

    // pointers can be used to reference structure variables
    
    struct pixel {
	int x,y,z;
    };
    struct pixel aPixel;
    struct pixel *pixelPtr;
    
    pixelPtr = &aPixel;
    
    // (*pixelPtr).y;
    pixelPtr->y = 5;  // Preferred for legibility

    printf("aPixel is %d.\n",aPixel.y);

}
