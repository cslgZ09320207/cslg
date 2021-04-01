import java.util.Scanner;
public class ace {
	public static void main(String[] args)throws Exception {
		int a,b,k;
		Scanner reader= new Scanner(System.in);
		a=reader.nextInt();
		b=reader.nextInt();

		do {
			k=a%b;
			a=b;
			b=k;
		}while(k!=0);
		
		System.out.print(a);
	}
}
