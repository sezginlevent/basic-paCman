#include<graphics.h>
#include <stdio.h>
#include <stdlib.h>

char move;
int x=1,y=1;
int yem=0;
int score=0;
 
 void oylesine(){
 	setcolor(RED);
 setlinestyle(SOLID_LINE,0,10);
 line(80,80,380,80);
 line(80,380,380,380);
 line(80,80,80,380);
 line(380,80,380,380);

	setfillstyle(1,BLUE);
bar(150,85,200,180);
bar(85,220,200,260);
bar(260,125,375,155);
bar(260,300,375,330);
bar(300,155,330,260);
 }

int xy(){ 
	printf("x= %d\n",x);
	printf("y= %d\n",y);
}

foodCreate(){
	/*
	1.Yemek x=100,y=190
	2.Yemek x=285,y=170
	3.Yemek x=275,y=105
	4.Yemek x=360,y=280
	5.Yemek x=355,y=355
	6.Yemek x=105,y=355
	*/
	yem=0;
	switch(yem)
	{
		case 0:
			circle(100,190,5);
			yem++;
			break;
			
		case 1:
			circle(285,170,5);
			yem++;
			break;
		
		case 2:
			circle(275,105,5);
			yem++;
			break;
		
		case 3:
			circle(360,280,5);
			yem++;
			break;
			
		case 4:
			circle(355,355,5);
			yem++;
			break;
		
		case 5:
			circle(105,355,5);
			yem++;
			break;
			
		default:
			break;	
	}
}

eatFood(){
	if(x==100 || x==105 && y==190 || y==195)
		score=+10;
		yem++;
	if (x==285 && y==170)
		score=+10;
		yem++;
	if(x==275 && y==105)
		score=+10;
		yem++;
	if(x==360 && y==280)
		score=+10;
		yem++;
	if(x==355 && y==355)
		score=+10;
		yem++;
	if(x==105 && y==355)
		score=+10;
		yem=0;
}
 
main(){
	char cd;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
	  x=215;y=100;
 	oylesine();
 	
 	setcolor(5);
 	setfillstyle(1,YELLOW);
	 circle(x, y, 12); 

tikla:
switch (move){
	case 'w':
		if(y>100)
		y--;
		xy();		
		break;
	case 's':
		if(y<360)
		y++;
		xy();	
		break;
	case 'a':	
		if(x>100)	
		x--;
		xy();
		break;
	case 'd':
		if(x<360)
		x++;
		xy();
		break;
	case 'W':
		if(y>100)
		y--;
		xy();		
		break;
	case 'S':
		if(y<360)
		y++;
		xy();	
		break;
	case 'A':
		if(x>100)	
		x--;
		xy();
		break;
	case 'D':
		if(x<360)
		x++;
		xy();
		break;		
	default:
		printf("DOGRU TUS KULLAN");
}
 move=getch();
 cleardevice();
 
foodCreate();
eatFood();
 oylesine();
 setcolor(YELLOW);
 	setfillstyle(1,YELLOW);
   circle(x, y, 12);
   char xText[20];
   char yText[20];
   char scoreText[20];
   char yemText[20];
   sprintf(xText,"X:\t%d",x);
   outtextxy(50,40,xText);
   sprintf(yText,"Y:\t%d",y);
   outtextxy(50,60,yText);
   sprintf(scoreText,"Score:\t%d",score);
   outtextxy(50,20,scoreText);
   
	goto tikla;
	getch();
	closegraph();
}
