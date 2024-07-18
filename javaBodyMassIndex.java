/***********************************
Caravana, Ana Maricris A.
BSCpE 1-1

III - Programming Exercise
    Java
    1.  Body Mass Index
**********************************/

import java.util.Scanner;

public class CARAVANAJavaBodyMassIndex
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        double weight, height, bmi;
        String interpretation;

        System.out.println("Hello!");
        System.out.println("This program can calculates and displays a person's body mass index (BMI)");
       
        System.out.println("If you want to continue");
        System.out.print("Please enter a person's weight in pounds: ");
        weight = in.nextDouble();

        System.out.println("If you want to continue");
        System.out.print("Please enter a person's height in inches: ");
        height = in.nextDouble();

        bmi = Math.round(bmiCalculation(weight, height) * 100.0)/100.0;
        interpretation = bmiInterpret(bmi);
        System.out.println("A person's Body Mass Index (BMI) is " + bmi + " and interpret as " + interpretation);
    }
    public static double bmiCalculation(double weight, double height)
    {
        int constant = 703;
        return ((weight * constant) / (height * height));
    }
    public static String bmiInterpret(Double bmi)
    {
        if (bmi < 18.5) {return "Underweight";}
        else if (bmi >= 18.5 && bmi <= 24.9) {return "Normal";}
        else if (bmi >= 25.0 && bmi <= 29.9) {return "Overweight";}
        else if (bmi >= 30) {return "Obese";}
        {return "";}
    }   
}
