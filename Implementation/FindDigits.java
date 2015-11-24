import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();
        long N;
        while((T--) > 0){
            int count=0;
            String input = sc.nextLine();
            N = Long.parseLong(input);
            for(int i=0; i<input.length(); i++){
                if(input.charAt(i) != '0' && (N%Long.parseLong(String.valueOf(input.charAt(i)))) == 0){
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
