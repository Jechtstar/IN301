#include "graphics.h"


int main()
{


// Debut du code
double n;
n=800.0;
double u;
u=sqrt(n);
double i;
for(i=n-1.0;i>0;i--){
	u=sqrt(i+u);
}
printf("%lf",u);


// Fin du code


exit(0);
}

