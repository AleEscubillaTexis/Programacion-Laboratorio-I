#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

/**
        Dise�ar un programa para jugar a adivinar un n�mero entre 0 y 100.
*       El juego tiene que dar pistas de si el n�mero introducido por el
*       jugador est� por encima o por debajo. El juego termina cuando se
*       adivina el n�mero o se decide terminar de jugar ingresando un n�mero
*       negativo. Permitir jugar tantas veces como lo desee el jugador y al
*       salir mostrar su mejor puntuaci�n. Utilizar la biblioteca del punto 1.
**/
int main()
{
    int numberToGuess;
    int numberEntered;
    int play;
    char cont;

    cont = 's';

    while(cont == 's')
    {
        numberToGuess = getRandomNumber(1, 100, 1);
        play = 1;

        while(play == 1)
        {
            numberEntered = getInt("\n\nIngresa un numero entre 0 y 100: ");

            if(numberEntered < 0)
            {
                play = 0;
            }
            else if(numberEntered == numberToGuess)
            {
                printf("\nFelicitaciones! Adivinaste el numero");
                play = 0;
            }
            else if(numberEntered < numberToGuess)
            {
                printf("\nEl numero que ingresaste es chico. Intenta otra vez");
            }
            else if(numberEntered > numberToGuess)
            {
                printf("\nEl numero que ingresaste es grande. Intenta otra vez");
            }
        }

        cont = getChar("\n\nQueres seguir jugando? (s/n): ");
        system("cls");
    }
    return 0;
}
