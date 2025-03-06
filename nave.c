#include <stdio.h>
#include <math.h>
int main()
{
    int L = 2;
    float c1 = pow(L,2);
    float c2 = (L*L)/2;
    float c3 = ((3.0/2*L)*L)/2;
    float c4 = (2*L)*(1.0/4*L);
    float at = c1 + 2*c2 + c3 + c4;
    float a = 2*L + 2*(1.0/4*L) + (3.0/2*L)+ sqrt(pow((float)3/2*L,2)+ pow(L,2));
    float b = (sqrt(pow(L,2)+ pow(L,2)))*2 + (L/2)*2;
    float pt = a + b;
    printf("area total:%.2f\n",at);
    printf("perimetro total:%.2f\n",pt);
    return 0;

}

