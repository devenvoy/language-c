#include<graphics.h>

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	circle(320,240,200);
	getchar();
	closegraph();
	return 0;
}
