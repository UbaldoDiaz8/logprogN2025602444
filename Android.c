#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    x=7;
    float a= (((float)x)/2);
    float b= (((float)x)/5);
    float c= ((pow(a,2))*(3.1416))/2;
    float d= (pow(x,2));
    float e= (pow(b,2));
    float f= (x*3.1416)/2;
    float g= d+c+(e*8);
    float h=(b*23)+f;
    printf("El area total es: %.4f\n", g);
    printf("El perimetro total es: %.4f", h);
    return 0;
}

