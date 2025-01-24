//fibonacci series using java

public class Forexample {
    public static void main(String[] args){
        int n = new java.util.Scanner(System.in).nextInt();
        int prev,cur,nxt;
        prev = -1 ; cur = 1;
        for(int i=1 ; i<=n ;i++){
            nxt = prev + cur;
            System.out.println(nxt+" ");
            prev = cur ;
            cur =  nxt;
        }
    }
}
