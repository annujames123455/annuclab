#include<stdio.h>
int main(){
int num1,num2,num3,largest=0;
printf("\n enter the 3 numbers");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2){
if(num1>num3){
printf("num1 is largest");
}else{
printf("num3 is largest");
}
}else if(num2>num1){
printf("num2 is the largest");
}else{
printf("num3 is the largest");
}
return 0;
}
