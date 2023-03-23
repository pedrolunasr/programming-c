
/******************************************************************************
Escreva um algoritmo em que seja lido um único número inteiro positivo com três 
algarismos, obtenha e imprima a soma do algarismos da unidade, dezena e centena.

write a code than reads a int with 3 numbers(879), then print each number separately
8 , 7 ,9
*******************************************************************************/
#include <stdio.h>

int main()
{
    //variaveis usdas
    int numero, centena, dezena, unidade, soma;
    // Lê a variavel numero;
    printf("escreva um número com inteiro com até 3 algarismos\n");
    scanf("%d", &numero);
    
    // divide o valor total por 100 pegando o valor da centena
    centena = numero / 100;
    // pega o resto da divisão por 100 e divide por 10 pegando o valor das dezenas
    dezena = (numero % 100) / 10;
    //pega o resto da divisão por 100 e depois o resto dessa por 10 dando o valor da unidade
    unidade = (numero % 100) % 10;
    //soma tudo e coloca me uma variavel
    soma = centena + dezena + unidade;
    
    
    printf("Número: %d\n",numero);
    printf("Soma dos algarismos %d", soma);
    
}


/******************************************************************************
Escreva um algoritmo em que sejam lidas a base e a altura de um retângulo e seja impressa, 
com precisão de 1 casa decimal, a seguinte saída:
a) Perímetro;
b) Área;
c) Diagonal.

Write an algorithm where the base and height of a rectangle are read and printed,
accurate to 1 decimal place, the following output:
a) Perimeter;
b) Area;
c) Diagonal.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    float base, altura;
    float perimetro, area, diagonal;
    
    printf("escreva respectivamente a base e a altura de um retangulo\n");
    scanf("%f%f", &base, &altura);
    
    perimetro = 2 * (base + altura);
    area = base * altura;
    diagonal = sqrt(pow(base,2)+pow(altura,2));
    
    printf("Perimetro: %.1f, Area: %.1f, Diagonal: %.1f",perimetro,area,diagonal);
}
