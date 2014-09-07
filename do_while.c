/*	do {		    */
/*	    STATEMENT;	    */
/*	}  while(TEST);	    */
// do while loop is executed at least once regardless of condition

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    i=0;        // INITIALIZE
    do {
	printf("Argument %d is %s\n", i, argv[i]);
	i = i+1;    // ITERATE
    } while (i < argc);
}
