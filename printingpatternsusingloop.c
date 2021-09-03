#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int n,len,end,start;
    scanf("%d",&n);
    len = 2*n-1;
    start =0;
    end = len -1;
    int a[len][len];
    
    while (n!=0)
    {
        for (int i = start; i <=end; i++)
        {
            for (int j =start ; j <=end; j++)
            {
                if (i==start||i==end||j==start||j==end)
                {
                    a[i][j]=n;
                }
            }
        }
        ++start;
        --end;
        --n;
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
