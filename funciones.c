#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

int verificar(char c,char (*tab)[3],int x, int y){

char p;

if  (tab[x][y] != ' ')
        return 1;
}

void print_tablero(char (*tablero)[3]){

printf("* 0 1 2\n0 %c|%c|%c\n1 %c|%c|%c\n2 %c|%c|%c\n",tablero[0][0], tablero[0][1], tablero[0][2], tablero[1][0],
tablero[1][1],tablero[1][2], tablero[2][0], tablero[2][1], tablero[2][2]);

}

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

int validatec ( char *tablero, int x, int y)
{
    if (tablero[x][y] == ' ')
        return (0);
    else
        return (1);
}
int validaten ( char c)
{
    if (c >= 48 && c <= 50)
        return (0);
    else
        return (1);
}

