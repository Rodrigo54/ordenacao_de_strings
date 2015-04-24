/**
 * @name ORDENAÇÃO DE STRINGS
 *
 * @todo Faça um programa que dado uma string,
 *       coloque as letras dela em ordem crescente pelo
 *       algoritmo MergSort.
 *
 * @author Rodrigo Alves Mesquita <rodrigo54mix@gmail.com>
 * @author Jônatas Rodrigues de Souza <jonatasrodrigues03@gmail.com>
 * @author Justo Montelo Martins Neto <justomontelo@yahoo.com.br>
 * @author Adailton Morais Castro <adailtonmorais98@gmail.com>
 * @author Wallison Freitas de Oliveira <wallisonfreitas00@gmail.com>
 *
 * @link http://www.github.com/rodrigo54
 * @version 0.2
 * @date 5 Abr 2015
 * @copyright 2015 by Rodrigo Alves Mesquita
 * @file main.c
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "biblioteca_sexta.h"
#define MAX 100 //define o tamanho da string

int main(){
    char nome[MAX], aux[MAX];
    setlocale(LC_ALL, "Portuguese");

    printf("\n\tDigite Seu Nome: \n\t");
    gets(nome);

    //strlen retorna a quantidade de caracteres numa string
    mergeSort (nome,0, strlen(nome)-1, aux);
    //(total)-1 pois todo vetor começa na posição 0

    printf("\n\tOrdem Alfabética é: %s\n\n\t", nome);
    system("pause");
    return 0;
}
