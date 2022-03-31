/* Delaney Hart
COSC 1437 - Dr. Tyson McMillan
Assignment 1 - "You have been tasked with creating a decision
program menu to help students who are taking a Physics 
(Mechanics) class perform simple foundation calculations"*/
#include "function.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(35) + ";1m";
  string reset = "\x1b[0m";
  
  do
  {
    showMenu(); //show the menu
    cout << "\nPlease enter the number of the option you want to do "; //prompt user
    cout << color; // change the color
    option = validateString(option); 
    
    cout << reset;
    menuOption(option); //call menuOption and pass the user option as an argument
    
  }while(option != "e" && option != "E"); //exit menu 
  return 0;
}