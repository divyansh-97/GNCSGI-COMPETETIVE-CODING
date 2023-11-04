#include <stdio.h>

int main(void) 
{
    int t,p,q,x;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&p,&q);
	    x=p+q;
	    if(x<4)
	     {
	         if(x==0||x==1)
	            printf("\nAlice");
	         else 
	            printf("\nBob");
	     }
	     else 
	     { 
	         if(x%4==2)
	         printf("\nBob");
	         else if(x%4==3)
	         printf("\nBob");
	         else 
	          printf("\nAlice");
	         
	     }
	       
	    
	}
	return 0;
}
