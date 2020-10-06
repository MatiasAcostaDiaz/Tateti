#include "funciones.h"
#include <stdio.h>
int main(void)
{
  int termino = 0, random = 0, ingresobien = 1, res;
  char x, y;
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
	  printf("Ingrese la primera coordenada");
	  x = getchar();
	  res = validaten(x);
	  if (res == 0)
	    {
	      printf("Ingrese la segunda coordenada");
	      y = getchar();
	      res = validaten(y);
	      if (res == 0)
		{
		  res = validatec(tablero, (int)x, (int)y);
		  if (res == 0)
		    {
		      ingresobien = 0;
		      printf("todo bien")
		    }
		}
	    }
	}
  }
}
