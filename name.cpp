#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include<dos.h>
int main()
{
int gd=DETECT, gm, color;
initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
for (color=3;color<6;color++)
{
 setcolor(color);
 settextstyle(color,0,color);
 outtextxy(100,40*color,"Akshit Ahuja");
 delay(500);
}
delay(3000);
return 0;
}
