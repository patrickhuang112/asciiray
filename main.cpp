#include <Windows.h>
#include <iostream>
#include <string>
#include "vec3.h" 
#include "ray.h"

#define WIDTH 120
#define HEIGHT 15

/*
void tests()
{
	vec3 test(0.0f, 0.1f, 0.02f);
	vec3 test2(0.1f, 0.2f, 0.03f);
	vec3 test3;
	vec3 result = test + test2;
	ray r(test, test2);
	printf("testx : %F", r.direction.x );
	
}
*/

int main()
{
	int screenSize = WIDTH * HEIGHT;
	char* screen = new char[screenSize];
	for (int i = 0; i < screenSize; i++) {
		screen[i] = 'a';
	}
	HANDLE console = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(console);
	DWORD bytesWritten = 0;
	
	while (1) {
		screen[3] = 'a';
		screen[4] = 'b';
		screen[screenSize - 1] = '\0';
		WriteConsoleOutputCharacter(console, screen, screenSize, { 0,0 }, &bytesWritten);
	}

	
	return 0;
}