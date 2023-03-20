import java.util.Scanner;
import java.util.ArrayList;
public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int[][] values=new int[3][4];
		ArrayList<String> answer=new ArrayList<String>();
		
		for(int i=0;i<3;i++) {
			for(int j=0;j<4;j++) {
				values[i][j]=scan.nextInt();
			}
		}
		
		for(int i=0;i<3;i++) {
			int one=0;
			for(int j=0;j<4;j++) {
				if(values[i][j]==1)
					one++;
			}
			if(one==0)
				answer.add("D");
			else if(one==1)
				answer.add("C");
			else if(one==2)
				answer.add("B");
			else if(one==3)
				answer.add("A");
			else
				answer.add("E");
		}
		
		for(int i=0;i<3;i++) {
			System.out.println(answer.get(i));
		}

	}

}