#include <Elegoo_GFX.h>
#include <Elegoo_TFTLCD.h>

#define LCD_CS A9 //
#define LCD_CD A12 //
#define LCD_WR A10 //
#define LCD_RD A11 //
#define LCD_RESET A8 //

#define  BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

Elegoo_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);

void setup(void) {
tft.reset();
tft.begin(0x9341);
tft.fillScreen(BLACK);
tft.setRotation(1);
tft.setCursor(5, 5);
tft.setTextColor(WHITE);
tft.setTextSize(1);
tft.println("Potentiometer value :");

tft.drawRect(155, 5, 15, 230, WHITE);
tft.drawLine(170, 230, 175, 230, WHITE);
tft.drawLine(170, 221, 175, 221, WHITE);
tft.drawLine(170, 212, 175, 212, WHITE);
tft.drawLine(170, 203, 175, 203, WHITE);
tft.drawLine(170, 194, 175, 194, WHITE);
tft.drawLine(170, 185, 175, 185, WHITE);
tft.drawLine(170, 176, 175, 176, WHITE);
tft.drawLine(170, 167, 175, 167, WHITE);
tft.drawLine(170, 158, 175, 158, WHITE);
tft.drawLine(170, 149, 175, 149, WHITE);
tft.drawLine(170, 140, 175, 140, WHITE);
tft.drawLine(170, 131, 175, 131, WHITE);
tft.drawLine(170, 122, 175, 122, WHITE);
tft.drawLine(170, 113, 175, 113, WHITE);
tft.drawLine(170, 104, 175, 104, WHITE);
tft.drawLine(170, 95, 175, 95, WHITE);
tft.drawLine(170, 86, 175, 86, WHITE);
tft.drawLine(170, 77, 175, 77, WHITE);
tft.drawLine(170, 68, 175, 68, WHITE);
tft.drawLine(170, 59, 175, 59, WHITE);
tft.drawLine(170, 50, 175, 50, WHITE);
tft.drawLine(170, 41, 175, 41, WHITE);
tft.drawLine(170, 32, 175, 32, WHITE);
tft.drawLine(170, 23, 175, 23, WHITE);
tft.drawLine(170, 14, 175, 14, WHITE);

}
void loop(void) {

int x = analogRead(A15);
int b = map(x, 0,1024,10,200);

unsigned long start = micros();

tft.setCursor(15, 45);
tft.setTextColor(RED);
tft.setTextSize(2);
tft.println(x);
tft.fillRect(160, b, 5, 30, BLUE);
delay(20);
tft.fillRect(160, b, 5, 30, BLACK);
tft.fillRect(15, 45, 50, 55, BLACK);
return micros() - start;
}
