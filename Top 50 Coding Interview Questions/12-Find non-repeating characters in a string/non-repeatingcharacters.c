#include<stdio.h>
int main()
{
    //Initializing variables
    char str[100] = "Prathamesh";
    int i;
    int freq[256] = {0};
    //calculating frequency of each character.
    for(i = 0; str[i] != '\0';i++)
    {
        freq[str[i]]++;
    }
    printf("The non repeating characters are: ");
    for(i = 0; i < 256; i++)
    {
        if(freq[i] == 1)//Finding uniques charcters and printing them.
        {
            printf("%c ", i);
        }
    }
    return 0;
}