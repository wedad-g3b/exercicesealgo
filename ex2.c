#include <stdio.h>
 void ex2(int y){
 if(( y % 4 == 0 ) || ( y % 100 == 0 && y % 400 != 0 ))
	 {
	printf("• %d : is leap year ❤ \n",y);}
   else {
	printf("• %d : is not leap year 💔 \n",y);}
 }

void leapyear2(int y){
if(( y % 4 == 0 ) || ( y % 100 == 0 && y % 400 != 0 ))                                                            { 
	printf("%d\n",y);
    }}

int main (){
	int y1,y2,ymin,i,ymax,yy;
	printf("•Enter two year:\n");
	scanf("%d %d",&y1,&y2);
	ex2(y1);
	ex2(y2);                                               if(y1==y2){                                    printf("•It should not be history itself return 🔁\n");}
	else {
	printf("•Leap years between two years 🤭:\n 0\n "); 
	i = 1;
	do { 
	if(y1>y2){                                             ymax = y1;                                             ymin = y2;                                             }                                                      if(y1<y2){                                             ymin = y1;
	ymax = y2; } 
	yy = ymax - ymin;
	ymin = ymin + i;
	leapyear2(ymin);
	i++;
        }
	while(i < yy);}                                       return 0;

}
