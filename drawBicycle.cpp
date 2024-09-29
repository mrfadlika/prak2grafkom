#include <graphics.h>

int main() {
   initwindow(800, 600);

   // Circle (lonceng)
   circle(228, 168, 10);
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(228, 168, WHITE);

   // Ban depan
   circle(200, 400, 100);
   setfillstyle(SOLID_FILL, BLUE);
   floodfill(200, 400, WHITE);

   // Ban belakang
   circle(677, 430, 80);
   setfillstyle(SOLID_FILL, BLUE);
   floodfill(677, 430, WHITE);

   // Roda gigi belakang
   circle(677, 430, 20);
   setfillstyle(SOLID_FILL, WHITE);
   floodfill(677, 430, WHITE);

   // Roda gigi depan
   circle(444, 429, 40);
   setfillstyle(SOLID_FILL, RED);
   floodfill(444, 429, WHITE);
   
   circle(444, 429, 20);
   setfillstyle(SOLID_FILL, WHITE);
   floodfill(444, 429, WHITE);

   // Tempat duduk
   ellipse(603, 190, 0, 360, 50, 10);
   setfillstyle(SOLID_FILL, BROWN);
   floodfill(603, 190, WHITE);

   // Garis (rangka)
   line(199, 402, 293, 141); // Rangka depan1
   line(260, 140, 352, 140); // Rangka depan2
   line(237, 168, 282, 168); // Rangka depan3
   line(272, 200, 601, 200); // Rangka tempat duduk
   line(253, 252, 427, 420); // Rangka sadel depan
   line(601, 200, 460, 419); // Rangka sadel belakang1
   line(601, 200, 678, 431); // Rangka sadel belakang2
   line(678, 431, 462, 431); // Rangka sadel
   line(440, 389, 671, 412); // Rantai1
   line(448, 468, 675, 450); // Rantai2
   line(440, 410, 440, 358); // Sadel1
   line(426, 358, 466, 358); // Sadel1
   line(449, 446, 449, 507); // Sadel2
   line(428, 507, 462, 507); // Sadel2

   getch(); // Wait for a key press
   closegraph(); // Close the graphics window
   return 0; // Return success
}
