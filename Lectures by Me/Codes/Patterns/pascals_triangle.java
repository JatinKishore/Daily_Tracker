import java.util.*;
public class pascals_triangle
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		for(int i=N;i>0;i--){ // full triangle printing pattern
		    for(int j=0;j<i;j++){    
		        System.out.print(" ");
		    }
		    for(int j=0;j<N-i+1;j++){
		        System.out.print(binomialCoefficient(N-i,j)+" "); 
		    }
		    System.out.println();
		}
	}
	static int binomialCoefficient(int n,int r){ // function to find the binomial coefficient
	    
	    int Nfactorial =1;
	    int Rfactorial =1;
	    int N_Rfacotiral =1;
	    int n_r = n-r;
	    
	    while(n!=0){
	        Nfactorial=Nfactorial*n;
	        n--;
	    }
	    while(r!=0){
	        Rfactorial = Rfactorial*r;
	        r--;
	    }
	    while(n_r!=0){
	        N_Rfacotiral = N_Rfacotiral*n_r;
	        n_r--;
	    }
	    int result = Nfactorial/(Rfactorial*N_Rfacotiral);
	    return result;
	}
}
