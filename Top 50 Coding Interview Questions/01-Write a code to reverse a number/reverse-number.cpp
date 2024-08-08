//Reverse of a number
#include<bits/stdc++.h>

using namespace std;
//main program
int main(){
    //variables initialization
    int num,reverse = 0,rem;
    cout<<"Enter a number: ";
    //user input
    cin>>num;
    //loop to find reverse number
    do{
        rem = num%10;
        reverse = reverse * 10 +rem;
        num/=10;
    }while(num != 0);
    //output
    cout<<"Reversed number: "<<reverse;
    return 0;
}