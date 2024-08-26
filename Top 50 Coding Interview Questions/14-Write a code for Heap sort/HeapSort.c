#include<stdio.h> // including library files 
int temp;

void heapify(int arr[], int size, int i)//declaring functions 
{ 
int max = i; 
int left = 2*i + 1; 
int right = 2*i + 2;

if (left < size && arr[left] >arr[max]) 
max= left;

if (right < size && arr[right] > arr[max]) 
max= right;

if (max!= i) 
{ 
// performing sorting logic by using temporary variable 
temp = arr[i]; 
arr[i]= arr[max]; 
arr[max] = temp; 
heapify(arr, size, max); 
} 
}

void heapSort(int arr[], int size)// providing definition to heap sort
{ 
int i; 
for (i = size / 2 - 1; i >= 0; i--) 
heapify(arr, size, i); 
for (i=size-1; i>=0; i--) 
{ 
// swaping logic
temp = arr[0]; 
arr[0]= arr[i]; 
arr[i] = temp; 
heapify(arr, i, 0); 
} 
}

void main() // defining main() 
{ 
int arr[] = {58, 134, 3, 67, 32, 89, 15, 10,78, 9};
// array initializing with their elements. 
int i; 
int size = sizeof(arr)/sizeof(arr[0]);

heapSort(arr, size);

printf("printing sorted elements\n"); // printing the sorted array 
for (i=0; i<size; ++i) 
printf("%d\n",arr[i]); 
}