import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Hackerrank {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner sc = new Scanner(System.in);
        int testcase=sc.nextInt();
        sc.nextLine();
        String[] input=new String[testcase];
        int i;
        for(i=0;i<testcase;i++){
            input[i]=sc.nextLine();
        }
        for(i=0;i<testcase;i++){
            String even,odd;
            odd=even="";
            char[] array=input[i].toCharArray();
            int n=input[i].length();
            for(int j=0;j<n;j++){
                if(j%2==0){
                    even+=array[j];
                }
                else{
                    odd+=array[j];
                }
            }
            System.out.println(even+" "+odd);
        }
    }
}
