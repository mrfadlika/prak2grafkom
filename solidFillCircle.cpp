#include <graphics.h>

main() {
	initwindow(800,600);
	
	setcolor(RED);
	circle(430,300,250);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(430,300,RED);
	
	getch();
}