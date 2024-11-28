//CASE STUDY 3
#include<stdio.h>
int digitDividingN(int n);
int main()
{
    int T,i ;
    printf("Enter the value of T: ");
    scanf("%d",&T);
    if(T >=1 && T <=15 )
    {
    int arr[T];

    //taking input for T test cases
    for(i =0; i < T; i++)
    {
        printf("Enter the number for test case %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    //printing output for T test cases
    for( i =0; i < T ; i++)
    {
        printf("%d\n",digitDividingN(arr[i]));
    }
    }
    else
    {
        printf("Invalid input\n");
    }
}

int digitDividingN(int n)
{  
 int count=0,copy =n;
 while(copy !=0)
 {
    int digit = copy%10;
    if(n%digit == 0)
    count++;
    copy = copy /10;
 }
return count;
}
