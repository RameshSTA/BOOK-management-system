#include "Books.h"
//---------------------------------------------------------------SHOWING MENU OF THE SYSTEM
void Book::ShowMenu()
{//the lsit of menu is shown
			cout << endl << endl;
			cout << "=======BOOKS MANAGEMENT SYSTEM=======" << endl << endl;
			cout << "*************************************" << endl;
			cout << "* 1--> LIST OF BOOKS IN LIBRARY     *" << endl;
			cout << "*************************************" << endl;
			cout << "* 2--> BORROW A BOOK                *" << endl;
			cout << "*************************************" << endl;
			cout << "* 3--> LIST OF BOOKS IN LOAN        *" << endl;
			cout << "*************************************" << endl;
			cout << "* 4--> RETURN A BOOK                *" << endl;
			cout << "*************************************" << endl;
			cout << "* 5--> EXIT                         *" << endl;
			cout << "*************************************" << endl;
			cout << "=====================================" << endl << endl;
}
//-------------------------------------------------------------DISPLAYING THE LSIT OF THE BOOKS 
void Book::displayBookList()
{
			//the stored books list is displayed using iterator of the mapi.e booksDetails
			map<int, string>::iterator iter;// iter  hold  the  each key and valuesassocuiated with it in each iteration
			cout << "=======THE LIST OF BOOKS========" << endl;
			for (iter = booksDetails.begin(); iter != booksDetails.end(); iter++)
			{
				cout << iter->first << " : " << iter->second << endl;// iter points the each elements in iteration 
			}
			cout << "\n\nTOTAL NUMBER OF BOOKS :" << booksDetails.size() << endl;// if the  map  size is  empty it wll show  0 numebrs of books in lsit
			cout << "=================================" << endl;
			cout << endl;
			//after completion of this functionality, it wll ask to either show the menu or not
			askForShowingMenu();
}
//-------------------------------------------------------------------FUNCTION TO BORROW  BOOK
void Book::borrowAbook()
{   
			// firstly we need to ask to user either they want to borrow a book or not then 
			//if they say yesthen it proceed further
			cout << "Do you want to borrow book (YES/NO):";
			cin >> choice;
			if (choice == "YES" || choice == "yes")
			{
					cout << "BOOK id :";//ask to enter the book id  to borrw the book
					cin >> bookid;//getting the enterd book id and 
					//we need to check either the entered book id is available for borrow or not 
					if (booksDetails.count(bookid) > 0)
					{
						cout << "LUCKY,We have the Book" << endl << endl;
						cout << "Your Book---> " << booksDetails[bookid] << endl;
						borrowBookId.push_back(bookid);//after borrowing the book, we will store the book id  inthe lsit of the bookidwith borrw
						borrowedBookTitle.push_back(booksDetails[bookid]);
						cout << "Do you want  to borrow again:(yes/no): ";
						cin >> choice;
						if (choice == "yes" || choice == "YES")
								borrowAbook();
							//booksDetails.erase(bookid);// which will remove the list  borrowed book form, the lsit of books 
					}
					else
					{
						cout << "we donot have book of that id please try again" << endl;
					}
			}
			cout << endl;
			//again it will ask either show  menu or not
			askForShowingMenu();
}
//-------------------------------------------------------------------SHOWING THE LIST OF BOOKS IN LOAN
void Book::listOfBookLoan()
{
			 //when the borrod  book if vector does not have any element then it will shows that
			 // there is not any book in loan 
			 //otherwise it wll  show  using the iterator of vector( borrowe vector)
			 if (borrowBookId.size() == 0)
			 {
				 cout << "There is not any borrow  book from library..\nHurry to get books" << endl;
			 }
			 else
			 {
				 vector<int>::iterator i;
				 cout << "LIST OF LOAN BOOKS ARE:" << endl << endl;
				 for (i = borrowBookId.begin(); i != borrowBookId.end(); i++)
				 {
					 //using the key  stored in the borrowed vector 
					 // we  have to retrieve the books  name from the map of books stored 
					 //which is done by passing the key of vector in book map and retrieved.
					 cout << *i << "  :  " << booksDetails[*i] << endl;
				 }
			 }
			 cout << endl;
			 askForShowingMenu();
 }
//-------------------------------------------------------------RETURNING THE BOOK FUCNTION
void Book::returnBook()
{
			 //when user want to return the books then ask to enter the book id 
			 //after getting id it will remove the lsit of the borrowed  book id from vectors 
			 cout << "Book ID of Borrowed Book : ";
			 cin >> bookid;
			 string confirmChoice;
			 vector<int>::iterator i;
			 i = find(borrowBookId.begin(), borrowBookId.end(), bookid);
			 if (borrowBookId.end() != i)
			 {
				 borrowBookId.erase(i);
				 cout << "Thanks for returning the Book, try another one for developing your\nmind in competitive manner." << endl << endl;
				 cout << "Borrow another BOOK. (YES/NO): ";
				 cin >> confirmChoice;
				 if (confirmChoice == "YES" || confirmChoice == "yes")
				 {
					 borrowAbook();
				 }
			 }
			 else
				 cout << "The given book ID is not   borrowed from library" << endl;
			 cout << endl;
			 askForShowingMenu();
}
//-----------------------------------------------------------------ASKING TO SHOW MENU OF SYSTEM
 void Book::askForShowingMenu()
 {
	 // it will  ask to  show the menu lsit of the system or not after the complemtion of any functionality
	 cout << "SHOW MENU (YES/NO) : ";
	 cin >> choice;
	 if (choice == "YES" || choice == "yes")
	 {
		 system("cls");
		 ShowMenu();
	 }
	 else
		 cout << "Thanks for visiting....." << endl;
 }
 //-----------------------------------------------------------END.-------------------------

