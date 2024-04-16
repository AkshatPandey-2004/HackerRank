import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;



public class Solution {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int temp;
        int count=0;
        int[] nums=new int[n];
        for(int i=0;i<n;i++){
            nums[i]=sc.nextInt();
        }
        for(int i=0;i<=n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    count++;
                }
            }
        }
        
        System.out.printf("Array is sorted in %d swaps.\n",count);
        System.out.printf("First Element: %d\n",nums[0]);
        System.out.printf("Last Element: %d\n",nums[n-1]);
    }
}
