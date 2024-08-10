//The code used a recursive function to return gcd of p and q
int gcd(int p, int q)
{

    //Checking divisibility by 0
    if (p == 0)
       return q;

    if (q == 0)
       return p;

    //base case
    if (p == q)
       return p;

    //p is greater
    if (p > q)
       return gcd(p-q , q);

    else
       return gcd(p, q-p);
}

//Driver program to test above function
int main(){
    int p =98, q = 56;
    printf("GCD of %d and %d is %d ",p,q,gcd(p,q));
    return 0;
}