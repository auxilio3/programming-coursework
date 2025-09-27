import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class FileReadingDemo {

	public static void main(String[] args) throws IOException {
		

		File file = new File("names.txt");
		Scanner fileReader = new Scanner(file);
		
		while(fileReader.hasNext()) {
			String name = fileReader.nextLine();
			System.out.println(name);
		}
		
		fileReader.close();

	}

}
