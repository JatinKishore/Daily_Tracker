public class corner_to_corner_triangle
{
	public static void main(String[] args) {
		int N = 5;
		int q =N;
		int k = N;
		int I =1;
		for(int i=1;i<=N;i++){
		    int L = k;
		    int u=I;
		    for(int j=1;j<=i;j++){
		        if(j==1){
		            System.out.print(I+" ");
		        }
		        else{
		            System.out.print((u-L)+" ");
		            u=u-L;
		            L++;
		        }
		    }
		    I= I+q;
		    q--;
		    k--;
		    System.out.println();
		}
	}
}
