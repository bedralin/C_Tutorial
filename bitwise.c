#include <stdio.h>  // printf
#include <string.h>  // strcat
#include <stdlib.h>  // strtol

int main() {
    unsigned char i,j,k;

    i=0x0F;  // In binary, i is: 00001111
    j=0xF8;  // In binary, j is: 11111000
    k=(i & j);  // In binary...  : 00001000

    printf("i is %d (00001111), which is %lu bytes\n",i,sizeof(i));
    printf("j is %d (11111000)\n",j);
    printf("k is %d & %d (00001111 & 11111000), which is %d (00001000).\n",i,j,k);

    unsigned char a,b,c;

    a=0x0F;  // In binary, a is: 00001111
    b=0xF8;  // In binary, b is: 11111000
    c=a | b; // In binary...   : 11111111

    printf("a is %d (00001111)\n",a);
    printf("b is %d (11111000)\n",b);
    printf("c is %d | %d (00001111 or 11111000), which is %d (11111111).\n",a,b,c);
    
    unsigned char d = 0x80;  // In binary, i is:		10000000
    unsigned char e,f,g;
    e = d >> 1;     // Shift right by 1 bit:	01000000
    f = d >> 5;	    // Shift right by 5 bits:	00000100
    g = d >> 9;	    // Shift right by 9 bits:	00000000

    printf("d is %d (10000000)\n",d);
    printf("e is %d (01000000)\n",e);
    printf("f is %d (00000100)\n",f);
    printf("g is %d (00000000)\n",g);


}


 
