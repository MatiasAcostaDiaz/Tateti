#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"


/*Imprimir el tablero*/
void print_tablero(char (*tablero)[3],char player_one, char player_two){

int i = 0, j = 0, pos = 0;
char position[9] = "222222222";

for(i = 0; i < 3; i++){
  for(j = 0; j < 3; j++)
  {
    if(tablero[i][j] == player_one){
      position[pos] = '2';
    }
    if(tablero[i][j] == player_two){
      position[pos] = '1';
    }
    pos++;
    

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

/*Validar que la posicion no este ocupada*/
int validate_position (char (*tablero)[3], int x, int y)
{
    if (tablero[x][y] == ' ')
        return (0);
    else
        return (1);
}

int is_win(char (*tablero)[3], char player_one, char player_two)
{
  int i, j, vertical_one, vertical_two, center, row_one, row_two,
  row_three, column_one, column_two, column_three;

  vertical_one = (int)tablero[0][0] + (int)tablero[1][1] + (int)tablero[2][2];
  vertical_two = (int)tablero[0][2] + (int)tablero[1][1] + (int)tablero[2][0];
  center = (int)tablero[0][1] + (int)tablero[1][1] + (int)tablero[2][1];
  row_one = (int)tablero[0][0] + (int)tablero[0][1] + (int)tablero[0][2];
  row_two = (int)tablero[1][0] + (int)tablero[1][1] + (int)tablero[1][2];
  row_three = (int)tablero[2][0] + (int)tablero[2][1] + (int)tablero[2][2];
  column_one = (int)tablero[0][0] + (int)tablero[1][0] + (int)tablero[2][0];
  column_three = (int)tablero[0][2] + (int)tablero[1][2] + (int)tablero[2][2];
  //Verificacion de vertical 1 para X
  if (vertical_one == 264 || vertical_one == 237)
  {
      return(1);
  }
  else if(vertical_two == 264 || vertical_two == 237)
  {
    return(1);
  }
  else if (center == 264 || center == 237){
    return(1);
  }
  else if(row_one == 264 || row_one == 237){
    return(1);
  }
  else if(row_two == 264 || row_two == 237){
    return(1);
  }
  else if(row_three == 264 || row_three == 237){
    return(1);
  }
  else if(column_one == 264 || column_one == 237){
    return(1);
  }
  else if(column_three == 264 || column_three == 237)
  {
    return(1);
  }
  
  return(0);
  

}