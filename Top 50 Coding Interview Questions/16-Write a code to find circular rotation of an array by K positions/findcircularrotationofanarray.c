#include<stdio.h>
int main()
{
    int size;
    printf("Size of Array: ");
    scanf("%d ",&size);
    int arr[size];
    printf("Enter the Elements ");
    for(int a = 0; a < size; a++)
    {
        
        scanf("%d",&arr[a]);
    }
    
int n;
printf("Enter the index from where you want your array to rotate ");
scanf("%d", &n);
printf("Array: \n");
for( int a = 0; a < size; a++){
    printf("%d ",arr[a]);
}
for(int a =0; a < n; a++){
    int b, temp;
    temp = arr[size - 1];
     for(b = size-1; b > 0; b--)
     {
        arr[b] = arr[b - 1];
     }
     arr[0] = temp;
}
printf("\n");
printf("New Array:\n");
for(int a = 0; a < size; a++){
    printf("%d ", arr[a]);
}
return 0;
}