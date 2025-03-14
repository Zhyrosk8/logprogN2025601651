#include <stdio.h>
#include <math.h>

int main()
{
    int L = 12;
    float preciom2 = 9256.00;
    float areatriangulo,areatotal;
    float IVA,preciosinIVA,costoTOTAL;

    areatriangulo = ((sqrt(pow(L,2)- pow(1.0/4*L,2)))*(1.0/2*L))/2;
    areatotal = (L*(1.0/2*L)) + areatriangulo;
    preciosinIVA = areatotal* preciom2;
    IVA = preciosinIVA*0.16;
    costoTOTAL = preciosinIVA + IVA;
    printf("el area total es: %.2f\n",areatotal);
    printf("el costo sin IVA es: %.2f\n",preciosinIVA);
    printf("el IVA es: %.2f\n",IVA);
    printf("el costo total del terreno es: %.2f\n",costoTOTAL);
    return 0;
}
