/*Write a C Function that swaps the value of two numbers using four ways.*/
#include<stdio.h>
void swap1(int*,int*);
void swap2(int,int);
void swap3(int,int);
void swap4(int,int);
int main ()
{
int num1,num2; 
int num21,num22;
int num31,num32;
int num41,num42;
printf("the first way !\n");
printf("Enter the first number : "); scanf("%d",&num1);
printf("Enter the second number: "); scanf("%d",&num2);
 swap1(&num1,&num2); printf("num1 = %d , num2 = %d \n",num1,num2);
 
printf("second way !\n");
printf("Enter the first number : "); scanf("%d",&num21);
printf("Enter the second number: "); scanf("%d",&num22);
swap2(num21,num22);

printf("third way !\n");
printf("Enter the first number : "); scanf("%d",&num31);
printf("Enter the second number: "); scanf("%d",&num32);
swap3(num31,num32); 

printf("fourth way !\n");
printf("Enter the first number : "); scanf("%d",&num41);
printf("Enter the second number: "); scanf("%d",&num42);
swap4(num41,num42); 


  return 0;
}
//swapping using temp variable and calling by refernce , this modify the variables in the main function as well as the parameters
void swap1(int* x,int* y)
{
int temp = *x;
*x = *y;
*y = temp;
}
/**********************************************************/
// this will not modify the arguments in the maun function, it will just modify the parameters in the swap function
void swap2(int x,int y) 
{    
x = x^y;
y = x^y;
x = x^y;
printf("after num1 = %d num2 = %d\n",x,y);
} 
/********************************************************/
void swap3(int x,int y )
{
    x = x+y; //x = total
    y = x-y; // y = total - y = x
    x = x-y;
    printf("after num1 = %d num2 = %d\n",x,y);
}
/*********************************************************/
// why did i get an error when i used double?????
//instead of int????*/
void swap4(int x,int y)
{
    x=x*y;
    y=x/y;
    x=x/y;
    printf("After Swapping: x = %d, y = %d\n",x,y);
}















