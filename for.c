#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    // for(INITIALIZE; TEST; ITERATE)  STATEMENT;
    for (i=0; i < argc; i=i+1) {
	printf("Argument %d is %s\n", i, argv[i]);
    } 
}
