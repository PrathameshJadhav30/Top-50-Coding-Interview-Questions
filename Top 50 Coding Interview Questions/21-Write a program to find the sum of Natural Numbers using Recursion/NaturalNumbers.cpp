#include<bits/stdc++.h>
using namespace std;

int getsum(int n)
{
    if(n == 0)
        return n;

    return n + getsum(n-1);
}

int main()
{
    int n;
    cout<< "  enter a  number :";
    cin>>n;

    int sum = getsum(n);

    cout<< sum;

    return 0;
}