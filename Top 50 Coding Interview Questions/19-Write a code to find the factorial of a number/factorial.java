import java.util.Scanner;

public class factorial{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();

        if(num >= 0)
        {
            System.out.println(num + " Factorial: " + getFact(num));
        }
        else
            System.out.println("Negative Number: No Factorial");

        sc.close();
    }

    private static int getFact(int num) {

        if(num == 1 || num == 0)
            return 1;

        return num * getFact(num-1);
    }
}
    
