// Write a program to calculate compound interest.
// import java.util.Scanner;

// class CompoundInterest {
//     public static void main(String args[]) {
//         Scanner scanner = new Scanner(System.in);

//         System.out.print("Enter the principal amount: ");
//         long principal = scanner.nextLong();

//         System.out.print("Enter the rate of interest: ");
//         double rate = scanner.nextDouble();

//         System.out.print("Enter the time (in years): ");
//         double time = scanner.nextDouble();

//         double amount = principal * Math.pow((1 + rate / 100), time);
//         double compoundInterest = amount - principal;

//         System.out.println("Compound Interest: " + compoundInterest);
//         System.out.println("Total Amount: " + amount);

//         scanner.close();
//     }
// }


//class name should be in Uppercase. For expamle CpmpoundInterest
//Methos name shoud be in lowercase. For example calculateInterest
//Variable name should be in lowercase. For example principalAmount
//Constant name should be in uppercase. For example RATE_OF_INTEREST
//Package name should be in lowercase. For example day5
class CompoundInterest{
    public static void main(String args[]){
    

        long principal = Long.parseLong(args[0]);
        double rate = Double.parseDouble(args[1]);
        double time = Double.parseDouble(args[2]);

        double amount = principal * Math.pow((1 + rate / 100), time);

        double compoundInterest = amount - principal;

        System.out.printf("Amount: %.2f\n", amount);

        System.out.printf("Compound Interest: %.2f\n", compoundInterest);
    }
}