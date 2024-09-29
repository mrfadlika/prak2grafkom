#include <graphics.h>

main() {
	initwindow(600,600);
	
	setcolor(WHITE);
	rectangle(50,50,500,350);

    setfillstyle(SOLID_FILL, RED);
    floodfill(51,51,15);
	
	getch();
}