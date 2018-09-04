/*
 * Este programa fue realizado como la tarea#4 el 3 de septiembre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es mostrar los n números de la serie de Fibonacci segun
 * lo que pida el usuario.
 *
 * Fecha: 3 de septiembre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

int main() {
    //Declaracion de variables
    //num0 y num1 empiezan con valores iniciales para poder desarrollar la secuencia.
    int num0=0;
    int num1=1;
    int resultado;
    int n;

    //Se le pregunta al usuario cuantos números de la serie de Fibonacci desea ver.
    printf("How many numbers of the Fibonacci sequence do you want to display?\n");
    scanf("%d", &n);   //El valor n se toma como double para mostrar un rango mayor de numeros.

    //Aqui inicia el ciclo "for", en donde la variable entera "incremento" que inicialmente vale 1 y va de 1 en 1,
    //esta variable indica que si el valor de "incremento" es menor que "n", el ciclo se repetira.
    for(int incremento=1;incremento<=n;incremento++)
    {
        printf("%d, ",num0); //El valor num0 se toma como double para mostrar un rango mayor de numeros.
        resultado=num0+num1;
        num0=num1;
        num1=resultado;
    }
    return 0;
}