import java.util.Arrays;

public class find_non_repeating_elements {
   
    public static void countFreq(int arr[], int n){
        boolean visited[] = new boolean[n];
        Arrays.fill(visited, false);

        //traverse through array elements and 
        //count frequencies
        for( int i = 0; i < n; i++){
            //skip this element if already processed
            if(visited[i] == true)
              continue;

              //count frequency
        int count = 1;
        for(int j = i+ 1; j < n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        if(count == 1)
           System.out.println(arr[i]);
        }
    }
    //Driver code
    public static void main(String[] args) {
       int arr[] = new int[] {10, 20, 30, 40, 20, 50, 10};
       int n = arr.length;
       countFreq(arr, n );
}
}
