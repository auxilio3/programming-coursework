
public class Course {
	private String courseName;
	private Instructor instructor;
	private TextBook textbook;
	
	//Constructor
	Course(String name, Instructor instr, TextBook text) {
		courseName = name;
		instructor = new Instructor(instr); //Deep-copy
		textbook = new TextBook(text); //Deep-copy
	}
	
	public String getCourseName() {
		return courseName;
	}
	
	public Instructor getInstructor() {
		return new Instructor(instructor); //Return deep-copy
	}
	
	public TextBook getTextBook() {
		return new TextBook(textbook); //Return deep-copy
	}
	//Override toString()
	public String toString() {
		return "Course Name: " + courseName + "\nInstructor Info: " + instructor  + "\nTextBook:" + textbook;
	}
	
	
	

}
