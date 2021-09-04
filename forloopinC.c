#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s[][9]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    scanf("%d%d",&a,&b);
    
    if (a<=9 && b>=9)
    {
        for (int i = a-1; i < 9; i++)
        {
            printf("%s\n",s[i]);
        }
        if (b>9)
        {
            for (int i = 10; i <=b; i++)
            {
                if (i%2==0)
                {
                    printf("even\n");
                }
                else
                {
                    printf("odd\n");
                }
            }
        }
    }
    else if (a<=9 && b<=9)
    {
        for (int i = a-1; i < b; i++)
        {
            printf("%s\n",s[i]);
        }
        
    }
    else
    {
        for (int i = a; i <=b; i++)
            {
                if (i%2==0)
                {
                    printf("even\n");
                }
                else
                {
                    printf("odd\n");
                }
            }
    }
    
    return 0;
}
