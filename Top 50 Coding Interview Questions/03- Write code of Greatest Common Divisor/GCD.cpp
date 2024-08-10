//GCD of Two Numbers
#include<bits/stdc++.h>

using namespace std;
//Recursive function declaration
int findGCD(int ,int);
//main program
int main()
{
    int first,second;
    cout<<"Enter first Number: ";
    cin>>first;
    cout<<"Enter second Number: ";
    cin>>second;
    cout<<"GCD of "<<first<<" And "<<second <<" is "<<findGCD(first,second);
    return 0;
}
//body of the fuction
int findGCD(int first, int second){
    //0 is divisible by every number
    if(first == 0){
        return second;
    }
    if (second == 0){
        return first;
    }
    //both numbers are equal
    if(first == second){
        return first;
    }
    //first is greater
    else if(first > second){
        return findGCD(first - second,second);
    }
    return findGCD(first, second - first);
}