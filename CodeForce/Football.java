import java.util.Scanner;

public class Football {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String s1 = "0000000";
        String s2 = "1111111";
        if (s.contains(s1) || s.contains(s2))
            System.out.println("YES");
        else
            System.out.println("NO");

    }
}