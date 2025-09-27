
public class Q17 {

	public static void main(String[] args) {
		//Original array
		int[] original = {10, 20, 30, 40, 50};
		
		//Create a new array of the same length
		int[] copy = new int[original.length];
		
		//Copy elements using a loop
		for(int i = 0; i < original.length; i++) {
			copy[i] = original[i];
		}

		//Display the copied array
		System.out.print("Copied array: ");
		for(int value : copy) {
			System.out.print(value + " ");
		}
		System.out.println();
	}

}
