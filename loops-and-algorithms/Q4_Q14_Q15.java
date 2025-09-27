import java.util.ArrayList;

public class Q4_Q14_Q15 {

	//Method 4: Check if a string is present in the ArrayList
	public static boolean containsString(ArrayList<String> list, String target) {
		return list.contains(target);
	}
	
	//Method 14: Calculate average of integers in the ArrayList
	public static double findAverage(ArrayList<Integer> list) {
		if(list.isEmpty()) return 0;
		
		int sum = 0;
		for(int num : list) {
			sum += num;
		}
		return (double) sum / list.size();
			}
	
	//Method 15: Find the maximum value in the ArrayList
	public static int findMax(ArrayList<Integer> list) {
		
		
		int max = list.get(0);
		for(int num : list) {
			if (num > max) {
				max = num;
			}
		}
		return max;
	}
}
