public class special_array {
    public static void main(String args[]) {

        int[] arr = { 1, 2, 3, 4, 5, 6, 7, 1, 2, 3 };
        boolean asc = false;
        boolean dsc = false;
        int n = arr.length;
        int x = 0;
        int y = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                x = i;
                break;
            }
            if (i == n - 1) {
                if (arr[i] > arr[i - 1])
                    asc = true;
            }
        }
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                y = i;
                break;
            }
            if (i == n - 1) {
                if (arr[i] < arr[i - 1])
                    dsc = true;
            }
        }
        if (asc || dsc)
            System.out.println("-1");
        else {
            if (x > y)
                System.out.println("asc " + (x - 1));
            else
                System.out.println("dsc " + (y - 1));
        }

    }
}