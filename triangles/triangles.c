#include <tigcclib.h>

void _main(void) {
	int x1, y1, x2, y2, x3, y3;
	int i;
	int val;
	randomize();
	ClrScr();
	DrawStr(0, 0, "Enter a number (1-5) to", A_NORMAL);
	DrawStr(0, 10, "create that many triangles.", A_NORMAL);
	DrawStr(0, 20, "After you enter a number,", A_NORMAL);
	DrawStr(0, 30, "you can continue to create", A_NORMAL);
	DrawStr(0, 40, "triangles by pressing", A_NORMAL);
	DrawStr(0, 50, "any key. Press ESC to quit.", A_NORMAL);
	switch (ngetchx()) {
		case 49:
			val = 1;
			break;
		case 50:
			val = 2;
			break;
		case 51:
			val = 3;
			break;
		case 52:
			val = 4;
			break;
		case 53:
			val = 5;
			break;
		default:
			ClrScr();
			DrawStr(0, 0, "You did not enter", A_NORMAL);
			DrawStr(0, 10, "a valid number.", A_NORMAL);
			DrawStr(0, 20, "3 triangles will generate.", A_NORMAL);
			val = 3;
	}
	
	while (ngetchx() != KEY_ESC) {
		ClrScr();
		for (i = 0; i < val; i++) {
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