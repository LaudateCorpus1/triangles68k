#include <tigcclib.h>

void _main(void) {
	int x1, y1, x2, y2, x3, y3;
	int i;
	randomize();
	ClrScr();
	DrawStr(0, 0, "Press any key to generate", A_NORMAL);
	DrawStr(0, 10, "3 random triangles.", A_NORMAL);
	DrawStr(0, 20, "Press ESC to quit.", A_NORMAL);
	while (ngetchx() != KEY_ESC) {
		ClrScr();
		for (i = 0; i < 3; i++) {
			x1 = random(LCD_WIDTH);
			y1 = random(LCD_HEIGHT);
			x2 = random(LCD_WIDTH);
			y2 = random(LCD_HEIGHT);
			x3 = random(LCD_WIDTH);
			y3 = random(LCD_HEIGHT);
			DrawLine(x1, y1, x2, y2, A_NORMAL);
			DrawLine(x2, y2, x3, y3, A_NORMAL);
			DrawLine(x3, y3, x1, y1, A_NORMAL);
		}
	}
}