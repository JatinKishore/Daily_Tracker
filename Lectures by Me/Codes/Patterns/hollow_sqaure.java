public class hollow_sqaure
{
	public static void main(String[] args) {
	    int N = 4;
		for(int i=1;i<=N;i++){
		    for(int j=1;j<=N;j++){
		        if(i==1 || i==N){
		            System.out.print("* ");
		        }
		        else if(j==1 || j==N){
		             System.out.print("* ");
		        }
		        else{
		            System.out.print("  ");
		        }
		        
		    }
		    System.out.println();
		}
	}
}
