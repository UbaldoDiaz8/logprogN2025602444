#include <stdio.h>
int main()
{
    float p, a;
    printf("Anota tu peso en kilogramos:");
    scanf("%f",&p);
    printf("Anota tu altura en metros:");
    scanf("%f",&a);
    float imc = p/(a*a);
        if(a<=0 || p<=0){ printf("Ilogico.\n");}
        else if(imc<=18.4){ printf("Tienes bajo peso.\n");
                            printf("Tu IMC es: %.1f",imc);}
             else if(imc<=24.9){ printf("Tienes un peso normal.\n");
                                 printf("Tu IMC es: %.1f",imc);}
                  else if(imc<=29.9){ printf("Tienes sobrepeso.\n");
                                      printf("Tu IMC es: %.1f",imc);}
                       else if(imc<=34.9){ printf("Tienes obesidad clase 1.\n");
                                           printf("Tu IMC es: %.1f",imc);}
                            else if(imc<=39.9){ printf("Tienes obesidad clase 2.\n");
                                                printf("Tu IMC es: %.1f",imc);}
                                 else{ printf("Tienes obesidad clase 3.\n");
                                       printf("Tu IMC es: %.1f",imc);}
    return 0;
}
