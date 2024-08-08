#include<stdio.h>

int main(){
    //Initialization of variables where rev='reverse=0'
    int number , rev = 0, store,left;

    //input a numbers for user
    printf("Enter the Numbers\n");
    scanf("%d",&number);

    store = number;
    //use this loop for check true condition
    while(number>0){
        //left is for remider are left
        left = number % 10;

        //for reverse of no.
        rev = rev *10 + left;

        //number /=10;
        number = number / 10;
    }
    //to show the user value
    printf("Given number = %d\n",store);

    //after reverse show numbers
    printf("Its reverse is = %d\n", rev);

    return 0;
}