import java.util.Scanner;

public class Fibonacci_series{
    public static void main(String[] args) {
        int a = 0, b = 1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value of Num:");
        int num = sc.nextInt();

        //here we are printing 0th and 1st term
        System.out.print(a + ", " + b + ",");
        
        int nextTerm;

        //printing the rest of the terms here
        for(int i = 2; i < num ; i++){
            nextTerm = a + b;
            a = b;
            b = nextTerm;

            System.out.print(nextTerm + ",");

        }

    }

}