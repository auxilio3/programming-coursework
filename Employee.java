
public class Employee {
	
	//fields
	private String name;
	private int id;
	private String jobTitle;
	private double Salary;
	
	//constructor
	public Employee(String n, int eid, String job, double sal) {
		name = n;
		id = eid;
		jobTitle = job;
		Salary = sal;
	}
	
	//setters
	public void setName(String n) {
		name = n;
	}
	
	public void setID(int eid) {
		id = eid;
	}
	
	public void setJobTitle(String job) {
		jobTitle = job;
	}
	
	public void setSalary(double sal) {
		Salary = sal;
	}
	//getters
	public String getName() {
		return name;
	}
	
	public int getID() {
		return id;
	}
	
	public String getjobTitle() {
		return jobTitle;
	}
	
	public double getSalary() {
		return Salary;
	}
	
	public String printInfo() {
		return "Name: " + name + "\nID: " + id + "\nJob Title: " + jobTitle + "\nSalary" + Salary;
	}
	
	public double getMonthlySalary() {
		return (Salary*0.8)/12;
	}
	

}
