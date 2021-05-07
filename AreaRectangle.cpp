#include <iostream>
#include <iomanip>
using namespace std;
//function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double& length, double& width, double& area);

int main()
{
   double length, width, area;//declaring variables
   length = getLength();//assigning value returned from function to a variable
   width = getWidth();
   area = getArea(length, width);
   displayData(length, width, area);//displaying results    
   return 0;
}

double getLength()//function to get user input
{
   double len;
   cout << "Please enter your rectange's length in inches: ";
   cin >> len;
   return len;
}

double getWidth()//function to get user input
{
   double wid;
   cout << "Please enter your rectangle's width in inches: ";
   cin >> wid;
   cout << endl;
   return wid;
}

double getArea(double length, double width)//function to calculate area using user input
{
   double are = length * width;
   return are;
}

void displayData(double& length, double& width, double& area)//function to display results
{
   cout << setprecision(2) << fixed;
   cout << "The length of your rectange is " << length << " inches and the width of your rectangle is " << endl;
   cout << width << " inches, therefore the area of your rectangle is " << area << " square inches.";
   cout << endl << endl;
}



