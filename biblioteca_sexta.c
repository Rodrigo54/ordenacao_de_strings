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
 * @file biblioteca_sexta.c
**/

#include "biblioteca_sexta.h"

/** @name Ordenação Mergesort
 *  @note Leia mais em biblioteca_sexta.h
**/
void intercala(char *a,int ini, int meio,int fim,char*aux){
    int i = ini, j = meio + 1, k = 0;

    while(i <= meio && j <= fim){
        if (a[i] <= a[j]){
            aux[k++] = a[i++];
        }else{
            aux[k++] = a[j++];
        }
    }
    while(i <= meio){
        aux[k++] = a[i++];
    }
    while(j <= fim){
        aux[k++] = a[j++];
    }

    for(i = ini, k = 0; i <= fim; i++,k++){
        a[i]=aux[k];
    }
}
void mergeSort (char *a, int esq, int dir,char *aux){
    int meio;

    if(esq < dir){
        meio = (esq+dir)/2;
        mergeSort(a,esq,meio,aux);
        mergeSort(a,meio+1,dir,aux);
        intercala(a,esq,meio,dir,aux);
    }
}
/********* END Ordenação Mergesort **********/
