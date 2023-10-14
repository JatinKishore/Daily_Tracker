public class full_triangle
{
	public static void main(String[] args) {
	    int N=4;
		for(int i=N;i>=1;i--){
		    for(int j=1;j<i;j++){
		        System.out.print(" ");  // Space Pattern
		        
		    }
		    for(int j=1;j<=N-i+1;j++){
		        System.out.print("* "); // Star Pattern
		    }
		    
		    System.out.println();
		}
		
	}
}
