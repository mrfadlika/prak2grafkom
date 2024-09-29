#include <graphics.h>

int main() {
   initwindow(800, 600);

   // Bendera
   setcolor(WHITE);
   line(650, 50, 650, 175);
   rectangle(650, 50, 775, 88);
   setfillstyle(SOLID_FILL, RED);
   floodfill(651, 51, WHITE);
   
   rectangle(650, 88, 775, 126);
   setfillstyle(SOLID_FILL, WHITE);
   floodfill(651, 89, WHITE);

   // Atap
   line(100, 200, 400, 50);
   line(400, 50, 700, 200);
   line(700, 200, 100, 200);
   setfillstyle(SOLID_FILL, BROWN);
   floodfill(400, 55, WHITE);

   // Dinding
   rectangle(150, 210, 650, 500);
   setfillstyle(SOLID_FILL, BLUE);
   floodfill(151, 211, WHITE);

   // Pintu
   rectangle(180, 250, 325, 500);
   setfillstyle(SOLID_FILL, RED);
   floodfill(181, 251, WHITE);

   // Jendela
   rectangle(400, 250, 625, 400);
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(401, 251, WHITE);
   
   setcolor(BLACK);
   line(400, 325, 625, 325);
   line(510, 250, 510, 400);

   getch();
}