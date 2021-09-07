#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int n, sum=0;
    scanf("%d",&n);
    while (n!=0)
    {
        sum += n%10;
        n=n/10;
    }
    printf("%d",sum); 
    return 0;
}
