#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>

void cerceve(void){
 setcolor(BLUE);
 setlinestyle(DOTTED_LINE,2,1);
 line(5,5,400,5);
 line(5,400,400,400);
 line(5,5,5,400);
 line(400,5,400,400);
}

void bariyer(void){
	setfillstyle(1,RED);
bar(25,25,50,100);
setfillstyle(1,YELLOW);
bar(25,100,125,125);
setfillstyle(1,BLUE);
bar(100,25,125,100);
setfillstyle(1,GREEN);
bar(100,100,200,125);

}

character(){
   circle(250, 100, 12); 
}



int main(){
char cd;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
setcolor(9);
	character();
	cerceve();
	bariyer();
	
	
	getch();
	closegraph();
}
