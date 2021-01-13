
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "\nWelcome to Primer 4 - Account Validation\n\n";

string usernameinput,passinput;
string username[]={"mmm","nnnn","rrrr","aaa"};
string password[]={"1234","1212","1234","1212"};
bool authenticate=false;

while(authenticate==false){
  cout << "Hello, Please Enter Your Username And Password\n";
  cout << "username: "<<endl;
    cin>>usernameinput;
  cout << "password: "<<endl;
    cin>>passinput;
      for(int i=0;i<=3;i++){
            if(usernameinput ==username[i] && passinput==password[i] )
            {
              authenticate=true;
            }
            else if (usernameinput !=username[i] && passinput!=password[i])
            {
              authenticate=false;
              cout<<"please enter correct username and password"<<endl;
            }

        };
}
}

