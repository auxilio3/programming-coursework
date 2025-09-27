
public class Book {

//Attributes
	private String title;
	private String author;
	private int publicationYear;
	private String ISBN;
	private boolean available;
	private double price;
	
//Static field	
	private static int totalAvailableBooks = 0;
	
//Constructor
	public Book(String title, String author, int publicationYear, String ISBN, boolean available, double price) {
		this.title = title;
		this.author = author;
		this.publicationYear = publicationYear;
		this.ISBN = ISBN;
		this.available = available;
		this.price = price; 
		
		if(available) {
			totalAvailableBooks++; //Increments if the book is available
		}
	}
//Setters
	public void setTitle(String title) {
		this.title = title;
	}
	public void setAuthor(String author) {
		this.author = author;
	}
	public void setPublicationYear(int publicationYear) {
		this.publicationYear = publicationYear;
	}
	public void setISBN(String ISBN) {
		this.ISBN = ISBN;
	}
	public void setAvailable(boolean available) {
		if(this.available != available) {
			if(available) {
				totalAvailableBooks++;
			} else {
				totalAvailableBooks--;
			}
			this.available = available;
		}
	}
	public void setPrice(double price) {
		this.price = price;
	}
//Getters
	public String getTitle() {
		return title;
	}
	public String getAuthor() {
		return author;
	}
	public int getPublicationYear() {
		return publicationYear;
	}
	public String getISBN() {
		return ISBN;
	}
	public boolean isAvailable() {
		return available;
	}
	public double getPrice() {
		return price;
	}
//Static method to return total available books	
	public static int totalAvailableBooks() {
		return totalAvailableBooks;
	}
//Printing details of books
	public void displayInfo() {
		System.out.println("Title: " + title);
		System.out.println("Author: " + author);
		System.out.println("Publication year: " + publicationYear);
		System.out.println("ISBN: " + ISBN);
		if (available) {
			System.out.println("Available: Yes");
		} else {
			System.out.println("Available: No");
		}
		System.out.println("Price: $" + price);
		System.out.println();
	}
//Borrowing books
	public void borrowBook() {
		if(available) {
			available = false;
			totalAvailableBooks--;
			System.out.println("Book '" + title + "' has been borrowed successfully.");
		} else {
			System.out.println("Sorry, the book '" + title + "' is already borrowed.");
		}
	}
//Returning books
	public void returnBook() {
		if (available == false) {
			available = true;
			totalAvailableBooks++;
			System.out.println("'" + title + "' has been returned successfully.");
		} else {
			System.out.println("'" + title + "' is already in the library.");
		}
	}
//Calculating late fee
	public void calculateLateFee(int daysOverdue) {
		double lateFee = daysOverdue * 0.50;
		System.out.println("Late fee for '" + title + " ' (overdue by " + daysOverdue + "days): $" + lateFee);
	}
	
}
