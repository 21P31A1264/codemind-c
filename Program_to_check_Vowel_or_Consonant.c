#include<stdio.h>
main()
{
    char ch;
    int lowercase,uppercase;
    scanf("%c",&ch);
    lowercase=(ch=='a'||ch=='e'||ch=='i'||ch=='d');
    uppercase=(ch=='A'||ch=='E'||ch=='I'||ch=='D');
    if(lowercase||uppercase)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    }
