import java.util.ArrayList;

public class User {

	private int userID;
	private String username;
	private ArrayList<User> friends;
	
	//Setters
	public void setUserID(int userID) {
		this.userID = userID;
	}
	
	public void setUsername(String name) {
		username = name;
	}
	
	public void setFriends(ArrayList<User> fr) {
		friends = fr;
	}
	
	//Getters
	public int getUserID() {
		return userID;
	}
	public String getUsername() {
		return username;
	}
	
	public ArrayList<User> getFriends() {
		return friends;
	}
	
	//Equals
	public boolean equals(User u) {
		
		boolean sameFriends = true; //Assume they have the same Friends
		
		for(int i = 0; i < this.friends.size(); i++) {
			if(!this.friends.get(i).equals(u.friends.get(i))) //Check if they don't have a common friend
				sameFriends = false; //If they don't, set this as false
		}
		if(this.userID == u.userID && this.username.equals(u.username) && sameFriends)
		return true;
		else
			return false;
	}
	
}
