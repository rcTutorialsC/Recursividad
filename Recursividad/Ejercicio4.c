//
//  main.c
//  Ejercicio4
//
//  Created by Ricardo Champa on 15/04/2018.
//  Copyright © 2018 Ricardo Champa. All rights reserved.
//

#include <stdio.h>
/*
 4. Implementa una función recursiva que permita sumar los dígitos de un número. Ejemplo: Entrada: 123 Resultado:6.
 */

int sumaDigitos(int n){
    if(n<10){
        return n;
    }
    else{
        return (n%10) + sumaDigitos(n/10);
    }
}

int main(int argc, const char * argv[]) {
    
    printf("Introduce un número\n");
    int numero;
    scanf("%d",&numero);
    
    int s = sumaDigitos(numero);
    
    printf("El resultado de la súma de dígitos es: %d\n",s);
    return 0;
}
