#pragma once
#include <windows.h>

void gotoxy(int x, int y)
{
	COORD pos;

	pos.X = static_cast <SHORT> (x);
	pos.Y = static_cast <SHORT> (y);

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
