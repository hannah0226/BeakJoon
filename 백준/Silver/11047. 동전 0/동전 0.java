import java.util.Scanner;
import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int N=scan.nextInt();
		int K=scan.nextInt();
		int answer=0;
		ArrayList<Integer> values = new ArrayList<>();
		
		for(int i=0;i<N;i++) {
			values.add(scan.nextInt());
		}
		
		for(int i=N-1;i>=0;i--) {
			int v=values.get(i);
			if(K/v==0)
				continue;
			else {
				answer+=K/v;
				K=K%v;
			}
		}
		System.out.printf("%d",answer);
	}

}