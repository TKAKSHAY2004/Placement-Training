
// import java.util.Scanner;

// class SumofDigits(int num){
//     int sum=0;
//     while(num>0){
//         sum = sum + num%10;
//         num = num/10;
//             if (sum / 10 != 0 ){
//             sum = SumofDigits(sum);
//         }
//     }
//     return sum;
// }

// public class main{
//     public static void main(String[] args){

//         Scanner scanner = new Scanner(System.in);
//         int num = scanner.nextInt();
//         System.err.println("sum of digits is: "+ sum);
//     }
// }


import java.util.Scanner;

public class SumofDigits {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        int sum = sumOfDigits(num);
        System.out.println("Sum of digits is: " + sum);
        scanner.close();
    }

    public static int sumOfDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum = sum + num % 10;
            num = num / 10;
        }
        if (sum / 10 != 0) {
            sum = sumOfDigits(sum);
        }
        return sum;
    }
}
