#include <stdio.h>
#include <windows.h>

int main()
{
	int x,y;
	printf("1 + ( 2 * 3 ) e (1 + 2) * 3"  );
	x = 1 + ( 2 * 3 );
	y = (1 + 2) * 3;
	printf("\n%d\t%d\n", x,y);
	Sleep(1000);
	system("cls");
}