#include <stdio.h>

int main(){
int n,max,count,num;
max=0;
printf("Enter number n: ");
scanf("%d",&n);
printf("Enter number: ");
scanf("%d",&num);
max=num;
count=1;
while(count<n){
printf("Enter number: \n");
scanf("%d",&num);
if(num>max){
max=num;
}
count++;
}
printf("Max number is %d\n",max);
return 0;
}
