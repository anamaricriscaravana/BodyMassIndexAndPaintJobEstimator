/***********************************
Caravana, Ana Maricris A.
BSCpE 1-1

III - Programming Exercise
    C++
    1. Body Mass Index
**********************************/

#include <iostream>
#include <cmath>
using namespace std;

double bmiCalculatoion(double weight, double height);
string bmiInterpret(double bmi);

int main()
{
    double height, weight, bmi;
    string interpretation;

    cout << "Hello!" << endl;
    cout << "This program can calculates and displays a person's body mass index (BMI)" << endl;
    cout << "Please enter a person's weight in pounds: ";
    cin >> weight;
    cout << "Please enter a person's height in inches: ";
    cin >> height;
    bmi = round(bmiCalculatoion(weight, height)*100.0)/100.0;
    interpretation = bmiInterpret(bmi);
    cout << "A person's Body Mass Index (BMI) is " << bmi << " and interpret as " << interpretation;
    return 0;
}
double bmiCalculatoion(double weight, double height)
{
    int constant = 703;
    double bmi = (weight * constant/(height * height));
    return bmi;
}
string bmiInterpret(double bmi)
{
    if (bmi < 18.5) {return "Underweight";}
    else if (bmi >= 18.5 & bmi <= 24.9) {return "Normal";}
    else if (bmi >= 25 & bmi <= 29.9) {return "Overweight";}
    else if (bmi >= 30) {return "Obese";}
    return "";
}
