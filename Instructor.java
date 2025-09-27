
public class Instructor {
	private String firstName;
	private String lastName;
	private String officeNumber;
	
	//Constructor
	Instructor(String fname, String lname, String office) {
		firstName = fname;
		lastName = lname;
		officeNumber = office;
	}
	
	//Deep-copy constructor
	Instructor(Instructor object2) {
		firstName = object2.firstName;
		lastName = object2.lastName;
		officeNumber = object2.officeNumber;
	}
	
	//One big Setter
	public void Setter(String fname, String lname, String office) {
		firstName = fname;
		lastName = lname;
		officeNumber = office;
	}
	
	//Override toString()
	public String toString() {
		return firstName+" "+lastName+" "+officeNumber;
	}

}
