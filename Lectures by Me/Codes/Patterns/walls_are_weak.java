import java.util.*;
public class walls_are_weak
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		for(int i=1;i<=N;i++){
		    for(int j=1;j<=N;j++){
		        int top = i-1;
		        int bottom = N-i;
		        int left = j-1;
		        int right = N-j;
		        int minimumValue = minimumValue(top,bottom,left,right);
		        System.out.print(minimumValue+" ");
		    }
		    System.out.println();
		}
	}
	static int minimumValue(int top,int bottom,int left, int right){
	    int min1 = 0;
	    int min2 =0;
	    min1 = top<bottom?top:bottom;
	    min2 = left<right?left:right;
	    min1 = min1<min2?min1:min2;
	    return min1;
	}
}
