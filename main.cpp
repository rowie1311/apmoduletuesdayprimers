#include <iostream>
#include <string>
using namespace std;

int removeEmployee(string employees[], string r, int s) {
    for(int i = 0; i < s; i++) {
       if(r == employees[5]) {
        break;
        } else if(employees[i] == r){
          employees[i] = employees[i + 1];
          for(int j = i + 1; j < s-1; j++) {
            employees[j] = employees[j+1];
          }
        }
        }
        s--;
        cout << "\nThere are "<< s << " employees";
        for (int i = 0 ; i < s; i++) {
          cout<< "\n" << e[i];
        }
  return 0;
};

int main() {

string employees[6] = {"Rowan Priest","Jonathan Davies","Charlie Hodgekinson", "Charles Wilson", "Emily Buckley", "Lewis Keech"};
string remployee;

int arrSize = sizeof(employees)/sizeof(employees[0]);

for (int i = 0; i < arrSize; i++) {
  cout << employees[i] << endl;
}

cout << "\nType An Employee You'd Like To Remove:" << endl;
//cin.ignore();
getline(cin, remployee);
//cout << remployee;

removeEmployee(employees, remployee, arrSize);
};

