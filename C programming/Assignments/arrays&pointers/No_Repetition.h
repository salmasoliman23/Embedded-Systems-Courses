void
No_Repetition (int* arr, int size)
{
   for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size;)
        {
            if(arr[j] == arr[i])
            {
                for(int k = j; k < size; k++)
                {
                    arr[k] = arr[k+1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }
printf("The new array without any repetition is:\n");    
for(int i=0;i<size;i++)
printf("%d\n",arr[i]);
}
