#include "graphics.h"
int t[100];
void init_tableau(){
	int i;
	for (i=0;i<100;i++){
	//test
	if(i==99)
	t[i]=2;
	else {	
	t[i]=i+1;
	//printf("%d\n",t[i]);
}
}
}
int produit_t(){
	int p,i;
	p=1;
	for (i=1;i<100;i++){
	p=t[i]*p;
	
}
//printf("%d\n",p);
return p;
}
int minimum(){
	int min,i;
	min =t[0];
	for(i=0;i<100;i++){
		if(t[i]<min){
			min=t[i];
		}
}
//printf("%d\n",min);
return min;
}
void decale(){
	int i;
	for(i=99;i>=0;i--){
		if(i!=0)
		t[i]=t[i-1];
		else
		t[i]=0;
		printf("%d\n",t[i]);
	}
}
void insert(){
	int i,n,g,d,m;
	g=0;
	d=99;
	n=lire_entier_clavier();
	m=(g+d)/2;
	while((t[m]!=n)|| (g<=d)){
		if (t[m]>n){
			d=m-1;
		}
		else{ 
			g=m+1;
		}
		m=(g+d)/2;
	}
	if (n>100){
		printf("n n'est pas present dans le tableau\n");
	}
	else{
	n=m;
	for(i=99;i>=n;i--){
		if(i!=n)
		t[i]=t[i-1];
		else
		t[i]=n;
		printf("%d\n",t[i]);
	}
}
}
int main()
{


// Debut du code
int p,min;
init_tableau();
//p=produit_t();
min=minimum();
//printf("%d\n%d",p,min);
decale();
insert();


// Fin du code


exit(0);
}

