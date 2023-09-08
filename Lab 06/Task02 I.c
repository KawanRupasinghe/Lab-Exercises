#include <stdio.h>

void drawTriangle(int height) {
    for (int x = 1; x <= height; x++) {
        for (int y = 1; y <= x; y++) {
            printf(" * ");
        }
        printf("\n");
    }
}

void drawRectangle(int width, int height) {
    for (int x = 1; x <= height; x++) {
        for (int y = 1; y <= width; y++) {
            printf(" * ");
        }
        printf("\n");
    }
}

int main(void) {
    int triangleHeight1, rectangleWidth1, rectangleHeight1, triangleHeight2, rectangleWidth2, rectangleHeight2;

    printf("Enter the height of the triangle 1: ");
    scanf("%d", &triangleHeight1);

    printf("Enter the width of the rectangle 1: ");
    scanf("%d", &rectangleWidth1);

    printf("Enter the height of the rectangle 1: ");
    scanf("%d", &rectangleHeight1);

    printf("Enter the height of the triangle 2: ");
    scanf("%d", &triangleHeight2);

    printf("Enter the width of the rectangle 2: ");
    scanf("%d", &rectangleWidth2);

  i  printf("Enter the height of the rectangle 2: ");
    scanf("%d", &rectangleHeight2);



    printf("\n\nTriangle 1:\n");
    drawTriangle(triangleHeight1);

    printf("\nRectangle 1:\n");
    drawRectangle(rectangleWidth1, rectangleHeight1);

    printf("\n\n");

    printf("\nTriangle 2:\n");
    drawTriangle(triangleHeight2);

    printf("\nRectangle 2:\n");
    drawRectangle(rectangleWidth2, rectangleHeight2);

    return 0;
}
