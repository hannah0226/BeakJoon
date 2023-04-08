import java.util.Arrays;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int[] score= new int[5];
		int ave=0, mid=0, sum=0;
		for(int i=0;i<5;i++)
		{
			score[i]=scan.nextInt();
			sum+=score[i];
		}
		Arrays.sort(score);
		ave=sum/5;
		mid=score[2];
		System.out.printf("%d\n%d",ave,mid);
	}

}