#include "funciones.h"
#include <stdio.h>
int main(void)
{
  int termino = 0, random = 0, ingresobien = 1, res, res2;
  int x, y;
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
  while(termino != 1)
    {
      print_tablero(tablero);
      while(ingresobien != 0)
	{
	  printf("Ingrese las coordenadas separadas de un espacio\n");
	  scanf("%i%i", &x, &y);
	  res = validaten(x);
	  res2 = validaten(y);
	  if (res == 0 && res2 == 0)
	    {
	      res = validatec(tablero, x, y);
	      if (res == 0)
		{
		  printf("todo bien");
		}else{
		printf("todo mal");
	      }
	    }else{
	    printf("Ingrese coordenadas correctas \n \n");
	  }
	}
    }
  }
