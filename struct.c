#include <stdio.h>

int main() {
    
    struct pixel {
	int x,y,z;
	double intensity;
	double luminance;
    };

    struct pixel one_pixel;
    one_pixel.x = 3;
    
    struct pixel all_Pixels[128];
    all_Pixels[1].x = 5;
    printf("x from struct pixel.x is %d.\n",one_pixel.x);

    printf("x from struct all_Pixels[1].x is %d.\n",all_Pixels[1].x);
}
    
