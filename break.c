#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    
    for (i=0; i < argc; i=i+1) {
	if (i >= 10) {
	    break;  // Only print the first 10 arguments
	}
	printf("Argument %d is %s\n",i,argv[i]);
    }
    // 'break' statement takes us here
}
