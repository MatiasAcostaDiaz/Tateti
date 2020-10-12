#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int termino = 0, random = 0, ingresobien = 1, res, res2,turno;
  int x, y, asig;
  char players[2];
  char tablero[3][3] = {{"   "},{"   "},{"   "}};
  random = generar_random();
  while(termino != 1)
  {
  print_tablero(tablero);
   if (random == 1)
	{
    players[0] = 'X';
	players[1] = 'O';
    }else{
    players[0] = 'O';
    players[1] = 'X';
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
		  printf("todo bien");
		   ingresar_tablero(tablero, x, y);
		   print_tablero(tablero);
		}else{
		printf("todo mal");
		termino = 1;
	      }
	    }else{
	    printf("Ingrese coordenadas correctas \n \n");
	  }
  }
}