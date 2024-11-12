#include<stdio.h>
void quadrant(float x , float y){
if (x>0 && y>0){ 
printf("_ 1st quadrant\n");}
else{
if(x>0 && y<0){
printf("_ 4th quadrant\n");}
else{
if(x<0 && y>0){
printf("_ 2nd quarant\n");}
else{
printf("_ 3rd quarant \n");}}} 
}

 int main(){
   float x1,y1,x2,y2;
	 printf("enter coordinat point A\n");
	 scanf("%f %f",&x1,&y1);
	printf("enter coordinat point B\n");
	 scanf("%f %f",&x1,&y2);
printf("coordinate AB is ♥ :\n");
       quadrant(x1,y1);
	quadrant(x2,y2);
   return 0;}
