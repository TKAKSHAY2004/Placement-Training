//program to swap the consonants of a string

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isVowel(char c)
{
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}

bool isConsonant(char c)
{
    return ((c>='a' && c<='z') || (c>='A' && c<='Z')) && !isVowel(c);
}

int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0 , j = len-1 ; i<j ; j-- , i++)
    {
        if(isConsonant(str[i]) && isConsonant(str[j]))
        {
            str[i] = str[i] + str[j] - (str[j] = str[i]);
        }
        else if (isConsonant(str[i]))
        {
            i--;
        }
        else if (isConsonant(str[j]))
        {
            j++;
        }
    }
    printf("%s", str);
    return 0;
}