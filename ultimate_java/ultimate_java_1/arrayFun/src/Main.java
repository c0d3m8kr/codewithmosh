import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        //System.out.println("Hello world!");
        // Array Fun
        int[] numbers = new int[3];
        int[] numbers2 = {40, 50, 60};
        numbers[0] = 10;
        numbers[1] = 20;
        numbers[2] = 30;
        System.out.println(numbers);
        System.out.println(Arrays.toString(numbers));
        System.out.println(Arrays.toString((numbers2)));
        System.out.println(numbers.length);
        System.out.println(numbers2.length);
    }
}