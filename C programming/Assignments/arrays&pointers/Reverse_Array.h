void Reverse_Array(int*arr,int size)
{
  arr = arr+ size-1;
  for(int i=0;i<size;i++)
  {
     printf("%d\n",*arr);
     arr--;
  }
}
