#include "graphics.h"

int m_egypte(int x, int y){
	int c;
	c=0;
	printf("%d x %d\n",x,y);
	int res;
	while (x>1){
		if (x%2==0){
			x=(x/2);
			y=(y*2);
		}
		else{
			x=(x-1);
			y=y;
			c=c+y;
		}
		printf("= %d x %d + %d\n",x,y,c);
		
}
res=x*y+c;
return res;
}
int main()
{


// Debut du code

int x,y,res;
x=lire_entier_clavier();
y=lire_entier_clavier();
res=m_egypte(x,y);
printf("= %d",res);
// Fin du code


exit(0);
}
