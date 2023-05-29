import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int N = input.nextInt();
		int M = input.nextInt();
		int i,j,x,y,answer;
		int[][] arr = new int[N][M];
		
		for(int a=0;a<N;a++)
			for(int b=0;b<M;b++)
				arr[a][b] = input.nextInt();
		
		int K = input.nextInt();
		for(int a=0;a<K;a++) {
			i = input.nextInt();
			j = input.nextInt();
			x = input.nextInt();
			y = input.nextInt();
			answer = 0;
			for(int b=i-1;b<x;b++)
				for(int c=j-1;c<y;c++)
					answer+=arr[b][c];
			System.out.println(answer);
		}

	}

}