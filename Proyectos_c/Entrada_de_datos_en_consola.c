
#include <stdio.h>

int
main ()
{

  int numeroentero;
  float numerodecimal;
  char letra;
  char nombre[100];
  printf ("Dame un nC:mero del 1 al 10\n");
  scanf ("%d", &numeroentero);

  printf ("Dame un nC:mero con dos decimales\n");
  scanf ("%f", &numerodecimal);
  getchar ();
  printf ("Dame una letra\n");
  scanf ("%c", &letra);

  printf ("Dame tu nombre\n");
  scanf ("%99s", &nombre);
  if (1 <= numeroentero <= 10)
    {
      printf ("Tu numero es:%d\n", numeroentero);
    }
  else
    {
      printf ("Su numero no es valido");
    }
  printf ("Su numero con decimales es: %f\n", numerodecimal);
  printf ("Su letra es:%c\n", letra);
  printf ("Tu nombre es:%s\n", nombre);
}
