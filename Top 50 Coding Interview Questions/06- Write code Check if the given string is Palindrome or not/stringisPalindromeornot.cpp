#include<bits/stdc++.h>

using namespace std;

int main()
{
    //Initializing variable
    char str[100];
    int i, length = 0, flag = 0;

    //Accepting input
    cout<<"Enter the string : "<<endl;
    gets(str);
    length = strlen(str);

    //Initializing for loop
    for(i = 0;i < length/2;i++)
    {
        //Checking if string is palindrome or not
        if(str[i]==str[length-i-1])
        flag++;

    }
    //printing result
    if(flag == i)
       cout<<"String entered is palindrome";
    else
        cout<<"String entered is not palindrome";

    return 0;
}