//
//  Ejercicio1_4.c
//  Ejercicio1_4
//
//  Created by Ricardo Champa on 18/04/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.


//  1.4 Implementa una función recursiva que calcule la resta de los primeros n números negativos.

#include <stdio.h>

int sumaNegativos(int n){
    if(n==0){
        return 0;
    }
    else{
        return -n+sumaNegativos(n-1);
    }
}

int main(int argc, const char * argv[]) {
    
    int s1 = sumaNegativos(4);
    int s2 = sumaNegativos(5);
    
    printf("Suma de los primeros cuatro números naturales %d\n",s1);
    printf("Suma de los primeros cinco números naturales %d\n",s2);
    return 0;
}
