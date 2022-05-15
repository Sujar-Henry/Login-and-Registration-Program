#include <iostream>
#include <string>
using namespace std;

int main(){

cout<< "\n\n\nWelcome to the Registration and Login Page, please choose from the options below";

//Variables for the options from the list
int options;

//Variables for the Register Page
string username;
string password;
string confirm_password;


//Variables for the Login Page

string username_login;
string password_login;


options_list:
  cout << "\t\n\n1) Register";
  cout << "\n2) Login";
  cout << "\n3) Exit\n";

cin >> options;


switch(options){
  case 1:
  cout << "\nTo Register Please Create a Username and Password";
  cout << "\nCreate Username: ";
  cin >> username;
  cout << "\n Create Password: ";
  cin >> password;
  cout << "\nPlease Confirm Your Password:";
  cin >> confirm_password;
  if (password == confirm_password){
  cout << "\nRegistration completed!";
  }
  if (password != confirm_password ){
    cout <<"\nPasswords are not the same!";
  }
  
  break;

  case 2:

  cout << "To Login to your account Please enter your Username and Password\n";
  cout << "\nUsername: ";
  cin >> username_login;
  cout << "\n Password: ";
  cin >> password_login;

  if (username == username_login and password == password_login){
    cout << "\nLogin Successful!";
  }
  if (username != username_login or password != password_login){
    cout << "\nLogin Failed!";
  }
break;
  case 3:
    cout << "\nYou have chosen to exit the program.\n\n";
    exit(0);
    

    default:
    cout << "\nError, please choose from the list below";  
}
goto options_list;
     return 0;
}