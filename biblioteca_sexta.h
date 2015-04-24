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
 * @file biblioteca_sexta.h
**/

#ifndef BIBLIOTECA_SEXTA_H_INCLUDED
#define BIBLIOTECA_SEXTA_H_INCLUDED

/********* @name Ordenação Mergesort **********/
/** @function intercala(struct veiculo *a,int ini, int meio, int fim, struct veiculo *aux)
 *  @brief Esta função ordena strings
 *  @param char *a --> é a string a ser ordenada
 *  @param int ini --> é a primeira posição da string
 *  @param int meio --> é a posição do meio da string
 *  @param int fim --> é a ultima posição da string
 *  @param char *aux --> é um vetor auxiliar
**/
void intercala(char *a,int ini, int meio, int fim, char*aux);

/** @function mergeSort(struct veiculo *a, int esq, int dir, struct veiculo *aux)
 *  @note leia function intercala()
 *  @param char *a --> é o vetor a ser ordenado
 *  @param int esq --> é a primeira posição da string
 *  @param int dir --> é a ultima posição da string
 *  @param char *aux --> é um vetor auxiliar
**/
void mergeSort (char *a, int esq, int dir, char *aux);
/********* END Ordenação Mergesort **********/

#endif // BIBLIOTECA_SEXTA_H_INCLUDED
