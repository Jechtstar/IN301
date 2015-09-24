#include "graphics.h"


int main()
{


// Debut du code


double u,v;
double e;
double i;
u=1.0;v=0.25;
i=3.0;
e=0.000001;
while ((u-v)>e){
u=v;
v=(1.0/(i*i));
i++;
}
printf("l'avant dernière valeur est %lf et la dernière est %lf",u,v);
// Fin du code


exit(0);
}
