/******************************************************************************

Calcular a soma de N números.(por exemplo, se o valor de N for 5 o resultado da soma deve ser 8,7)

find the sum of N number(if n = 5 the sum must be 8.7)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N, i = 1;
    float soma = 0, divisor = 0;
    
    scanf("%d",&N);
    
    divisor = N;
    
    for(i; i <= N; i++){
        soma += (i/divisor);
        divisor = divisor - 1;
    }
    printf("soma = %.2f",soma);
    
}



/******************************************************************************

Escreva um programa em C que leia um inteiro positivo n, em seguida leia n números de um algarismo. 
Seu programa deve computar e imprimir a frequência de ocorrência de cada um deles.

Write a C program that reads a positive integer n, then reads n single-digit numbers.
Your program must compute and print the frequency of occurrence of each of them.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, num;
    int cont0 = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0; 
    int cont6 = 0, cont7 = 0, cont8 = 0, cont9 = 0;
    
    printf("quantidade de numeros a serem lidos: ");
    scanf("%d",&n);
    
    while(n > 0){
        printf("Escreva um número entre 0 e 9: ");
        scanf("%d",&num);
        
        if(num == 0){
            cont0 += 1;
        }if(num == 1){
            cont1 += 1;
        }if(num == 2){
            cont2 += 1;
        }if(num == 3){
            cont3 += 1;
        }if(num == 4){
            cont4 += 1;
        }if(num == 5){
            cont5 += 1;
        }if(num == 6){
            cont6 += 1;
        }if(num == 7){
            cont7 += 1;
        }if(num == 8){
            cont8 += 1;
        }if(num == 9){
            cont9 += 1;
        }
        n -= 1;
    }
    
    printf("\n");
    printf("Frequência do número 0: %d\n",cont0);
    printf("Frequência do número 1: %d\n",cont1);
    printf("Frequência do número 2: %d\n",cont2);
    printf("Frequência do número 3: %d\n",cont3);
    printf("Frequência do número 4: %d\n",cont4);
    printf("Frequência do número 5: %d\n",cont5);
    printf("Frequência do número 6: %d\n",cont6);
    printf("Frequência do número 7: %d\n",cont7);
    printf("Frequência do número 8: %d\n",cont8);
    printf("Frequência do número 9: %d\n",cont9);
}



