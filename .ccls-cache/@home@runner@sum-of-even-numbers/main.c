#include<stdio.h>
// Sum of all even numbers up up given number

int main()
{
int sum =0 ,num;  

  scanf("%d",&num);
  printf("Enter Your Number :");

  for(int i=0; i<= num; i++)
  {
    if(i%2==0)
    {
      printf("\n%d",sum);
      sum += i;
    }
    else
    {
      continue;
    }
  }

printf("\nSum of all Even numbers from 0 to %d is %d",num,sum);
  
  return  0;
}