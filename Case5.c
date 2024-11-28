//CASE STUDY 5
#include<stdio.h>
#include<math.h>

int fib(int n);
int check(int n);
int main()
{
	int n;
	printf("Enter the no:");
	scanf("%d", &n);
	fib(n);
	getch();

}

int fib(int n)
{
	int temp;
	temp=check(5*n*n-4)||check(5*n*n+4);
	if (temp==1)
	{
		printf("is fibo");
	}
	else
	{
		printf("not fibo");
	}	
}

int check(int n)
{
	int a;
	a=sqrt(n);
	if(a*a==n)
	return 1;
	else
	return 0;
}
