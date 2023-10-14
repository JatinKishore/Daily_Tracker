import java.util.*;
public class rhombus
{
	public static void main(String[] args) {
	    Scanner sc =new Scanner(System.in);
	    int N = sc.nextInt();//height
	    int M = sc.nextInt();//width
	    for(int i=1;i<=N;i++){//row
	        for(int j=1;j<=i-1;j++){
	            System.out.print(" "); //triangle
	        }
	        for(int j=1;j<=M;j++){
	            System.out.print("* ");//rectangle
	            
	        }
	        System.out.println();
	    }
	}
}
