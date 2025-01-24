import java.util.Scanner;
public class Array {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];

        System.out.print("Enter " + n + " elements: ");
        for(int i=0 ;i<n;i++){
            arr[i] = in.nextInt();
        }
        System.err.println("Array of elements are: ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println("\nUnique elements of the array are:");
        for (int i=0 ;i<n;i++){
            boolean found = false;
            for(int j=i-1;j>=0;j--){
                if(arr[i]==arr[j]){
                    found = true;
                    break;
                }
                if (!found){
                    System.out.print(arr[i]+" ");
                }
            }

        }
    }
}
