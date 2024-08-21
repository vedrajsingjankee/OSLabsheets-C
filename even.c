#include <stdio.h>

int main(){
int sum,num,count;
sum=0;
count=0;
for(;;){
printf("Please number or terminate with -1: ");
scanf("%d",&num);
if(num==-1){
break;
}
if(num%2==0){
sum+=num;
count++;
}
}
printf("Number of even numbers is %d\n",count);
printf("Sum of even numbers is %d\n",sum);
return 0;
}
