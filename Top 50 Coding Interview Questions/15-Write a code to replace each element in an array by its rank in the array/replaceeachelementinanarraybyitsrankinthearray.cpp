#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = { 100,2,70,12,90};
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp[n];
    for(int i = 0; i < n; i++)
       temp[i] = arr[i];

    //sort the copied array
    sort(temp, temp + n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (temp[j] == arr[i])
            {
                arr[i] = j + 1;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++)
      cout << arr[i] <<" ";
}