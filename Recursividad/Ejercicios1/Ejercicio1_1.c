//
//  Ejercicio1_1.c
//  Ejercicio1_1
//
//  Created by Ricardo Champa on 18/04/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.
//

#include <stdio.h>

/*
 1.1 Implementa una función recursiva que calcule la multiplicación de los n primeros números naturales.
 */


int multiplicacion(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*multiplicacion(n-1);
    }
}

int main(int argc, const char * argv[]) {
    
    int s1 = multiplicacion(4);
    int s2 = multiplicacion(5);
    
    printf("multiplicacion de los primeros cuatro números naturales %d\n",s1);
    printf("multiplicacion de los primeros cinco números naturales %d\n",s2);
    return 0;
}
