
public class CourseDemo {

	public static void main(String[] args) {
		Instructor myInstructor = new Instructor("Chris", "Jones", "GL484"); //Create Instructor object
		
		TextBook myTextBook = new TextBook("Starting out with Java", "Gaddis", "Pearson"); //Create TextBook object
		
		//Create Course object
		Course myCourse = new Course("Intermediate Java", myInstructor, myTextBook);
		
		//Print all info
		System.out.println(myCourse);

	}

}
