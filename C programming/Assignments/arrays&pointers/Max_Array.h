void Max_Array(int* arr,int size)
{ 
int max= arr[0];
for(int i=0;i<size;i++)
  {
    if (arr[i] > max) 
		  {max = arr[i];}
  }
printf("The MAX num is : %d\n",max);
}
