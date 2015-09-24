#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//fonction factorielle
int factorielle (int nombre)
{
    int x = 0;
    if (nombre == 1)
    {
        x = 1;
        return(x);
    }
    else
    {
        x = nombre * factorielle(nombre - 1); // on appelle encore la fonction qui s'appellera encore elle meme si nombre est != de 1
        return(x);
    }
}

//fonction somme
int somme(int x){
  int res = 0;
  int i = 0;
  while(i <= x){
    i++;
    res=res+i;
  }
  return res;
}

//fonction maximum
int maximum(int x, int y){
  if(x = y || y > x)
    return y;
  else 
    return x;
}

//fonction principale
int main(){
  int a, b;

  srand(time(NULL));
  a = rand() % 8 + 2;
  b = factorielle(a);
  printf("\nFactorielle de %d vaut %d\n\n", a, b);
  
  a = rand() % 100;
  b = somme(a);
  printf("\nLa somme des entiers de 1 a %d vaut %d\n\n", a, b);

  a = rand() % 100;
  b = rand() % 100;
  printf("\nLe maximum entre %d et %d vaut %d\n\n", a, b, maximum(a,b));
  
  return 0;
}
