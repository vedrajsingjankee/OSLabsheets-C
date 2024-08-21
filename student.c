#include <stdio.h>
int main(){
int mark1,mark2;
printf("Please input mark in exam paper and continuous assessment: ");
scanf("%d %d",&mark1,&mark2);

float m1,m2;
m1=(float)mark1/100.0;
m2=(float)mark2/50.0;

if(m1>0.4 && m2>0.4){
printf("Student obtains a pass in the module!");
}
else if((m1>0.8 && (m2>=0.35 && m2<=0.4)) || (m2>0.8 && (m1>=0.35 && m1<=0.4))){
printf("Student is pushed up!");
}
if(m1<0.4 && m2<40){
printf("Student has failed!");
}
return 0;
}
