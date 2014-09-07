#include <stdio.h>
      
int main(int argc, char *argv[]) {
    printf("This program was called \"%s\".\n",argv[0]);
    // input for switch must be an integer-value expression
    switch (argc) {
    case 0:
    case 1:
	printf("You need to enter at least 1 parameter\n"); 
	break;
    case 2:
	printf("You entered 1 parameter, which was \"%s\"\n",argv[1]);
	break;
    case 3:
        printf("You entered 2 parameters, which was \"%s\" and \"%s\"\n",argv[1],argv[2]);
        // printf("Everything is OK\n");
	break;
    default:
	printf("You entered too many parameters.\n"); break;
    }    
}
