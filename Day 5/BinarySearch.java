import java.util.Arrays;
public class BinarySearch {
    public static void main(String[] args) {
        int arr[] = {80,10,70,50,60,30,84,14,2};
        int key = new java.util.Scanner(System.in).nextInt();
        Arrays.sort(arr);
        int lb,ub,mid;
        lb=0;ub=arr.length-1;

        mid = (ub+lb)/2;

        if(arr[mid]==key){
            System.out.println("Found at index: "+mid);
            System.exit(0);
        }
        else if (arr[mid]>key){
            ub = mid - 1;
        }else {
            lb = mid + 1;
        }
    }
    
}
