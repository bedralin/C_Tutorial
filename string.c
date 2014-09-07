#include <stdio.h>
#include <string.h>  // for string operations

void printChars(const char *str) {
    int i;
    
    for (i=0; i < strlen(str); i++) {
	printf("%c\n",str[i]);
    }
}

int main(void) {
    char hello[8]; // ‘hello’ is an 8-byte string
    hello[0] = 'H';
    hello[1] = 'e';
    hello[2] = 'l';
    hello[3] = 'l';
    hello[4] = 'o';
    hello[5] = '!';
    hello[6] = '\n';
    hello[7] = 0; // last element must be 0 (nul byte of string) 
		  // for array to be treated as string
    
    printf("%s", hello);

    printf("Hello==&(hello[0]) is %d!\n",(hello == & (hello[0])));
    printf("address of hello and &(hello[0]) are %s and %s",hello,&(hello[0]));
    printf("hello[0] is %c\n",hello[0]);
    printf("*hello[0] is %p\n",&hello[0]);

    char *hello2Ptr = & hello[0];
    printf("Using pointer, it is: %s",hello2Ptr);

    const char *helloPtr = "Hello world!\n";
    while (*helloPtr != 0) {
	printf("%c\n", *helloPtr);
	helloPtr++;
    }
    helloPtr=helloPtr-14;
    printf("Here we go.... %c\n",helloPtr[1]);
    printf("See? str[i] == *(str+i);\n");

    const char *hellowowPtr = "Hello Wow!\n";
    printChars(hellowowPtr);

}
