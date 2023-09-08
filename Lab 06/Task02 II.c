#include <stdio.h>

void drawCircle();
void drawTriangle();
void drawRectangle();
void drawIntersect();
void drawBase();
void skip_5_lines();

int main(){

    //drawing the rocket ship
    drawTriangle();
    drawRectangle();
    drawIntersect();
    skip_5_lines();

    //drawing the female stick figure
    drawCircle();
    drawTriangle();
    drawIntersect();

    //drawing the male stick figure
    drawCircle();
    drawRectangle();
    drawIntersect();
    drawBase();
    skip_5_lines();

return 0;
}

void drawCircle(){
    printf("   *   \n");
    printf(" *   * \n");
    printf("  * *  \n");
}

void drawTriangle(){
    printf("   *   \n");
    printf("  * *  \n");
    printf(" * * * \n");
    printf("* * * *\n");
}

void drawRectangle(){
    printf("* * * * \n");
    printf("* * * * \n");
    printf("* * * * \n");
    printf("* * * * \n");
    printf("* * * * \n");
}

void drawIntersect(){
    printf("   /\\   \n");
    printf("  /  \\  \n");
    printf(" /    \\ \n");
}

void drawBase(){
    printf("---------\n");
}
