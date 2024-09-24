#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int usage(char name[]);  

int main(int argc, char **argv)
{
  if( argc != 2 )
    return usage(argv[0]);  
  const int N = atoi(argv[1]);
  long double total = 0, a;
  
  for (double k = 0.0; k <= N; k++)
  {
    a = (1.0/(pow(16.0,k))) * ((4.0/((8.0*k)+1.0)) - (2.0/((8.0*k)+4.0)) - (1.0/((8.0*k)+5.0)) - (1.0/((8.0*k)+6.0)));
    total += a;
    
  } 
  printf("pi = %.14Lf\n",total);
  // 9 is the lowest value of N that will give us an acruete anser.

  return 0;
}


int usage(char name[])  
{
  fprintf(stderr, "usage: %s N\n" ,name);
  fprintf(stderr, "where N = end of summations\n");
  fprintf(stderr, "N needs to be 9 or bigger for 14 desimals\n");
  return 1;
}
