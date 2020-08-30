void Max_Consequetive_Array(int*arr,int size)
{   int n;
    int count=0;
    int temp=0;
    int buffer [size];
printf("Enter the number you want to see the maximum occurance for! : "); scanf("%d",&n);
    for (int i = 0; i < size; i++)
    {  
     
     if (arr[i] == n)   
       { count++;
        if (count > temp)
        temp = count;}
        else
        {count=0;}
    }   
    printf("The max = %d\n",temp);
}
