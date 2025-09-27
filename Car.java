
public class Car {

	private String manufacturer;
	private String model;
	private int year;
	private double price;
	
	public Car(String m, String mo, int y, double p) {
		manufacturer = m;
		model = mo;
		y = year;
		p = price;
	}
	
	public void setManufacturer(String m) {
		m = manufacturer;
	}
	
	public void setModel(String mo) {
		model = mo;
	}
	
	public void setYear(int y) {
		year = y;
	}
	
	public void setPrice(double p) {
		p = price;
	}
	
	public String getManufacturer() {
		return manufacturer;
	}
	
	public String getModel() {
		return model;
	}
	
	public int getYear() {
		return year;
	}
	
	public double getPrice() {
		return price;
	}
	
	public void printInfo() {
		System.out.println("Manufacturer: " + manufacturer);
        System.out.println("Model: " + model);
        System.out.println("Year: " + year);
        System.out.println("Price: $" + price);
	}
		
	
}
