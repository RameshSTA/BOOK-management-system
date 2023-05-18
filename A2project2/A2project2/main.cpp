//===========ASSESSMENT-2 TASK2==============================================
//===========CREATED BY RAMESH SHRESTHA======================================
//===========A00055910=======================================================
//===========TORRENS UNIVERSITY AUSTRALIA====================================
#include <iostream>
#include <string>
#include "Books.h"
using namespace std; 
//----------------------------------------------------------MAIN FUCNTION FOR EXECUTION
// the project is about management of the book in library
// using the standard template library like map, vector etc.
//map is the associative container which has the element with pair  of key and values which is 
//associated with key.
int main()
{
			//firsty we will ask to enter the option for proceeding to the functionality features 
			// of the book management system
			// creating variable which hold the  user data and can be used for further functionality
			int option = 0;
			Book book;// here book is the objects which is created from the class Book
			//as it is mentioned to store the certain books  in  system using map befor procedding the other functionality
			//i have stored certain books with random key and values 
			//where the  key is  integer data types and  values is string datatypes 
			//----------------------------------------------------------------STORING THE BOOKS IN MAP
			book.booksDetails.insert(pair<int, string>(8, "mathematics"));
			book.booksDetails.insert(pair<int, string>(22, "python programming"));
			book.booksDetails.insert(pair<int, string>(6, "Basics of c++"));
			book.booksDetails.insert(pair<int, string>(34, "statistics"));
			book.booksDetails.insert(pair<int, string>(56, "Data structure"));
			book.booksDetails.insert(pair<int, string>(12, "computation and algorithms"));
			book.booksDetails.insert(pair<int, string>(20, "introduction to data scinece"));
			book.booksDetails.insert(pair<int, string>(67, "digital marketing"));
			book.booksDetails.insert(pair<int, string>(101, "environmetal science"));
			book.booksDetails.insert(pair<int, string>(102, "biology"));
			book.booksDetails.insert(pair<int, string>(65, "chemistry"));
			book.booksDetails.insert(pair<int, string>(107, "quantum physics"));
			book.booksDetails.insert(pair<int, string>(23, "introduction to accounting"));
			book.booksDetails.insert(pair<int, string>(200, "four quadrant"));
			book.booksDetails.insert(pair<int, string>(89, "intelligent investor"));
			book.booksDetails.insert(pair<int, string>(90, "lifetime asset"));
			book.booksDetails.insert(pair<int, string>(68, "financial development"));
			book.booksDetails.insert(pair<int, string>(50, "education development"));
			book.booksDetails.insert(pair<int, string>(51, "carreer development"));
			book.booksDetails.insert(pair<int, string>(25, " probability"));
			book.booksDetails.insert(pair<int, string>(24, "sport coaching"));
			book.booksDetails.insert(pair<int, string>(33, "programming basics"));
			//SHOW: we need to show the the menu or differnt feature of the system so,
			// i created the functions to show all the stored books in map using the iterator inside function 
			book.ShowMenu();
			//as we  want to run the program for every features  if the users want to use more 
			// for which we need loop and i used the do while llop where 
			//user need to enter the option shown in the menu and if 
			//user enter the wrong option except than the menu then it will ask to enter the valid number 
			// untill user enter the optino for  exit
			//--------------------------------------------------------- GIVING CHOICE TO USER
			do 
			{
				//  need to ask to user to enter the option in menu for further functionality
						cout << "CHOICE(1-5) : ";
						cin >> option;// getting the input optins for further processing 
						/*after getting the users option we need to move to particular functionalty according to 
						* users information and if we  did not  clear the previous  actions 
						* screen will be look messed so we  have clear the screeen after every actions 
						* THEN:for moving particular action we used switch control statement so that it will move 
						* to that features /functionality directly.
						*/
						system("cls");
						switch (option)
						{
						case 1: 
							//as shown in the menu of the system  it will show the 
							//lsit of allthe books that are stored in the system( map of the books details)
							book.displayBookList();
							// after  completion of displaying the listo of books we need to exit this  functionality so 
							// need to break
							break;
			
						case 2: 
							// if user  entered the  option 2 then it will ask  user to borrow the books
							// if user say yes then it will proceed for further process
							book.borrowAbook();
							break;
						case 3:
							//after taking the books for loan then we  need to have the list of loan books so that 
							//oother user can be known that that books are on loan 
							// it will show the list of borrowed books list 
							book.listOfBookLoan();
							break;
						case 4: 
							//when user want to return the book that had been borrowed, 
							//system will remove from the list of borrwed book and availabe for loan
							book.returnBook();
							cout << endl << endl;
							break;
						default:
							cout << "enter the valid option please" << endl;
							break;
						}

			} while (option !=5);// if the  user entered the option 5 then system will be exit
			system("pause>0");
			return 0;
}
//============================================================================================
//====================END OF THE PROJECT======================================================
//============================================================================================