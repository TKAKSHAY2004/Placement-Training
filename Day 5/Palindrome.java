import java.util.Scanner;
public class Palindrome {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);

        int num = in.nextInt();
        int originalNum = num;
        int rev = 0;

        while(num>0){
            rev = (rev*10) + num%10;
            num = num/10;
        }

        if(rev==originalNum){
            System.out.println("Palindrome");
        }else{
            System.out.println("Not Palindrome");
        }
    }
}
