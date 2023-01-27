/***********************************
Caravana, Ana Maricris A.
BSCpE 1-1

III - Programming Exercise
    C++
    2. Paint Job Estimator
**********************************/

#include <iostream>
#include <cmath>
using namespace std;

double getPaintGallons(double wallSpace, int wallSpaceConstant);
double getLaborHours(double wallSpace, int wallSpaceConstant, int laborHoursConstant);
double getPaintCost(double PaintGallons, double paintPrice);
double getLaborCharges(double LaborHours, int companyChargesConstant);
double getPaintJobTotal(double PaintCost, double LaborCharges);

int main() 
{
    double wallSpace, paintPrice;
    int wallSpaceConstant = 115; 
    int laborHoursConstant = 8;
    int companyChargesConstant = 20;

    cout << "Hello!" << endl;
    cout << "This program can Estimates a Paint Job in a Painting Company" << endl;
    cout << "Please enter the square feet of wall space to be painted: ";
    cin >> wallSpace;
    cout << "Please enter the price of paint per gallon: ";
    cin >> paintPrice;

    double PaintGallons = getPaintGallons(wallSpace, wallSpaceConstant);
    double LaborHours = getLaborHours(wallSpace, wallSpaceConstant, laborHoursConstant);
    double PaintCost = getPaintCost(PaintGallons, paintPrice);
    double LaborCharges = getLaborCharges(LaborHours, companyChargesConstant);
    double PaintJobTotal = getPaintJobTotal(PaintCost, LaborCharges);

    cout << "So, this will be the following cost of the painting: " << endl;
    cout << "The number of gallon/s of paint required is " << PaintGallons << " gallon/s." << endl;
    cout << "The hour/s of labor required is " << LaborHours << " hour/s." << endl;
    cout << "The cost of the paint is $" << PaintCost << endl;
    cout << "The labor charges is $" << LaborCharges << endl;
    cout << "And the total cost of the paint job is $" << PaintJobTotal << endl;

    return 0;
}

double getPaintGallons(double wallSpace, int wallSpaceConstant) 
{
    return round((wallSpace / wallSpaceConstant)*100.0)/100.0;
}
    
double getLaborHours(double wallSpace, int wallSpaceConstant, int laborHoursConstant) 
{
    return round(((wallSpace / wallSpaceConstant)*laborHoursConstant)*100.0)/100.0;
}
    
double getPaintCost(double paintGallon, double paintPrice) 
{
    return round((paintGallon * paintPrice)*100.0)/100.0;
}
    
double getLaborCharges(double LaborHours, int companyChargesConstant) 
{
    return round((LaborHours * companyChargesConstant)*100.0)/100.0;
}
    
double getPaintJobTotal(double PaintCost, double LaborCharges) 
{
    return round((PaintCost + LaborCharges)*100.0)/100.0;
}