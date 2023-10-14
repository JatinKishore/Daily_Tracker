import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
 		int num = 1;
		for(int i=1;i<=N;i++){
		    for(int j=1;j<=i;j++){//triangle
		        System.out.print( num++ +" "); 
		           
		    }
		    System.out.println();
		    
		}
	}
}
