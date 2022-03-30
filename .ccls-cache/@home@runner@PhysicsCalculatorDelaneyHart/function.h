#include <iostream>
#include <string>
#include "input_validation_extended_DrT.h"
using namespace std;
//I apologize for the mess this file is

////////PROTOTYPES!///////////////////
void menuOption(string); //for the user to pick a calculation
void showMenu(); //show the menu
double velocity(double, double);
double accel(double, double);
double motion1();
double motion2();
double motion3 ();
double motion4 ();
double newt(double, double);
double weightE(double, double);
double moment(double, double);

////////DEFINITIONS///////////////////
void menuOption(string userOption) 
{
    double ds, dv, dt, m, a, g, v;
    string dsUnits, dtUnits, dvUnits, mUnits, aUnits, gUnits, vUnits;
  string color = "\x1b[" + to_string(45) + ";1m";
  string reset = "\x1b[0m";
  
    if (userOption == "1")//Velocity
    { 
      cout << "\tVELOCITY\n";
      cout << "\tPlease enter the number for ds (displacement):\n";
        ds = validateDouble(ds);
      cout << "\tPlease enter the unit of measurement for ds:\n";
        dsUnits = validateString(dsUnits);
      cout << "\tPlease enter the number for dt (time):\n";
        dt = validateDouble(dt);
      cout << "\tPlease enter the unit of measurement for dt:";
         dtUnits = validateString(dtUnits); 
      cout << color;
      cout << "\t\t\nThe velocity of " << ds << dsUnits << "/"; 
      cout << dt << dtUnits << " is ";
      cout << velocity(ds, dt) << endl;
      cout << reset;
      }
    else if (userOption == "2")// Acceleration
      {
        cout << "\tACCELERATION\n";
      cout << "\tPlease enter the number for dv:\n";
        dv = validateDouble(dv);
      cout << "\tPlease enter the unit of measurement for dv:\n";
        dvUnits = validateString(dvUnits);
      cout << "\tPlease enter the number for dt:\n";
        dt = validateDouble(dt);
      cout << "\tPlease enter the unit of measurement for dt:";
         dtUnits = validateString(dtUnits); 
      cout << "\t\t\nThe velocity of " << dv << dvUnits << "/"; 
      cout << dt << dtUnits << " is ";
      cout << accel(dv, dt) << endl;
      }
    else if (userOption == "3")
    {//Motion
      //4 options
      cout << "Motion" << endl;
      }
    else if(userOption == "4")//Newton's 2nd Law
    {
      cout << "Please enter the number for mass:\n";
        m = validateDouble(m);
      cout << "Please enter the unit of measurement for mass:\n";
        mUnits = validateString(mUnits);
      cout << "Please enter the number for acceleration:\n";
        a = validateDouble(a);
      cout << "please enter the unit of measurement for acceleration:";
         aUnits = validateString(aUnits); 
      cout << "\t\nThe net force of " << m << mUnits << " * "; 
      cout << a << aUnits << " is ";
      cout << newt(m, a) << endl;
    }
    else if (userOption == "5")//Weight (Earth)
    {
      cout << "Please enter the number for mass:\n";
        m = validateDouble(m);
      cout << "Please enter the unit of measurement for mass:\n";
        mUnits = validateString(mUnits);
      cout << "Please enter the number for gravity:\n";
        g = validateDouble(g);
      cout << "please enter the unit of measurement for gravity:";
         gUnits = validateString(gUnits); 
      cout << "\t\nThe weight of " << m << mUnits << " * "; 
      cout << g << gUnits << " is ";
      cout << weightE(m, g) << endl;
      }
    else if (userOption == "6")//Momentum
    { 
      cout << "Please enter the number for mass:\n";
        m = validateDouble(m);
      cout << "Please enter the unit of measurement for mass:\n";
        mUnits = validateString(mUnits);
      cout << "Please enter the number for velocity:\n";
        v = validateDouble(v);
      cout << "please enter the unit of measurement for velocity:";
         vUnits = validateString(vUnits); 
      cout << "\t\nThe weight of " << m << mUnits << " * "; 
      cout << v << vUnits << " is ";
      cout << moment(m, v) << endl;
     }
    else if(userOption == "X" || userOption == "x")
    {
      string reset = "\x1b[0m";
      //Linux Umbunu
      cout << reset; 
      cout << "\033[2J\033[1;1H";  //for ubuntu Linux Option 1 of 2
      //Windows: system("cls"); 
      system("clear"); //for ubuntu Linux Option 2 of 2
    }
    else if(userOption == "E" || userOption == "e")
     {
       cout << "\nEnd program" << endl;
     }
    else
    {
      cout << "\nOops! Invalid input. Please try again:" << endl;
    }
  }

void showMenu() //show the menu!
{
cout << "\nPhysics Calculator Menu!\n\n"
      << "\t1. Velocity\n" 
      << "\t2. Acceleration\n" 
      << "\t3. Motion\n"
      << "\t4. Newton's 2nd Law\n"
      << "\t5. Weight (Earth)\n"
      << "\t6. Momentum\n"
      << "\tX. Clear the screen\n"
      << "\tE. EXIT\n\n";
cout << "Please enter the number of the calculation you wish to do or enter E to exit\n";
}

double velocity(double ds, double dt)//velocity
{
  double V = ds/dt;
  return V;
}

double accel(double dv, double dt)//acceleration
{
  double A = dv/dt;
  return A;
}

double newt(double m, double a)//Newton's 2nd Law
{
  double N = m * a;
  return N;
}

double weightE(double m, double g)//Weight (Earth)
{
  double W = m * g;
  return W;
}

double moment(double m, double v)//Momentum
{
  double Mo = m * v;
  return Mo;
}