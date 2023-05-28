import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		String[] arr = new String[T];
		input.nextLine();
		
		for(int i=0;i<arr.length;i++) {
			arr[i]=input.nextLine();
		}
		
		for(int i=0;i<arr.length;i++) {
			System.out.print(arr[i].charAt(0));
			System.out.println(arr[i].charAt(arr[i].length()-1));
		}
	}

}