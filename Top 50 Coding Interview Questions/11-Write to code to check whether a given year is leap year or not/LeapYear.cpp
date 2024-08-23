#include<bits/stdc++.h>

using namespace std;
int main(){
    int year;

    cout<< "Enter a Year: "<<endl;
    cin >> year;

    if(year % 400 == 0)
      cout << year << " is a Leap Year";

    else if (year % 4 == 0 && year % 100 != 0)
       cout << year << " is a leap year";

    else
       cout << year <<" is not a leap year";

    return 0;
}