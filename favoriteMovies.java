
public class favoriteMovies {

	public static void main(String[] args) {
		
		//Adding array of my favorite movies
		String[] favoriteMovies = {"Poor Things", "Past Lives", "Interstellar", "Her"};
	
		//Defining movie to search for
		String movieToFind = "Past Lives";
		
		//Testing the findMovie method
		
		int index = findMovie(favoriteMovies, movieToFind);
		
		if(index != -1) {
			System.out.println("Found at index: " + index);
		} else {
			System.out.println("Not found");
		}
 	}
	
	public static int findMovie(String[] movies, String title) {
		for(int i = 0; i < movies.length; i++) {
			if(movies[i].equals(title)) {
				return i;
			}
		}
		
		return -1;
	}
}
