#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>

void moveRectangle() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

int left = 100, top = 100, right = 200, bottom = 150;
int step = 10;

while (!kbhit()) {
// Clear the screen
cleardevice();

// Draw the rectangle
rectangle(left, top, right, bottom);

// Pause for a short duration
delay(100);

// Update the position of the rectangle to move it right
left += step;
right += step;

// Check if it reaches the edge of the screen
if (right >= getmaxx()) {
left = 100;
right = 200;
}
}

closegraph();
}

int main() {
    moveRectangle();
    return 0;
}