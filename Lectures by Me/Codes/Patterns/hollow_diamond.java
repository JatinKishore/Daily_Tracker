import java.util.*;
public class hollow_diamond
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		
		// HOLLOW TRIANGLE
		for(int i=N;i>=1;i--){
		    for(int j=2;j<=i;j++){
                System.out.print(" "); // inverted Triangle
		    }   
		    for(int j=1;j<=N-i+1;j++){
		        
		        if(j==1 || j==N-i+1){
		            System.out.print("* ");  //Hollow Triangle
		        }
		        else{
		            System.out.print("  ");
		        }
		    }
		    System.out.println();
		}
		
		//HOLLOW INVERTED TRIANGLE
		for(int i=2;i<=N;i++){
		    for(int j=2;j<=i;j++){
                System.out.print(" "); // inverted Triangle
		    }   
		    for(int j=1;j<=N-i+1;j++){
		        
		        if(j==1 || j==N-i+1){
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
