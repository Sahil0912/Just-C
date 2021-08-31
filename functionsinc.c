#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max(int a,int b);
int max_of_Four(int a,int b,int c,int d);

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",max_of_Four(a,b,c,d));
    return 0;
}
int max(int a,int b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int max_of_Four(int a,int b,int c,int d){
    if (max(a,b)>max(c,d))
    {
        return max(a,b);
    }
    else if (max(a,c)>max(b,d))
    {
        return max(a,c);
    }
    else if (max(a,d)>max(c,b))
    {
        return max(a,d);
    }
    else if (max(b,c)>max(a,d))
    {
        return max(b,c);
    }
    else if (max(b,d)>max(c,a))
    {
        return max(b,d);
    }
    else
    {
        return max(c,d);
    }
}