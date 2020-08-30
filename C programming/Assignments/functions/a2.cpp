	#include<stdio.h>
	int equation(int,int);
	int biggest (int,int);
	void Odd_Even(int);
	void prime (int);
	void powerTwo(int);
	int factorial(int);
	int user_input;
	int num1,num2;
	
	int main()
	{
		printf("ENTER THE PROGRAM YOU WANT!\n" );
		printf(" 1) equation program!\n");
		printf(" 2) the biggest program!\n");
		printf(" 3) odd or even program!\n");
		printf(" 4) prime program!\n");
		printf(" 5) power of two program!\n");
		printf(" 6) factorial program!\n");
		scanf(%d user_input);
		//validation user_input
		if (user_input<1 && user_input>6)
			printf (" PLEASE ENTER A NUMBER BETWEEN 1 AND 6");
		else
		switch (user_input)
		{
			case 1: { printf (" ENTER TWO NUMBERS \N"); scanf("%d%d",num1,num2); int z= equation (num1,num2); printf(" %d the result is: \n",z);break;}
			
			case 2: { printf (" ENTER TWO NUMBERS \N"); scanf("%d%d",num1,num2); int z= biggest(num1,num2); printf(" %d the result is: \n",z);break;}
			
			case 3: {printf (" ENTER A NUMBERS \N"); scanf("%d",num1); Odd_Even(num1);break;}
			
			case 4: { printf (" ENTER A NUMBER \N"); scanf( "%d",num1); prime(num1);break;}
			
			case 5: {printf (" ENTER A NUMBER \N"); scanf( "%d",num1); powerTwo(num1);break;}
			
			case 6: { printf (" ENTER A NUMBER \N"); scanf("%d%d",num1); int z= factorial(num1); printf(" %d the result is: \n",z);break;}
		}	
		return 0;
	}
	
	int equation (int num1 , int num2)
	{
		int Result = ((num1 + num2) * 3) /2– 10;
		return Result;
	}
	
	int biggest (int num1 , int num2)
	{
		if (num1 > num2)
		{int big = num1;}
		else 
		{int big = num2;}
		
		return big;
	}
	
	void Odd_Even (int num1 )
	{
		if (num1 % 2 = 0)
			printf(" EVEN \n");
		else
			printf(" ODD \n");
	}
	
	void prime (int num1)
	{
		max =num1/2;  
  for( int i = 2; i <= max; i++)  
  {  
      if(num1 % i == 0)  
      {  
          printf (" Number is not Prime.\n");  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      printf ("Number is Prime.\n");
	}
	
	
	void powerTwo(int num1)
	{
		if (num1 == 0)  
        printf(" NOT POWER OF TWO");  
    while (num1 != 1)  
    {  
        if (num1%2 != 0)  
           printf(" NOT POWER OF TWO");   
        num1 = num1/2;  
    }  
	printf(" POWER OF TWO");  
	}
	
	void factorial(int num1)
	{
		for(int i=1;i<=num1;i++)   
			{int fact = fact * i;}    
        
  printf("%d Factorial of ",num1," is: %d",fact);  
	}
	