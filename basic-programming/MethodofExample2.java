package week9;

public class MethodofExample2 {

	public static void main(String[] args) {
	
		calculateSum(5);
		calculateSum(7);
		calculateSum(9);
	}
	
	public static void calculateSum(int num) {
		
		int sum = 0;
		for(int i=1; i<=num; i++) {
			sum +=i;
		}
		
		System.out.println(sum);
	}
}
