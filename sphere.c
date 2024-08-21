#include <stdio.h>
#include <math.h>

int main(){
int radius;
const float PI=3.142;
double  volume,area;
printf("Please input radius of sphere: ");
scanf("%d", &radius);
volume=(4/3)*PI*pow(radius,3);
area=4*PI*pow(radius,2);
printf("Volume of sphere= %f\n",volume);
printf("Surface area of sphere= %f\n",area);
return 0;
}

