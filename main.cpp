#include <iostream>
using namespace std;
#include <string>


void displayMenu();
void DisplaySettings();
int menu();
void Settings();

void displayMenu() {
  cout << "---------------------- \n" ;
  cout << "| 1. Start quiz      | \n" ;
  cout << "| 2. Settings        | \n" ;
  cout << "| 3. Exit            | \n" ; 
  cout << "---------------------- \n" ;
 menu();
}

void DisplaySettings() {
  cout << "-------------------------- \n" ;
  cout << "| 1. Age                 | \n" ;
  cout << "| 2. Number of Questions | \n" ;
  cout << "| 3. Back to main menu   | \n" ; 
  cout << "-------------------------- \n" ;
  Settings();
}


void Settings(){
  string back;
  int settingsmenu;
  int Age;
  int Qnum;
      cin >> settingsmenu;
      switch (settingsmenu){
      case 1:
      cout << "Insert your age (only integer values are accepted): "<<endl;
      if(!(cin >> Age)){
        system ("CLS");
        cout << "Invalid value. Please insert your Age as an Integer." <<endl;
        Age=0;
        cin.clear();
      }
      else{
        system ("CLS");
        cout << "You selected the age " << Age << "." << endl;    
      }
      DisplaySettings();
      break;
      case 2: 
      cout << "Choose the number of questions: "<<endl;
      cin >> Qnum;
      system ("CLS");
      cout << "You will have to answer " << Qnum << " questions." << endl;
      DisplaySettings();
      break;
      case 3:
      system ("CLS");
      displayMenu();
      break;
      default:
      cout << "Invalid input. Enter any value to return to the settings menu or 0 to go to the main menu."<< endl;
      cin >> back;
      system ("CLS");
      if(back=="0"){
        displayMenu();
      }
      else
        DisplaySettings();
      break;
      }
}

int menu(){
  int menu;
  float blank;
  cin >> menu;
  switch(menu){
    case 1:
    cout << "Quiz code to be written..."<< endl;
    cout << "Enter any value to close the terminal." << endl;
    cin >> blank;
    return 0;
    break;
    case 2:
    system ("CLS");
    DisplaySettings();
    break;
    case 3:
    cout << "Good Bye! "<< endl;
    cout << "Enter any value to close the terminal." << endl;
    cin >> blank;
    return 0;
    break;
    default:
    cout << "Invalid input. Enter any value to return to the main menu."<< endl;
    cin >> blank;
    system ("CLS");
    displayMenu();
    break;
    }
    return 0;
}
int main() {
  system ("CLS");
  displayMenu();
}
