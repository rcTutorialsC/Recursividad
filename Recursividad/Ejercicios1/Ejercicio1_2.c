//
//  Ejercicio1_2.c
//  Ejercicio1_2
//
//  Created by Ricardo Champa on 18/04/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.
//

#include <stdio.h>

/*
 1.2 Implementa una función recursiva que calcule la suma de los n primeros numero pares. Puedes usar la siguiente función:
 */

/*
 Esta función devuelve 1 si ’n’ es par y 0 si no lo es.
 */
int esPar(int n){
    return n%2==0;
}

int sumaPares(int n){
    if(n==0){
        return 0;
    }
    //si es impar no se suma
    else if(esPar(n)==0){
        return sumaPares(n-1);
    }
    else{
        return n+sumaPares(n-1);
    }
}

int sumaParesFinal(int n){
    return sumaPares(n*2);
}



int main(int argc, const char * argv[]) {
    
    int s1 = sumaParesFinal(4);
    int s2 = sumaParesFinal(5);
    
    printf("Suma de los pares de los primeros cuatro números naturales %d\n",s1);
    printf("Suma de los pares de los primeros cinco números naturales %d\n",s2);
    return 0;
}
