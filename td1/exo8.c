#include "graphics.h"


int main()
{


// Debut du code

int u,i,j,y;
y=lire_entier_clavier();
for(j=1;j<=y;j++)
{
u=j;
i=0;
while(u!=1) 
{if (u%2==0) u=u/2;
 else u=3*u+1;
 i++;
}

printf("%d\n",i);}
// Fin du code


exit(0);
}

