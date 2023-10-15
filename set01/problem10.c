//Write a C program to compare two strings, character by character.
#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char *string1,*string2,result;
    input_two_strings(string1,string2);
    stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the first string\n");
    scanf("%s",&string1);
    printf("Enter the second string\n");
    scanf("%s",&string2);
}
int stringcompare(char *string1, char *string2)
{
    int i,result;
    for(i=0;string1[i] || string2[i];i++)
    {
        if(string1[i]>string2[i])
        {
            result=string1[i];
        }
        else
        {
            result=string2[i];
        }
    }
    return result;
}
void output(char *string1, char *string2, int result)
{
    int i;
    if(string1[i]==result)
    {
        printf("%s is larger than %s and the result is %s\n",string1,string2,result);
    }
    else
    {
            printf("%s is larger than %s and the result is %s\n",string2,string1,result);
    }
}
