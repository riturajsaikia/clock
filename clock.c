#include<stdio.h>
#include<graphics.h>
#include<time.h>
int main()
{
int gd,gm;
gd=DETECT;
initgraph(&gd,&gm, "C:\\TC\\BGI");
time_t rawTime;
struct tm * currentTime;
char a[100];
while(1)
{
rawTime = time(NULL);
currentTime = localtime(&rawTime);
strftime(a, 100, "%I : %M : %S %P", currentTime);
setcolor(10);
//settextstyle(4,0,7);
outtextxy(200,100,a);
delay(30);
cleardevice();
}
getch();
closegraph();
}
