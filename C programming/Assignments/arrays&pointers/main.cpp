#include <stdio.h>
#define SIZE 4
#include"Read_Array.h"
#include"Sort_Ascending.h"
#include"Sort_Decending.h"
#include"Print_Array.h"
#include"Max_Array.h"
#include"Min_Array.h"
#include"Average_Array.h"
#include"Search_Array.h"
#include"Reverse_Array.h"
#include"Max_Consequetive_Array.h"
#include"No_Repetition.h"
#include"Most_Occurance.h"

int main()
{
int array[SIZE];
int num;

int temp;
Read_Array(array);
printf("Sorting the array ascending!\n");
Sort_Ascending(array,SIZE);
printf("Sorting the array decending!\n");
Sort_Decending(array,SIZE);
Max_Array(array,SIZE);
Min_Array(array,SIZE);
Averge_Array(array,SIZE);
printf("searching the arrray for an element!\n");
printf("Enter the number you're searching for : ");
scanf("%d",&num);
Search_Array(array,SIZE,num);
printf("The reversed array!\n");
Reverse_Array(array,SIZE); 
printf("Getting the maximum consequtive number!\n");
Max_Consequetive_Array(array,SIZE);
No_Repetition(array,SIZE);
Most_Occurance(array,SIZE);      
    return 0;
}
