//
//  Ejercicio2_5.c
//  Recursividad
//
//  Created by Ricardo Champa on 05/05/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.
//

/**
 2.5 Implementa una función recursiva que resuelva el cuadrado latino. https://es.wikipedia.org/wiki/Cuadrado_latino
 Pista hay que usar arrays de 2 diminesiones(aka matrices)
 0 0 0 0 1
 0 0 0 1 2
 0 0 1 2 3
 0 1 2 3 4
 1 2 3 4 5
**/

#include <stdio.h>
#define TAM 9

void lat(int fila, int col, int cont, int max,int max_len, int mat[TAM][TAM]){
    if(fila==1 && col==1){
        mat[0][0] = cont;
        printf("[%d][%d]=%d\n",0,0,cont);
    }
    else{
        if(fila==col){
            mat[fila-1][col-1] = cont;
            printf("[%d][%d]=%d\n",fila-1,col-1,cont);
            lat(fila,col-1,cont-1,max,max_len,mat);
        }
        else{
            //if(cont>=0){
                if(col==1){
                    mat[fila-1][col-1] = cont;
                    printf("[%d][%d]=%d\n",fila-1,col-1,cont);
                    lat(fila-1,max_len,max-1,max-1,max_len,mat);
                }
                else{
                    mat[fila-1][col-1] = cont;
                    printf("[%d][%d]=%d\n",fila-1,col-1,cont);
                    lat(fila,col-1,cont-1,max,max_len,mat);
                }
            //}
            
            
        }
    }
}


int main(int argc, const char * argv[]) {
    int mat[TAM][TAM];
    for(int f=0; f<TAM; f++){
        for(int c=0; c<TAM; c++){
            mat[f][c] = 0;
        }
    }
    
    lat(TAM, TAM, TAM, TAM,TAM, mat);
    
    for(int f=0; f<TAM; f++){
        for(int c=0; c<TAM; c++){
            if(mat[f][c]>=0){
                printf(" %d ",mat[f][c]);
            }
            else{
                printf("%d ",mat[f][c]);
            }
        }
        printf("\n");
    }
}
