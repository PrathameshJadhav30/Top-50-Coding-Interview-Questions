#include<stdio.h>

int main(){
    //Initializing variables
    char str[100];
    int i;
    int freq[256] = {0};

    //Accepting inputs
    printf("Enter the Strings: ");
    gets(str);

    //Calculating frequency of each Character
    for(i = 0 ; str[i] !='\0';i++)
    {
        freq[str[i]]++;
    }

    printf("The non repeating characters are: ");
    for(i = 0; i < 256;i++)
    {
        if(freq[i] == 1)//Finding uniques characters and printing them
        {
            printf(" %c ", i);
        }
    }
    return 0;
}