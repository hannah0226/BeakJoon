import java.util.Scanner;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int paperNumber,answer=0;
		paperNumber=scanner.nextInt();
		int[][] location=new int[paperNumber][2];
		boolean[][] arr = new boolean[100][100];
		for(boolean a[]:arr)
			Arrays.fill(a,true);

		for(int i=0;i<paperNumber;i++) {
			location[i][0]=scanner.nextInt();
			location[i][1]=scanner.nextInt();
		}
		
		for(int i=0;i<paperNumber;i++)
			for(int j=location[i][0];j<location[i][0]+10;j++)
				for(int k=location[i][1];k<location[i][1]+10;k++)
					arr[j][k]=false;
		
		for(int i=0;i<100;i++) 
			for(int j=0;j<100;j++)
				if(arr[i][j]==false)
					answer++;
		System.out.println(answer);
	}

}