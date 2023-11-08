import java.util.*;
public class Subsequence{
    static boolean subsequences(String t, String s){
        int curr = 0;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i) == t.charAt(i)){
                curr++;
            }
        }
        if(curr == t.length())
            return true;
        return false;
    }
    public static void main(String[] args) {
        String t, s;
        Scanner sc = new Scanner(System.in);
        t = sc.nextLine();
        s = sc.nextLine();

        boolean x = subsequences(t,s);
        System.out.println(x);
    }
}