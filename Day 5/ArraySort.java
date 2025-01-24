import java.util.Arrays;

public class ArraySort {
    public static void main(String[] args) {
        int[] arr = {23,12,45,22,5};
        Arrays.sort(arr);
        System.out.println("Sorted Array:");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
