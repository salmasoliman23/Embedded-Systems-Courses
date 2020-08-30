void Min_Array(int* arr,int size)
{ 
int min= arr[0];
for(int i=0;i<size;i++)
  {
    if (arr[i] < min) 
		  {min = arr[i];}
  }
printf("The Min num is : %d\n",min);
}
