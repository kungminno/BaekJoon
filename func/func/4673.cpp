#include <stdio.h>


int d(int n);

int main()
{

    int prod[10001]={0};
    int non_prod[10001] = { 0 };


    for (int i = 1; i < 10001; i++)
    {
        prod[i]=d(i);
    }
    
    for (int j = 1; j < 10001; j++)
    {
        if(prod[j]<=10000)
            non_prod[prod[j]] = 1;
    }
    for (int k = 1; k < 10001; k++)
    {
        if (non_prod[k] ==0 )
            printf("%d\n", k);
    }
    
    
    return 0;
}

int d(int n)
{
    int result = n;

    
    while ( n!=0 ) {
        result = result + n % 10;
        n = n / 10;
    }
    
    return result;
}