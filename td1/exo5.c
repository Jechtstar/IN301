#include "graphics.h"


int main()
{


// Debut du code
int n,i,ok;
ok=0;
i=2;
n=lire_entier_clavier();
while((ok==0)&&(i<=(n/2))){
	if((n%i)==0)
	ok=1;
	i++;
}
printf("%d",ok);
// Fin du code


exit(0);
}
