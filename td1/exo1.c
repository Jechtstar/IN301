#include "graphics.h"

void dessine_etoile(POINT p){
	POINT p1,p2;
	p1.x=p.x;p1.y=p.y+3;
	p2.x=p.x;p2.y=p.y-3;
	draw_line(p1,p2,blanc);
	p1.x=p.x+3;p1.y=p.y+2;
	p2.x=p.x-3;p2.y=p.y-2;
	draw_line(p1,p2,blanc);
	p1.x=p.x-3;p1.y=p.y+2;
	p2.x=p.x+3;p2.y=p.y-2;
	draw_line(p2,p1,blanc);
}


int main()
{
init_graphics(500,500);

// Debut du code
POINT p;
p=wait_clic();

int i;
for (i=0;i<=10;i++){
	p.x=p.x+10;p.y=p.y+20;
	dessine_etoile(p);
}
// Fin du code

wait_escape();
exit(0);
}
