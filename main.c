#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int termino = 0, random = 0, ingresobien = 1, res, res2,turno = 1,win = 0;
  int x, y, asig;
  char players[2];
  char tablero[3][3] = {{"   "},{"   "},{"   "}};
  random = generar_random();
  if (random == 1)
	{
    players[0] = 'X';
	players[1] = 'O';
    }else{
    players[0] = 'O';
    players[1] = 'X';
  }
  while(termino != 1 || turno < 9)
  {
  system("clear");
  print_tablero(tablero, players[0], players[1]);
   win = is_win(tablero, players[0], players[1]);
  if(win != 0)
  {  
	printf("\e[93mFelicitaciones Jugador\e[0m \e[33m%d\e[0m\e[93m ha ganado\n\e[0m",win);
	  return(0);
  }
	  printf("Ingrese las coordenadas separadas de un espacio\n");
	  scanf("%i%i", &x, &y);
	  res = validate_number(x);
	  res2 = validate_number(y);
	  if (res == 0 && res2 == 0)
	    {
	      res = validate_position(tablero, x, y);
	      if (res == 0)
		{
		  printf("todo bien\n");
		  printf("%d\n", turno);
		   ingresar_tablero(tablero, players, x, y,turno);

		   turno++;
		}else{
		printf("todo mal");
	      }
	    }else{
	    printf("Ingrese coordenadas correctas \n \n");
	  }
  }
}