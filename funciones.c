#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"


/*Imprimir el tablero*/
void print_tablero(char (*tablero)[3]){

printf("\e[34m* 0 1 2 \n0\e[0m %c|%c|%c\n\e[34m1\e[0m %c|%c|%c\n\e[34m2\e[0m %c|%c|%c\n",tablero[0][0], tablero[0][1], tablero[0][2], tablero[1][0],
tablero[1][1],tablero[1][2], tablero[2][0], tablero[2][1], tablero[2][2]);

}
/*Generar un numero random entre 0 y 1*/
int generar_random(void)
{
  int random;
  srand(time(NULL));
  random = rand();
  if (random % 2 == 0)
    {
      return(0);
          }
  else
    {
      return(1);
    }
}
/*Validar que la posicion no este ocupada*/
int validate_position (char (*tablero)[3], int x, int y)
{
    if (tablero[x][y] == ' ')
        return (0);
    else
        return (1);
}

void ingresar_tablero(char (*tablero)[3], int x, int y)
{
   tablero[x][y] = 'X';
}

/*Validar que el numero ingresado sea entre 0 y 2*/
int validate_number (int n)
{
    if (n >=0 && n <=2)
        return (0);
    else
        return (1);
}
