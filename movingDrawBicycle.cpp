#include <graphics.h>

void drawBicycle(int offsetX) {
    cleardevice();

    circle(228 + offsetX, 168, 10);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(228 + offsetX, 168, WHITE);

    circle(200 + offsetX, 400, 100);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(200 + offsetX, 400, WHITE);

    circle(677 + offsetX, 430, 80);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(677 + offsetX, 430, WHITE);

    circle(677 + offsetX, 430, 20);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(677 + offsetX, 430, WHITE);

    circle(444 + offsetX, 429, 40);
    setfillstyle(SOLID_FILL, RED);
    floodfill(444 + offsetX, 429, WHITE);
    
    circle(444 + offsetX, 429, 20);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(444 + offsetX, 429, WHITE);

    ellipse(603 + offsetX, 190, 0, 360, 50, 10);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(603 + offsetX, 190, WHITE);

    // Garis (rangka)
    line(199 + offsetX, 402, 293 + offsetX, 141); // Rangka depan1
    line(260 + offsetX, 140, 352 + offsetX, 140); // Rangka depan2
    line(237 + offsetX, 168, 282 + offsetX, 168); // Rangka depan3
    line(272 + offsetX, 200, 601 + offsetX, 200); // Rangka tempat duduk
    line(253 + offsetX, 252, 427 + offsetX, 420); // Rangka sadel depan
    line(601 + offsetX, 200, 460 + offsetX, 419); // Rangka sadel belakang1
    line(601 + offsetX, 200, 678 + offsetX, 431); // Rangka sadel belakang2
    line(678 + offsetX, 431, 462 + offsetX, 431); // Rangka sadel
    line(440 + offsetX, 389, 671 + offsetX, 412); // Rantai1
    line(448 + offsetX, 468, 675 + offsetX, 450); // Rantai2
    line(440 + offsetX, 410, 440 + offsetX, 358); // Sadel1
    line(426 + offsetX, 358, 466 + offsetX, 358); // Sadel1
    line(449 + offsetX, 446, 449 + offsetX, 507); // Sadel2
    line(428 + offsetX, 507, 462 + offsetX, 507); // Sadel2
}

int main() {
    initwindow(800, 600);
    
    for (int offsetX = 0; offsetX > -600; offsetX -= 5) {
        drawBicycle(offsetX);
        delay(50); 
    }

    getch(); 
}