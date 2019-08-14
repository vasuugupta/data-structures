#include<stdio.h>
#include<conio.h>
void main(){
int i ,j,val,loc,n;
int arr[100];
clrscr();
printf("enter the no of elements u want to print :\n ");
scanf("%d",&n);
printf("enter the elements ofthe array \n ");
for(i=0;i<=n;i++){
scanf("%d",&arr[i]);
}
printf("\n enter value and location:");
scanf("%d",&val);
scanf("%d",&loc);

for(i=n;i>=loc;i--){
arr[i+1]=arr[i];
}
n=n+2;
arr[loc]=val;
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
getch();
}
