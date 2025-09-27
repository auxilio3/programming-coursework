
public class TextBook {
	private String title;
	private String author;
	private String publisher;
	
	//Constructor
	TextBook(String textTitle, String auth, String pub) {
		title = textTitle;
		author = auth;
		publisher = pub;
	}
	
	//Deep-copy
	TextBook(TextBook object2) {
		title = object2.title;
		author = object2.author;
		publisher = object2.publisher;
	}
	
	//One big setter
	public void Setter(String textTitle, String auth, String pub) {
		title = textTitle;
		author = auth;
		publisher = pub;
	}
	
	//Override toString()
	public String toString() {
		return title + " " + author + " " + publisher;
}
}
