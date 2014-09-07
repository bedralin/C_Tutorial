#include <stdio.h>

// comment out DEBUG to disable it
//#define DEBUG 1 

int main() {
    // ifdef, else, endif, undef, if, error, elif, pragma
    #ifdef DEBUG
	printf("Debugging is enabled.\n");
    #else
	printf("Debugging is disabled.\n");
    #error wow 
	//printf("error man.\n");
    #endif
}
