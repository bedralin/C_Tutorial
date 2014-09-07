#include <stdio.h>
      
int main(int argc, char *argv[]) {
    int i;
    i=0;        // INITIALIZE
    while (i < argc) {
	printf("Argument %d is %s\n", i, argv[i]);
	i = i+1;    // ITERATE
    }
}

