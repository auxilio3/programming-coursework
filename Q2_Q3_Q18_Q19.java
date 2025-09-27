
public class Q2_Q3_Q18_Q19 {

	//Question 2: Sum of all elements in the array
	public static int sumArray (int[] arr) {
		int sum = 0;
		for(int num : arr) {
			sum += num;
		}
		return sum;
	}
	
	//Question 3: Count even numbers in the array
	public static int countEvens(int[] arr) {
		int count = 0;
		for(int num : arr) {
			if(num % 2 == 0) {
				count++;
			}
		}
		return count;
	}
	
	//Question 18: Find the index of a specific number in integer array
	public static int findIndex(int[] arr, int target) {
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] == target) {
				return i;
			}
 		}
		return -1; //Not found
	}
	
	//Question 19: Merge two arrays
	public static int[] mergeArrays(int[] arr1, int[] arr2) {
		int[] merged = new int[arr1.length + arr2.length];
		for(int i = 0; i < arr1.length; i++) {
			merged[i] = arr1[i];
		}
		return merged;
	}
	
	//Main method to test the above functions
	public static void main(String[] args) {
		int[] array1 = {2, 5, 8, 3, 10};
		int[] array2 = {7,1, 6};
		
		System.out.println("Sum: " + sumArray(array1));
		System.out.println("Even count: " + countEvens(array1));
		System.out.println("Index of 8: " + findIndex(array1, 8));
		System.out.println("Index of 99: " + findIndex(array1, 99));
		
		int[] merged = mergeArrays(array1, array2);
		System.out.println("Merged array: ");
		for(int num : merged) {
			System.out.print(num + " ");
		}
		System.out.println();
		}

}
