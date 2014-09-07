/* continue statement returns to the top of the loop to evaluate expression */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    for (i=0; i < argc; i=i+1) {
        // Skip over first three arguments
	if (i < 3) continue; // Jumps to ‘i=i+1’ above
            printf("Argument %d is %s\n", i, argv[i]);
    } 
}

