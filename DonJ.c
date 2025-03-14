#include<stdio.h>
#include<math.h>

int main ()
{
    const float l=12.0,iva=.16,pt=9256.0;

    float ap= sqrt((pow(l,2))+(pow((l/2),2)));
    float af= ((ap*(l*1.5))/2);
    printf("El area total del terreno es:%.3f metros cuadrados\n",af);

    float pagoi= pt*af;
    printf("El pago antes de impuestos es de: $%.3f\n",pagoi);

    float pagof= pagoi+(pagoi*iva);
    printf("El pago despues de impuestos es de: $%.3f\n",pagof);
    return 0;
}
