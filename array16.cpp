import java.util.*;

public class ArraySecondLargestSmallest {
    
    public static int secondLarge(int[] arr, int n) {
        if (n == 0 || n == 1) {
            System.out.println(-1 + " " + -1);
            return -1;
        }
        
        int large = arr[0];
        int slarge = Integer.MIN_VALUE;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > large) {
                slarge = large;
                large = arr[i];
            } else if (arr[i] != large && arr[i] > slarge) {
                slarge = arr[i];
            }
        }
        return slarge;
    }
    
    public static int secondSmall(int[] arr, int n) {
        int small = arr[0];
        int ssmall = Integer.MAX_VALUE;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] < small) {
                ssmall = small;
                small = arr[i];
            } else if (arr[i] != small && arr[i] < ssmall) {
                ssmall = arr[i];
            }
        }
        return ssmall;
    }
    
    public static void main(String[] args) {
        int[] arr = {7, 4, 2, 8, 9, 10};
        int n = arr.length;
        
        int slarge = secondLarge(arr, n);
        int ssmall = secondSmall(arr, n);
        
        System.out.println("The second largest value is: " + slarge);
        System.out.println("The second smallest value is: " + ssmall);
    }
}
