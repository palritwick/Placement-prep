/*
Before the outbreak of corona virus to the world, a meeting happened in Wuhan.A person who attended that meeting had COVID-19 and no one in the room knew about it! So everyone started shaking hands with everyone else in the room as a gesture of respect and after meeting unfortunately every one got infected!  Given the fact that any two persons shake hand exactly once, Can you tell the total count of handshakes happened in that meeting?
Input Format :
The first Line contains the number of test cases T, T Lines follow.
Each Line then contains an integer N, the total number of people attended that meeting.
Output Format :
Print the number of handshakes for each test-case in a new line.
Constraints :
1 <= T <= 1000
0 < N < 106
Sample Input:
2
1
2
Output: 
0 (If only one person then 0 no of handshakes happen)
1 (If two persons were there then only 1 handshakes happen)
*/

import java.util.Scanner;

public class handshakes{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); // no of test cases
        sc.nextLine();
        int total = 0;
        while (t!=0) {
            int n = sc.nextInt();
            System.out.println("Total person presents in the meeting is "+n);
            n--;
            total = n*(n+1)/2;
            System.out.println("Total handshakes = "+total);
            t--;
        }
    }
}