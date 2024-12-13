#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>

void plotPoints(int xc,int yc,int x,int y)
{
putpixel(xc+x,yc+y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc+x,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc-x,WHITE);
}

void midPointCircle(int xc,int yc,int r)
{
int x=0,y=r;
int d=1-r;
plotPoints(xc,yc,x,y);
while(x<y){
if(d<0){
d=d+2*x+3;
}
else
{
d=d+2*(x-y)+5;
y--;
}
x++;
plotPoints(xc,yc,x,y);
delay(400);
}
}
int main()
{
int gd=DETECT,gm;
int xc,yc,r;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
cout<<"ENter the center of the circle (xc,yc): ";
cin>>xc>>yc;
cout<<"Enter the radius of the circle: ";
cin>>r;

midPointCircle(xc,yc,r);

getch();
closegraph();
return 0;
}