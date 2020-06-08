#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

/**
 * \brief Solicita un numero entero al usuario y devuelve el resultado
 * \param message Es el mensaje a ser mostrado
 * \return El numero entero ingresado por el usuario
 *
 */
int getInt(char menssage[])
{
    int number;

    printf("%s", menssage);
    scanf("%d", &number);

    return number;
}

/**
 * \brief Solicita un numero flotante al usuario y devuelve el resultado
 * \param message Es el mensaje a ser mostrado
 * \return El numero flotante ingresado por el usuario
 *
 */
float getFloat(char menssage[])
{
    float number;

    printf("%s", menssage);
    scanf("%f", &number);

    return number;
}

/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param message Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char menssage[])
{
    char character;

    printf("%s", menssage);
    setbuf(stdin, NULL);
    scanf("%c", &character);

    return character;
}

/**
 * \brief Genera un n�mero aleatorio
 * \param from N�mero aleatorio m�nimo
 * \param to N�mero aleatorio m�ximo
 * \param start Indica si se trata del primer n�mero solicitado 1 indica que si
 * \return retorna el n�mero aleatorio generado
 *
 */
char getRandomNumber(int from, int to, int start)
{
    if(start)
    {
        srand (time(NULL));
    }
    return from + (rand() % (to + 1 - from)) ;
}
