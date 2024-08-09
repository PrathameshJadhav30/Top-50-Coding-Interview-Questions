#include<bits/stdc++.h>

using namespace std;

int main(){
    int num;
    int a = 0, b = 1;
    //Taking value of Num from user
    cout<<"Enter a value of num: ";
    cin>>num;

    //Here we are printing 0th and 1st term
    cout << a << ","<< b << ", ";

    int nextTerm;

    //printing the rest of the terms here
    for(int i = 2; i < num;i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;

        cout << nextTerm << ", ";
    }
    return 0;
}