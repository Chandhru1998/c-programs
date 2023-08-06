#include<stdio.h>
int fibo(int f);
int main()
{
    int i,n,ret,f=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>=0)
    {
	for(i=0;i<=n;i++)
	{
	    ret=fibo(f);
	    printf("%d\n",ret);
	    f++;
	}
    }
    else
    {
	printf("Invalid input\n");
    }
}
int fibo(int f)
{
    if(f==0)
	return 0;
    else if(f==1)
	return 1;
    else
	return fibo(f-1)+fibo(f-2);
}

