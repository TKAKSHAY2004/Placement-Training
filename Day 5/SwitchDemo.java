

public class SwitchDemo {
    public static void main(String[] args) {
        
        int day = new java.util.Scanner(System.in).nextInt();

        switch (day) {
            case 1, 7 -> System.out.println("weekend");
            case 2, 3, 4, 5, 6 -> System.out.println("Weekday");
            default -> System.out.println("Invalid day");
        }
    }
}


//other method

// System.out.println(switch (day)) {
//     case 1, 7 -> "weekend";
//     case 2, 3, 4, 5, 6 -> "Weekday";
//     default -> "Invalid day";
// }

//python is older than java
//java was introduced in 1995
//java was first introduced by sun microsystems
//python was introduced in 1991
//python was first introduced by guido van rossum