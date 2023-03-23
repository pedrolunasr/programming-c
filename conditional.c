/******************************************************************************
Write an algorithm than reads weight and height, the output most be the IMC
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    
    float massa, altura, imc;
    scanf("%f %f",&massa, &altura);
    
    imc = massa/pow(altura, 2);
    
    if(imc < 18.5){
        printf("Magreza");
    }
    else if(imc >= 18.5 && imc < 24.9){
        printf("Normal");
    }
    else if(imc >= 24.9 && imc <= 30.0){
        printf("Sobrepeso");
    }
    else if(imc > 30.0){
        printf("Obesidade");
    }
    
}


/******************************************************************************
Write an algorithm than reads 3 numbers and organize then in ascending order
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    
    float massa, altura, imc;
    scanf("%f %f",&massa, &altura);
    
    imc = massa/pow(altura, 2);
    
    if(imc < 18.5){
        printf("Magreza");
    }
    else if(imc >= 18.5 && imc < 24.9){
        printf("Normal");
    }
    else if(imc >= 24.9 && imc <= 30.0){
        printf("Sobrepeso");
    }
    else if(imc > 30.0){
        printf("Obesidade");
    }
    
}
