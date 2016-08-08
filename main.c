/*
EXEMPLO DE MATRIZ 3
MATRIZ DIAGONAL
CONDIÇÃO i == j
*/
#include <stdio.h>
#include <stdlib.h>
#define T 4
int main()
{
    int diagonal[T][T], i, j; //T=tamanho
    printf("Entre com %i termos inteiros: \n", T);
    for (i =0; i< T; i++)
    {
        for (j =0; j< T; j++)
        {
            if (i == j) /*CONDICAO DE EXISTENCIA*/
            {
                printf("diagonal[%i][%i]: ", i, j);
                scanf("%i", &diagonal[i][j]);
            }
            else
            {
                diagonal[i][j] = 0;
            }
        }
    }
    printf("diagonal[%i][%i]:\n", T, T);
    for (i = 0; i< T; i++)
    {
        for (j = 0; j< T; j++)
        {
            printf("\t%i", diagonal[i][j]);
        }
        printf("\n");
    }
    return 0;
}
