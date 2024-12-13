#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm,i=0,x,xx,y,yy,r;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x=getmaxx();
y=getmaxy();
while(!kbhit())
{
i++;
setfillstyle(random(i),random(30));
circle(xx=random(x),yy=random(y),random(30));
setfillstyle(random(i),random(30));
floodfill(xx,yy,getmaxcolor());

}
getch();
}