#pragma once
#include<iostream>
#include <string>
#include<map>
#include<vector>
using namespace std; 

// the class will hold the boks names  book id etc and  make easy to 
//access the properties and method
//all the properties are made publicso that the prperties and mehtod are 
//acessible everywhoere in the program
//----------------------------------------------------CREATING CLASS
class Book
{
		public:
		//---------------------------------------------ATTRIBUTES
			string bookName;
			int bookid=0;
			string userName;
			vector<int>borrowBookId;
			vector<string>borrowedBookTitle;
			map<int, string>booksDetails;
			string choice;
			//------------------------------------------METHODS 
			//methods of that are used to differnet fucntionality of the system
			void  ShowMenu();// it shows the  dffernt features list  for user
			void displayBookList();// it  shows the all the list of books  stored in the system
			void borrowAbook();//to borrow a book form the stored lsit of the books
			void listOfBookLoan();//shows the list  of borrowed book lsit 
			void returnBook();//after borrwing books  if user want to return  books then this functionality allow to return
			void askForShowingMenu();// it will ask to shoe menu or not.
};
//---------------------------------------------------END.
