import java.util.*;
public class inverted_hollow_triangle
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		
		for(int i=1;i<=N;i++){
		    for(int j=2;j<=i;j++){
                System.out.print(" "); // inverted Triangle
		    }   
		    for(int j=1;j<=N-i+1;j++){
		        if(N-i+1==N){
		            System.out.print("* ");
		            
		        }
		        else if(j==1 || j==N-i+1){
		            System.out.print("* ");  //Hollow Triangle
		        }
		        else{
		            System.out.print("  ");
		        }
		    }
		    System.out.println();
		}
	}
}
