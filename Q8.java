import java.io.FileNotFoundException;
import java.io.PrintWriter;

public class Q8 {

	public static void main(String[] args) throws FileNotFoundException {
		PrintWriter pw = new PrintWriter("numbers.txt");
		
		for(int i = 1; i <= 10; i++) {
			if(i%2 != 0) //Odd number
				//you can also write  - if(i%2 == 1)
				pw.println(i);
		}
		pw.close();
	}

}
