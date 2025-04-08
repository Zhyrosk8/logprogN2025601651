#include <stdio.h>
#include <math.h>

int main()
{
    const  S1="obesidad clase 3", S2= "obesidad clase 2",S3= "obesidad clase 1",S4="sobrepeso",S5="normal",S6="bajo peso";
    float peso,estatura;
    float IMC;
    const*estado;
    printf("ingresa tu peso: ");
    scanf("%f",&peso);
    printf("ingresa tu estatura: ");
    scanf("%f",&estatura);
    IMC = peso/pow(estatura,2);
    printf("IMC:%f\n",IMC);
    //PROCESO

    if(IMC>=0 && IMC<=18.4){
        estado=S6;
    }
    else if(IMC>=18.5 && IMC<=24.9){
        estado=S5;
    }
    else if(IMC>=25.0 && IMC<=29.9){
        estado=S4;
    }
    else if(IMC>=30.0 && IMC<=34.9){
        estado=S3;
    }
    else if(IMC>=35.0 && IMC<=39.9){
        estado=S2;
    }
    else if(IMC<=40.0){
        estado=S1;
    }
    printf("ESTADO ES:%s\n",estado);
    return 0;
}
