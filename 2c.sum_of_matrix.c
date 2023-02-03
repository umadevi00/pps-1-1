#include<stdio.h>
void sum(int[][2],int[][2]);
int main(){
int a[2][2],b[2][2],i,j;
printf("enter 4 element of A matrix");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&a[i][j]);}}
printf("enter 4 element of B matrix");
for(i=0;i<2;i++){
for(i=0;j<2;j++){
scanf("%d",&b[i][j]);}}
sum(a,b);
return 0;}
void sum(int a[][2],int b[][2]){
int i,j,c[2][2];printf("sum of the two matrices A and B is:\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
c[i][j]=a[i][j]+b[i][j];
printf("%5d",c[i][j]);
}
printf("\n");
}
return;
}  
