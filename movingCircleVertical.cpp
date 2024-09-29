#include <graphics.h>
main() {
	initwindow(700,400);
	
	for(int i=0; i<700; i++) {
		circle(100, 200+i, 50);
		delay(10);
		cleardevice();
	}
	getch();
}