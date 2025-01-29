#include<stdio.h>
int main(){
int num1,num2,sum,subtract,product,division,modulus,choice;
printf("\n enter the 2 numbers:");
scanf("%d%d",&num1,&num2);
printf("\n enter the operator");
printf("\n1.sum");
printf("\n2.subtract");
printf("\n3.product");
printf("\n4.division");
printf("\n5.modulus");
scanf("%d",&choice);
switch(choice)
{
case 1:
sum=num1+num2;
printf("the sum is");
printf("%d",sum);
break;
case 2:
subtract=num1-num2;
printf("the difference is");
printf("%d",subtract);
break;
case 3:
product=num1*num2;
printf("the product is");
printf("%d",product);
break;
case 4:
division=num1/num2;
printf("the division is");
printf("%d",division);
break;
case 5:
modulus=num1/num2;
printf("modulus is");
printf("%d",modulus);
break;
}
return 0;
}
