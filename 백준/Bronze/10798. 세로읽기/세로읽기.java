import java.util.Scanner;
import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		ArrayList<String> list = new ArrayList<String>();
		int len1=0, len2=0;
		
		//문자 입력받기
		for(int i=0;i<5;i++) {
			list.add(scanner.next());
		}
		
		//가장 긴 문자 길이 찾기
		for(int i=0;i<5;i++) {
			String word=list.get(i);
			if(word.length()>len1) {
				len1=word.length();
			}
		}
		
		//출력
		for(int i=0;i<len1;i++) {
			for(int j=0;j<5;j++) {
				String words=list.get(j);
				len2=words.length();
				if(i>=len2) continue;
				System.out.print(words.charAt(i));
			}
		}
	}

}