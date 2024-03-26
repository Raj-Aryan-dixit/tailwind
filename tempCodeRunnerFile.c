#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Get the screen width and height
    int screenWidth = getmaxx();
    int screenHeight = getmaxy();

    // Calculate the middle of the screen
    int middleX = screenWidth / 2;
    int middleY = screenHeight / 2;

    // Draw a horizontal line in the middle of the screen
    line(0, middleY, screenWidth, middleY);

    getch();
    closegraph();

    return 0;
}
