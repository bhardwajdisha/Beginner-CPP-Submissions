#include<stdio.h>

int main()
{
   int n,t;
   printf("Enter the No of test cases : ");
   scanf("%d",&t);
  
   while(t--)
   {
     printf("\nEnter Number : ");
      scanf("%d",&n);
      int ans = 0;
    
      while(n)
      {
        if(n & 1 )
        ans ++;
        
        n = n>>1;
      }
    
      printf("Number of 1's : %d\n",ans);
   }
  return 0;
}