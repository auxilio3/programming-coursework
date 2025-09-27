
public class LibraryTester {

	public static void main(String[] args) {
//Book objects
		Book b1 = new Book("Normal People" , "Sally Rooney", 2018, "978-0571334650", true, 12.99);
		Book b2 = new Book("Do You Remember Being Born?", "Sean Michaels", 2023, "978-1662602320", true, 16.99);
		Book b3 = new Book("Severance", "Ling Ma", 2018, "978-1250214997", true, 11.50);
		
//Display info to print book details
		System.out.println("Initial book information: ");
		b1.displayInfo();
		b2.displayInfo();
		b3.displayInfo();
		
//Borrowing first two books
		System.out.println("Borrowing books: ");
		b1.borrowBook();
		b2.borrowBook();
		System.out.println();
		
//Displaying available books
		System.out.println("Number of available books after borrowing: " + Book.totalAvailableBooks());
		System.out.println();
		
//Returning second book
		System.out.println("Returning book: ");
		b2.returnBook();
		System.out.println();
		
//Displaying available books after return
		System.out.println("Number of available books: " + Book.totalAvailableBooks());
		System.out.println();
		
		
//Calculating late fee for second book
		b2.calculateLateFee(5);
		
		
		

	}

}
