#include<bits/stdc++.h>

using namespace std;
//main program
int main()
{
    int div, num , sum = 0;
    cout<<"Enter the number to check : ";
    //user input
    cin>> num;
    //loop to find the sum of divisors
    for (int i = 1; i < num; i++){
        div = num % i;
        if (div == 0)
           sum += i;
    }
    //Checking for perfect number
    if (sum == num)
       cout<< num <<" is a perfect number";
    else
       cout<< num <<" is not a perfect number ";

    return 0;

}