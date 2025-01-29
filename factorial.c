#include<stdio.h>
int main(){
int i,num,factorial=1;
printf("\n enter the number");
scanf("%d",&num);
while (num>0){
factorial=factorial*num;
num=num-1;
}
printf("factorial %d ",factorial);
return 0;
}
