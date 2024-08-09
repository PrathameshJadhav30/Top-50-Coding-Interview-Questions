#include<stdio.h>

int main(){
    int n = 4;
    int a = 0, b =1;
//Taking value of n from user
    printf("Enter a value of n: ");
    scanf("%d",&n);

    //printing the 0th  term
    printf("%d , ", a );

    int nextTerm;

    //printing the rest of the term here
    for(int i = 2;i < n; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;

        printf("%d , ",nextTerm);
    }
    return 0;
}