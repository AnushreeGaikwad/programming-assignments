#include<stdio.h>
#include<string.h>
void isPalindrome(char str[])
{
    int i=0;
    int h=strlen(str)-1;
    while(h>i)
    {
        if (str[i++]!=str[h--])
        {
            printf("%s is not a palindrome string\n",str);
            return;
        }
    }
    printf("%s is a palindrome string\n",str);
}
int main()
{
    isPalindrome("level");
    isPalindrome("radar");
    isPalindrome("Simplilearn");
    return 0;
}