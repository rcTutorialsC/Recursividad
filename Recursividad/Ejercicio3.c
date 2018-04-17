//
//  main.c
//  Ejercicio3
//
//  Created by Ricardo Champa on 15/04/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.
//

#include <stdio.h>



/*
 3. Implementa un procedimiento recursivo que imprima los dígitos de un número natural n en orden inverso. Por ejemplo, para n=123 la salida debería ser 321.
 */
void imprimeinverso(int n){
    if(n<10){
        printf("%d",n);
    }
    else{
        printf("%d",n%10);
        imprimeinverso(n/10);
    }
}

int main(int argc, const char * argv[]) {
    
    
    printf("Introduce un número\n");
    int n;
    scanf("%d",&n);
    imprimeinverso(n);
    
    
    return 0;
}
