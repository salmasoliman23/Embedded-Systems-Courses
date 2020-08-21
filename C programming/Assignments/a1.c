#include<stdio.h>
void Rev ();
void read ();
void set ();
void clear ();
void toggle ();
void set_last ();
void c_ones_zeros ();
void c_zeros_2_ones ();

int
main ()
{
  int program, another;
  printf
    ("1) A program that reads a positive integer and reverse all bits.\n");
  printf
    ("2) A program that reads the value of the i'th bit in 8 bit binary number\n");
  printf
    ("3) A program that sets the value of the ith bit (make it one) in 8 bit binary number\n");
  printf
    ("4) A program that clears the value of the ith bit (make it Zero) in 8 bit binary number\n");
  printf
    ("5) A program that toggles the value of the ith bit (make it 0 if it is 1 and 1 if it is 0) in 8 bit binary number\n");
  printf ("6) A program  that Sets last 2 bits of an 8 bit number\n");
  printf
    ("7) A program that reads a positive integer and calculate the number of ones & zeros in the number\n");
  printf
    ("8) A program that reads a positive integer and calculate the number of consecutive zeros between two ones\n");

l1:printf ("Enter the number of the program you want : ");
  scanf ("%d", &program);
  switch (program)
    {
    case 1:
      Rev ();
      printf
	("Do you want to run another program? if yes press 1 if no press 0\n");
      scanf ("%d", &another);
      if (another == 1)
	goto l1;
      else
	break;
    case 2:
      read ();
      printf
	("Do you want to run another program? if yes press 1 if no press 0\n");
      scanf ("%d", &another);
      if (another == 1)
	goto l1;
      else
	break;
    case 3:
      set ();
      printf
	("Do you want to run another program? if yes press 1 if no press 0\n");
      scanf ("%d", &another);
      if (another == 1)
	goto l1;
      else
	break;
    case 4:
      clear ();
      printf
	("Do you want to run another program? if yes press 1 if no press 0\n");
      scanf ("%d", &another);
      if (another == 1)
	goto l1;
      else
	break;
    case 5:
      toggle ();
      printf
	("Do you want to run another program? if yes press 1 if no press 0\n");
      scanf ("%d", &another);
      if (another == 1)
	goto l1;
      else
	break;
    case 6:
      set_last ();
      printf
	("Do you want to run another program? if yes press 1 if no press 0\n");
      scanf ("%d", &another);
      if (another == 1)
	goto l1;
      else
	break;
    case 7:
      c_ones_zeros ();
      printf
	("Do you want to run another program? if yes press 1 if no press 0\n");
      scanf ("%d", &another);
      if (another == 1)
	goto l1;
      else
	break;
    case 8:
      c_zeros_2_ones ();
      printf
	("Do you want to run another program? if yes press 1 if no press 0\n");
      scanf ("%d", &another);
      if (another == 1)
	goto l1;
      else
	break;
    default:
      break;
    }

  return 0;
}

void
Rev ()
{
  int num, rev = 0;
  printf ("enter a number : ");
  scanf ("%d", &num);
  while (num > 0)
    {
      rev = rev << 1;
      if (num & 1 == 1)
	rev = rev ^ 1;
      num = num >> 1;
    }

  printf ("the reversed is : %d", rev);
}

void
read ()
{
  int num;
  printf ("enter the number : ");
  scanf ("%d", &num);
  printf ("which bit do you want to read? ");
  int ith;
  scanf ("%d", &ith);
  num = (num >> ith - 1) & 1;
  printf ("the %d is : %d", ith, num);
}

void
set ()
{
  int num, bit, ith;
  printf ("enter an 8 bit binary number: ");
  scanf ("%d", &num);
  printf ("which bit do you want to set it to 1 ? ");
  scanf ("%d", &ith);
  bit = (num >> ith - 1) & 1;
  if (bit == 0)
    {
      num = num | (1 << ith - 1);
      printf ("the bit is setted and the new number is : %d\n", num);
    }
  else
    {
      printf ("the bit is already 1 !! \n");
    }
}

void
clear ()
{
  int num, bit, ith;
  printf ("enter an 8 bit binary number: ");
  scanf ("%d", &num);
  printf ("which bit do you want to clear it to 0 ? ");
  scanf ("%d", &ith);
  bit = (num >> ith - 1) & 1;
  if (bit = 1)
    {
      num = num & ~(1 << ith - 1);
      printf ("the bit is cleared and the new number is : %d\n", num);
    }
  else
    {
      printf ("the bit is already 0 !! \n");
    }
}

void
toggle ()
{
  int num, bit, ith;
  printf ("enter an 8 bit binary number: ");
  scanf ("%d", &num);
  printf ("which bit do you want to toggle ? ");
  scanf ("%d", &ith);
  //bit =  (num >> ith - 1) & 1;
  num = num ^ (1 << ith - 1);
  printf ("num is : %d", num);
}

void
c_ones_zeros ()
{
  int n, bit;
  printf ("enter a  number : ");
  scanf ("%d", &n);
  int count = 0;
  int z = 0;
  while (n != 0)
    {
      bit = n & 1;
      if (bit == 1)
	{
	  count++;
	  n = n >> 1;
	}
      else
	{
	  z++;
	  n = n >> 1;
	}
    }
  printf ("the number of ones is : %d\n", count);
  printf ("the number of zeros is : %d\n", z);
}

void
c_zeros_2_ones ()
{
  int n, bit;
  printf ("Enter a number : ");
  scanf ("%d", &n);
  int count = 0;
  int z = 0;
  while (n != 0)
    {
      bit = n & 1;
      if (bit == 1 && (n >> 1 & 1) == 1 && ((n >> 2 & 1) == 0))
	{
	  z++;
	  n = n >> 1;
	}
      else
	n = n >> 1;
    }
  printf ("the number of zeros is : %d\n", z);
}

void
set_last ()
{
  int num, bit1, bit2;
  printf ("Enter a number : ");
  scanf ("%d", &num);
  bit1 = (num >> 6) & 1;
  bit2 = (num >> 7) & 1;
  if (bit1 == 0)
    {
      num = num | (1 << 6);
    }

  else
    {
      printf ("the before last bit is already 1 !! \n");
    }


  if (bit2 == 0)
    {
      num = num | (1 << 7);
    }

  else
    {
      printf ("the  last bit is already 1 !! \n");
    }

  printf (" last two bits have been setted,the new num is : %d", num);

}

