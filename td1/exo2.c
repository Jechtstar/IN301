#include "graphics.h"

void convertisseur_secondes(int n){
	int i,s,m,h;
	s=0;
	m=0;
	h=0;
	for (i=0;i<=n;i++){
		if (s==60){
			m=m+1;
			s=0;
		}
		if (m==60){
			h=h+1;
			m=0;
		}
		s++;
	}
	s=s-1;
	if (h>1)
	printf("%d correspond secondes à %d heures ",n,h);
	else 
	printf("%d correspond à %d heure ",n,h);
	if (m>1)
	printf("%d minutes ",m);
	else
	printf("%d minute ",m);
	if (s>1)
	printf("%d secondes",s);
	else
	printf("%d seconde",s);
}


int main()
{


// Debut du code
int n;
n =lire_entier_clavier();
convertisseur_secondes(n);

// Fin du code


exit(0);
}
