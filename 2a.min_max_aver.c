#include<stdio.h>
void main()
{
int a[3],i,sum=0;
float avg;
printf("enter 3 elements");
for(i=0;`i<3;i++)
scanf("%d",&a[i]);
int max=a[0],min=a[0];
for(i=1;i<3;i++){
if(a[i]>max){
max=a[i];}}
printf("maximum num is %d\n",max);
for(i=1;i<3;i++){
if(a[i]<min){
min=a[i];}}
printf("minimum num is %d\n",min);
for(i=0;i<3;i++)
{
sum=sum+a[i];}
avg=(float)sum/3;
printf("avg of given numbers is %f",avg);
return;
}
