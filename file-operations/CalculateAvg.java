import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class CalculateAvg {

	public static void main(String[] args) throws IOException {
		

		File file = new File("sales.txt");
		Scanner scanner = new Scanner(file);
		
		int counter = 0;
		double sum = 0;
		
		while(scanner.hasNextLine()) {
			sum += scanner.nextDouble();
			counter++;
		}
		
		double avg = sum/counter;
		
		System.out.println("The avg is " + avg);
		
		scanner.close();
	}

}
