void Most_Occurance(int*arr,int size)
{
 int temp = 0;
  printf("Most occurred number:\n");
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (arr[i]==arr[j])
           count++;
   if (count> temp)
      temp = count;
  }

  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (arr[i]==arr[j])
           count++;
   if (count== temp)
       printf("%d\n",arr[i]); 
  }

  
}

