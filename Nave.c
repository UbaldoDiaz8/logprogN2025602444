#include<stdio.h>
#include<math.h>
int main()
{
int x;
x=2;
float y= (pow((float)x,2))/2;
float z= (((((float)x)/2)*3)*x)/2;
float u= (pow(x, 2));
float b= (((float)x)/4)*(x*2);
float a= (y*2)+(z)+(u)+(b);
float L=sqrt(((pow(((x)*1.5),2))+ u));
float d= sqrt(u*2);
float o=(x*5)+(d*2)+(L);
printf("El area total es de: %.2f\n", a);
printf("El perimetro total es de: %.2f", o);
return 0;
}
