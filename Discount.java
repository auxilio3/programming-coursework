package week9;

public class Discount {
	
	public static double twentyPercentDiscount(double price) {
		double newPrice = price*.80;
		return newPrice;
	}
	
	public static String merger(String s1, String s2) {
		String firstHalf = s1.substring(0, s1.length()/2);
		String secondHalf = s2.substring(s2.length()/2);
		
		return firstHalf + secondHalf;
	}

	public static void main(String[] args) {
		
		double ticketPrice = 83.75;
		System.out.println("The price before discount is " + ticketPrice);
		double afterDiscount = twentyPercentDiscount(ticketPrice);
		System.out.println("The price after discount is " + afterDiscount);
		
		double employeeDiscount = -10;
		
		double finalPrice = afterDiscount + employeeDiscount;
		
		System.out.println("The final price is " + finalPrice);
		System.out.println(merger("abcdef", "lmnopr"));
		

	}

}
