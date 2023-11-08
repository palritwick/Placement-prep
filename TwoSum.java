import java.util.*;
public class TwoSum{
    static boolean twoSum(int arr[], int size, int k){
        Set<Integer> s = new HashSet<>();
        for (int i = 0; i < size; i++) {
            int temp = k -arr[i];
            // in c++
            // if(s.find(temp) != s.end){
            //     return true;
            // } 
            // s.insert(arr[i]);
        }

        return false;
    }
    public static void main(String[] args) {
        int arr[] = {7,10,3,5,45};
        int k = 10;
        int size = arr.length;
        twoSum(arr,size,k);
    }
}