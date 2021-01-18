
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "\nWelcome to Primer 4 - Account Validation\n\n";


string usernameinput,passinput;
int attempts = 3;
  while(1) {
  cout << "\nPlease Enter Your Username And Password\n\n";

  cout << "Username: "<<endl;
  cin>>usernameinput;
  cout << "Password: "<<endl;
  cin>>passinput;
  

    string username[]={"mike","casper","rowan"};
    string password[]={"1234","1212","8008"};
  
  

    for (int i = 0; i >= 2; i++)
    { //for loop will not work - hopefully can debug later 
      if(usernameinput == username[i] && passinput == password[i] )
      {
        
        cout << "Welcome! " << username[i];
        return 0;
        
      }
      
      else if (usernameinput != username[i] && passinput != password[i] && attempts == 1)
      {
        cout << "Failed To Authenticate After 3 Attempts, Please Restart Program";
        return 0;
      }

      else if (usernameinput != username[i] && passinput != password[i])
      {
        
        cout<<"please enter correct username and password\n"<<endl;
        attempts--;
          cout << "You Have " << attempts << " Attempts Out Of 3 Remaining. ";
          break;
      
      }
    };
  } 
}
