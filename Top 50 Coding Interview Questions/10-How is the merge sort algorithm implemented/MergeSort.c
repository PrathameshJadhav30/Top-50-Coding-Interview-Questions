#include<stdio.h>

void mergesort(int[], int, int);
void merge(int[], int, int, int);

void display(int arr[],int size){
    int i;
    for(i = 0;i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main(){
    int a[10]={
        11,6,8,9,2,3,54,67,89,20
    };
    int i;
    int size = sizeof(a)/sizeof(a[0]);
    display(a,size);


    mergesort(a,0,size-1);
    display(a,size);
}

void mergesort(int a[],int left, int right){
    int mid;
    if(left < right){
        //can also use mid = left +(right - left)/2
        //this can avoid data type overflow
        mid = (left + right)/2;

        //recursive calls to sor first half and second alf subarray
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}

void merge(int arr[], int left, int mid, int right){
    int i,j,k;
    int n1 = mid -left +1;
    int n2 = right - mid;

    //reate temp array to stor left and right sub arrays
    int L[n1], R[n2];

    //copying data to temp arrays L[] and R[]
    for(i = 0; i <n1;i++)
      L[i] = arr[left + i];
    for(j = 0; j <n2 ; j++)
      R[j] = arr[mid +1 +j];

    //here we merge the temp arrays back into arr[l..r]
    i = 0; //starting index of L[i]
    j = 0;//Starting index of R[i]
    k = left ;//starting index of merged subarray

    while(i < n1 && j < n2){
        //place the smaller item at arr[k] pos
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
     //copy the remaining elements of L[], if any
     while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
     }
     //copy the remaining elements of R[], if any
     while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
     }
}