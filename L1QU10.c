#include <stdio.h>

int main(){
int n;
struct patient{
int patientid;
float weight;
float fbs;
};

float maxw,maxf;
maxw=-9999;
maxf=-9999;
int maxindexw,maxindexf;
printf("Enter number n: ");
scanf("%d",&n);

struct patient array[n];

for(int i=0;i<n;i++){
printf("Enter patient id for patient %d\n",i+1);
scanf("%d",&array[i].patientid);
printf("Enter weight for patient %d\n",i+1);
scanf("%f",&array[i].weight);
printf("Enter FBS for patient %d\n",i+1);
scanf("%f",&array[i].fbs);
}

for(int j=0;j<n;j++){
if(array[j].weight>maxw){
maxw=array[j].weight;
maxindexw=j;
}
if(array[j].fbs>maxf){
maxf=array[j].fbs;
maxindexf=j;
}
}

if(maxindexw==maxindexf){
printf("Patient with maximum weight and FBS: \n");
printf("Patient id: %d\n",array[maxindexw].patientid);
printf("Weight: %f\n",array[maxindexw].weight);
printf("FBS: %f\n",array[maxindexw].fbs);
}else{
printf("Patient with maximum weight: \n");
printf("Patient id: %d\n",array[maxindexw].patientid);
printf("Weight: %f\n",array[maxindexw].weight);
printf("FBS: %f\n",array[maxindexw].fbs);


printf("Patient with maximum FBS: \n");
printf("Patient id: %d\n",array[maxindexw].patientid);
printf("Weight: %f\n",array[maxindexw].weight);
printf("FBS: %f\n",array[maxindexw].fbs);

}
return 0;
}
