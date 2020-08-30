void Averge_Array(int*arr,int size)
{
  float sum =0;
  for(int i=0;i<size;i++)
  {
    sum = sum + arr[i];
  }
  float average = sum/size;
  printf("The average is : %f\n",average);
}
