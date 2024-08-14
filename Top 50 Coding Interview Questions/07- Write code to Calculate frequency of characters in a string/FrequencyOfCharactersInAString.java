import java.util.Scanner;

public class FrequencyOfCharactersInAString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String:");
        String str = sc.nextLine();
        int [] freq = new int[str.length()];
        int i,j;

        //Converts given string into charcter array
        char String[] = str.toCharArray();
        for(i = 0; i < str.length(); i++){
            freq[i] = 1;
            for(j = i+1; j < str.length(); j++){
                if(String[i] == String[j]){
                    freq[i]++;

                    //Set string[j] to 0 to avoid printing visited charcter
                    String[j] = '0';
                }
            }

        }
        //display the each charecter and their corresponding frequency
        System.out.println("Characters and their corresponding frequencies");
        for(i = 0; i <freq.length; i++){
            if(String[i] != ' ' && String[i] != '0')
                System.out.println(String[i] + "-" + freq[i]);
        }
        sc.close();
    }
    

}
