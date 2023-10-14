import java.util.*;
public class top_to_bottom_triangle
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		for(int i=1;i<=N;i++){
		    int k=i;
		    int m = N-1;
		    for(int j=1;j<=i;j++){
		        if(j==1){
		            System.out.print(i+" ");
		        }
		        else{
		            k=k+m;
		            System.out.print(k+" ");
		            m--;
		        }
		    }
		    System.out.println();
		}
	}
}
