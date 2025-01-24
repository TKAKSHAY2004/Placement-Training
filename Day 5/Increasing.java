import java.util.Scanner;
public class Increasing{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int y = in.nextInt();
        int z = in.nextInt();    

        int max = Math.max(x, Math.max(y, z));
        int min = Math.min(x, Math.min(y, z));
        int mid = (x + y + z) - (max + min);
        System.err.println("The numbers in increasing order are: " + min + " " + mid + " " + max);
        
        in.close();
    }
}
