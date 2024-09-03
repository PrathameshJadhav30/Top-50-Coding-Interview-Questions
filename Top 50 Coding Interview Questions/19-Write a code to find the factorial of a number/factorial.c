#include<stdio.h>
int main()
{
    int num = 6, fact = 1;
  
    //Can't calculate factorial of a negative number
    if(num < 0)
       printf("Error");
    else
    {
        for(int i = 1; i <= num; i++)
           fact = fact * i;
    }
    printf("Fact %d : %d", num, fact);
}
//Time complexity: o(N)
//Space Complexity: o(1)