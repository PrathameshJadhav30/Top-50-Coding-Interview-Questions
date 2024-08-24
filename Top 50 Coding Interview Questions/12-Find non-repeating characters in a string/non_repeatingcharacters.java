import java.util.Scanner;

public class non_repeatingcharacters{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the string: ");

        String str = sc.next();
        int freq[] = new int[256];

        //calculating frequency of each character
        for(int i = 0; i < str.length(); i++)
           freq[str.charAt(i)]++;

        System.out.println("The non repeating charcters are: ");
        for(int i = 0; i < 256; i++)
           if(freq[i] == 1) //Finding the charcter whose frequency is 1
              System.out.println((char) i + " ");
        sc.close();
    }
}