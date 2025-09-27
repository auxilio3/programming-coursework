
public class DivisibleNumbers {

	public static void main(String[] args) {
		
		//Loops through numbers 1 to 100
		for (int i = 1; i <= 100; i++) {
			if (i == 50) {
				break; //Breaks the loop if number reaches 50
			}
			
			
			if (i % 7 ==0 ) {
				continue;
			}
			
			if (i % 3 == 0 && i % 5 == 0) {
				System.out.println("FizzBuzz");
			} else if (i % 3 == 0) {
				System.out.println("Fizz");
			} else if (i % 5 == 0) {
				System.out.println("Buzz");
			} else {
				System.out.println(i);
			}
			
		}

	}

}
