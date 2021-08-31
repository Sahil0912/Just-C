#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char ch,s[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf(" %[^\n]%*c",&sen);
    printf("%c\n%s\n",ch,s);
    printf("%s",sen);
    return 0;
}
