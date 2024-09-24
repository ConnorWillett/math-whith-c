#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int usage(char *name);

int main(int argc, char **argv)
{
  if (argc != 2) return usage(argv[0]);

  float x = atof(argv[1]);
  float temp; 
  do
  {
    temp = x; 
    x = x - ((cos(x)-sinh(x))/(-sin(x)-cosh(x))); 
  } while (temp - x > 0.00001 || x - temp > 0.00001);

  float y = cos(x);
  printf("x = %.3f, y = %.3f\n", x, y);


  return 0;
}

int usage(char *name)
{
  fprintf(stderr,"usage = %s <num>\n",name);
  fprintf(stderr,"this program will find where\ncos(x) = sinh(x)\n");
}
