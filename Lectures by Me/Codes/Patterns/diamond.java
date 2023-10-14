import java.util.*;
public class diamond
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int N=sc.nextInt();
	    for(int i=N;i>=1;i--){
		    for(int j=1;j<i;j++){
		        System.out.print(" ");
		        
		    }
		    for(int j=1;j<=N-i+1;j++){
		        System.out.print("* ");
		    }
		    
		    System.out.println();
		}
		for(int i=1;i<=N;i++){
		    for(int j=1;j<i;j++){
		        System.out.print(" ");
		        
		    }
		    for(int j=1;j<=N-i+1;j++){
		        System.out.print("* ");
		    }
		    
		    System.out.println();
		}
		
	}
}

/*
Numerical Diamond

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int N=sc.nextInt();
	    int k =1;
	    for(int i=N;i>=1;i--){
		    for(int j=1;j<i;j++){
		        System.out.print(" ");
		        
		    }
		    for(int j=1;j<=N-i+1;j++){
		        System.out.print(k++ +" ");
		    }
		    
		    System.out.println();
		}
		for(int i=1;i<=N;i++){
		    for(int j=1;j<i;j++){
		        System.out.print(" ");
		        
		    }
		    for(int j=1;j<=N-i+1;j++){
		        System.out.print(k++ +" ");
		    }
		    
		    System.out.println();
		}
		
	}
}

*/

/* Character Diamond
public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int N=sc.nextInt();
	    char k =65;
	    for(int i=N;i>=1;i--){
	        
		    for(int j=1;j<i;j++){
		        System.out.print(" ");
		        
		    }
		    for(int j=1;j<=N-i+1;j++){
		        if(k>90){
	            k=65;
	            }
		        System.out.print(k++ +" ");
		    }
		    
		    System.out.println();
		}
		for(int i=1;i<=N;i++){
		    
		    for(int j=1;j<i;j++){
		        System.out.print(" ");
		        
		    }
		    for(int j=1;j<=N-i+1;j++){
		        k=k>90?65:k;
		        System.out.print(k++ +" ");
		    }
		    
		    System.out.println();
		}
		
	}
}
*/




