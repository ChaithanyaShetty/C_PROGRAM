#include<stdio.h>
#include<string.h>
int SUB(char s1[],char s2[]);

int main()
{
    char s1[30]="abcdefabcdzfabcdikabcd";
    char s2[10]="abcd";
    int r=SUB(s1,s2);
    printf("Count is %d",r);
}

int SUB(char s1[],char s2[])
{
    printf("HELLO!");
    
    int i,j,count=0,k;
    k=strlen(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        for(j=0;s2[j]!='\0';)
        {
         
         if(s1[i]==s2[j])
         {
         count++;
         }
         
        }
        
    }
    printf("\nHELLO!!");
    return count;
}
