#include <stdio.h>
#include "ssd1306/ssd1306.h"

int main()
{
    ssd1306_Init();
    // printf("fill white\n");
    // ssd1306_Fill(White);
    // ssd1306_UpdateScreen();
    printf("fill black\n");
    ssd1306_Fill(Black);
    ssd1306_UpdateScreen();
    // printf("draw pixel\n");
    // ssd1306_DrawPixel(1, 1, White);
    // ssd1306_DrawPixel(2, 2, White);
    // ssd1306_UpdateScreen();
    // printf("draw rect white\n");
    // ssd1306_DrawRectangle(10, 10, 20, 20, White);
    // ssd1306_UpdateScreen();
    // printf("fill rect white\n");
    // ssd1306_FillRectangle(20, 20, 30, 30, White);
    // ssd1306_UpdateScreen();
    // ssd1306_Fill(Black);
    // printf("draw circle\n");
    // ssd1306_DrawCircle(15, 15, 5, White);
    // ssd1306_UpdateScreen();
    // printf("fill circle\n");
    // ssd1306_FillCircle(25, 25, 5, White);
    // ssd1306_UpdateScreen();
    // ssd1306_Fill(Black);
    // printf("draw arc\n");
    // ssd1306_DrawArc(15, 15, 5, 45, 315, White);
    // ssd1306_UpdateScreen();
    // ssd1306_Fill(Black);
    // printf("draw arc with radius line\n");
    // ssd1306_DrawArcWithRadiusLine(15, 15, 5, 45, 315, White);
    // ssd1306_UpdateScreen();

    // for (uint8_t y=0; y<5; y++)
    // {
    //     for (uint8_t x=0; x<24; x++)
    //         ssd1306_DrawPixel(x, y, Black);
    // }

    printf("draw rect block\n");
    // ssd1306_DrawRectangle(15, 16, 70, 24, White);
    ssd1306_DrawRectangle_Block(2, 18, 10, 25, White);
    ssd1306_DrawRectangle_Block(5, 22, 15, 29, White);
    // ssd1306_UpdateScreen();
    // ssd1306_DrawRectangle_Block(5, 16, 10, 23, White);
    // ssd1306_FillRectangle(15, 16, 70, 24, White);
    // ssd1306_FillRectangle_Block(15, 16, 70, 23, White);
    // ssd1306_FillRectangle_Block(115, 16, 129, 23, White);
    ssd1306_UpdateScreen();
    return 0;
}
