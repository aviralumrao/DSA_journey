
// Given an array of N integers, write a program to implement the Recursive Bubble Sort algorithm.
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.io.IOException;
import java.util.Scanner;

public class a_recursieve_bubble_sort {

    public static int[] bubbleSort(int[] arr, int n) {
        if (n == 1) {
            return arr;
        }

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        return bubbleSort(arr, n - 1);
    }

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("input.txt"));
        PrintWriter out = new PrintWriter(new FileWriter("output.txt"));

        if (!sc.hasNextInt()) {
            sc.close();
            out.close();
            return;
        }

        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int[] sortedArr = bubbleSort(arr, n);

        for (int i = 0; i < n; i++) {
            out.print(sortedArr[i] + (i < n - 1 ? " " : ""));
        }

        out.close();
        sc.close();
    }
}