import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class SalesFileWriting {

	public static void main(String[] args) throws FileNotFoundException {
		Scanner scanner = new Scanner(System.in);
		PrintWriter outputFile = new PrintWriter("sales.txt");
		
		for (int i = 1; i <= 7; i++) {
			System.out.println("Enter the sales info for day " + i);
			double sales = scanner.nextDouble();
			outputFile.println(sales);
		}
		
		
		outputFile.close();
		
		

	}

}
