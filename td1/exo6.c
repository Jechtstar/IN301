#include "graphics.h"

int main()
{

// Debut du code
int n,m,i,sn,sm,ok;
ok=0;
sn=0;
sm=0;
n=lire_entier_clavier();
m=lire_entier_clavier();
for (i=1;i<=m/2;i++){
	if((n%i)==0) sn=sn+i;
	if((m%i)==0) sm=sm+i;
}
if((sn==m)&&(sm==n)) ok=100;
printf("%d",ok);
// Fin du code


exit(0);
}

