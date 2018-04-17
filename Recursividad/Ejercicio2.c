//
//  main.c
//  Ejercicio2
//
//  Created by Ricardo Champa on 15/04/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.
//

#include <stdio.h>

/*
 
 2. Implementa una función iterativa que calcule la potencia de un número, debes preguntar al usuario la base y el exponente. Luego implementar la versión recursiva.
 */

int potencia(int base, int exponente){
    //caso base
    if(exponente==0){
        return 1;
    }
    else{
        return base*potencia(base, exponente-1);
    }
}

int main(int argc, const char * argv[]) {
    
    
    printf("Por favor introduce la base\n");
    int base;
    scanf("%d", &base);
    printf("Por favor introduce el exponente\n");
    int exponente;
    scanf("%d", &exponente);
    
    int p = potencia(base, exponente);
    
    printf("El resultado es: %d\n",p);
    
    return 0;
}
