
public class Numerical_Diamond
{
	public static void main(String[] args) {
	    int N=4;
	    int A=1;
	    for(int i=N;i>=1;i--){
		    for(int j=1;j<i;j++){
		        System.out.print(" ");
		        
		    }
		    for(int j=1;j<=N-i+1;j++){
		        System.out.print(A++ +" ");
		    }
		    
		    System.out.println();
		}
		for(int i=1;i<=N;i++){
		    for(int j=1;j<i;j++){
		        System.out.print(" ");
		        
		    }
		    for(int j=1;j<=N-i+1;j++){
		        System.out.print(A++ + " ");
		    }
		    
		    System.out.println();
		}
		
	}
}
