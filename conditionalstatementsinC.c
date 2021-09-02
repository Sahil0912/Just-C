#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    char s[][9]={"one","two","three","four","five","six","seven","eight","nine"};
    if (n>=1 && n<=9)
    {
        printf("%s",s[n-1]);
    }
    else
    {
        printf("Greater than 9\n");
    }
    
    return 0;
}
