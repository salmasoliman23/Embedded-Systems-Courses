void Search_Array(int*arr,int size,int num)
{
    int found=0;
  for(int i=0;i<size;i++)
  {
    if (arr[i] == num)
    {
        printf("Found!,The index is : %d\n ",i);
        found =1;
        break;
    }
    else
    {
        if (found == 0 && i == size-1)
        printf("Not Found!\n");
        
    }
  }
}
