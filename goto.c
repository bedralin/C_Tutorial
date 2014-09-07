
#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    goto ohletsjustskipit;
    for (i=0; i<argc; i=i+1) {
        printf("Argument %d is %s\n", i, argv[i]);
    }
    ohletsjustskipit: // This is a label 
	printf("We skipped it!\n");
}

