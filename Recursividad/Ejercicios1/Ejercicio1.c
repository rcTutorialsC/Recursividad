//
//  main.c
//  Ejercicio1
//
//  Created by Ricardo Champa on 15/04/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.
//

#include <stdio.h>

/*
 1. Implementa una función recursiva que calcule la suma de los n primeros números naturales.
 */


int suma(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+suma(n-1);
    }
}

int main(int argc, const char * argv[]) {
    
    int s1 = suma(4);
    int s2 = suma(5);
    
    printf("Suma de los primeros cuatro números naturales %d\n",s1);
    printf("Suma de los primeros cinco números naturales %d\n",s2);
    return 0;
}
