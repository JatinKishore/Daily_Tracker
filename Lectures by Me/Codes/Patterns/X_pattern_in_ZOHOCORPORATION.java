*/
import java.util.*;
public class X_pattern_in_ZOHOCORPORATION
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = "ZOHOCORPORATION";
		int n = str.length();
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        if(j==i || j==n-i-1){
		            System.out.print(str.charAt(j));
		        }
		        else{
		            System.out.print(" ");
		        }
		    }
		    System.out.println();
		}
	}
}
