import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class Q9 {

	public static void main(String[] args) throws IOException {
		

		FileWriter fw = new FileWriter("numbers.txt", true); //To avoid erasing a file 
		PrintWriter pw = new PrintWriter(fw); //Regular file writing
		
		pw.print(11);
		
		pw.close();
		fw.close();

	}

}
