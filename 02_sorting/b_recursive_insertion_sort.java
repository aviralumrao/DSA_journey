import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.io.IOException;
import java.util.Scanner;

public class b_recursive_insertion_sort {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("input.txt"));
        PrintWriter out = new PrintWriter(new FileWriter("output.txt"));

        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int[] sortedArr = insertionSort(arr, n);

        for (int i = 0; i < n; i++) {
            out.print(sortedArr[i] + " ");
        }

        out.close();
        sc.close();
    }

    static int[] insertionSort(int[] arr, int n) {
        if (n <= 1) {
            return arr;
        }

        insertionSort(arr, n - 1);

        int last = arr[n - 1];
        int j = n - 2;

        while (j >= 0 && arr[j] > last) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = last;

        return arr;
    }
}