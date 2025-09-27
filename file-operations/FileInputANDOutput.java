import java.io.FileNotFoundException;
import java.io.PrintWriter;

public class FileInputANDOutput {

	public static void main(String[] args) throws FileNotFoundException {
		
		PrintWriter outputFile = new PrintWriter("names.txt");
		
		outputFile.println("Matthew");
		outputFile.println("Alexander");
		outputFile.println("Sam");
		
		outputFile.close();

	}

}
