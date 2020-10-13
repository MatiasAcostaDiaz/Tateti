#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"


/*Imprimir el tablero*/
void print_tablero(char (*tablero)[3],char *players){

int i = 0, j = 0;
char player1 = players[0];
char player2 = players[1];
char position[] = "222222222";

for(i = 0; i < 3; i++){
  for(j = 0; j < 3; j++)
  {
    if(tablero[i][j] == player1)
      position[i + j] = '2';
    if(tablero[i][j] == player2)
      position[i + j] = '1';
  }

}

printf
("\e[1mTic Tac Toe\e[0m\n\e[34m* 0 1 2 \n0\e[0m \e[3%cm%c\e[0m|\e[3%cm%c\e[0m|\e[3%cm%c\e[0m\n\e[34m1\e[0m \e[3%cm%c\e[0m|\e[3%cm%c\e[0m|\e[3%cm%c\e[0m\n\e[34m2\e[0m \e[3%cm%c\e[0m|\e[3%cm%c\e[0m|\e[3%cm%c\e[0m\n",
position[0],tablero[0][0], position[1],tablero[0][1], position[2],tablero[0][2],
position[3], tablero[1][0],position[4],tablero[1][1],position[5],tablero[1][2],
position[6], tablero[2][0],position[7], tablero[2][1],position[8], tablero[2][2]);

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

void ingresar_tablero(char (*tablero)[3],char *players, int x, int y, int turno)
{
   if (turno % 2 == 0)
    {
      tablero[x][y] = players[0];
    }
    else
    {
        tablero[x][y] = players[1];
    }
    
}

/*Validar que el numero ingresado sea entre 0 y 2*/
int validate_number (int n)
{
    if (n >=0 && n <=2)
        return (0);
    else
        return (1);
}
