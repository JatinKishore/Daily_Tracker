/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
public class Main
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
