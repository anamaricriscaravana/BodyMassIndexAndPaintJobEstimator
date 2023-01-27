/***********************************
Caravana, Ana Maricris A.
BSCpE 1-1

III - Programming Exercise
    Java
    2. Paint Job Estimator
**********************************/

import java.util.Scanner;

public class CARAVANAJavaPaintJobEstimator
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        double  wallSpace, paintPrice;
        int wallSpaceConstant = 115; 
        int laborHoursConstant = 8;
        int companyChargesConstant = 20;

        System.out.println("Hello!");
        System.out.println("This program can Estimates a Paint Job in a Painting Company");
        
        System.out.print("Please enter the square feet of wall space to be painted: ");
        wallSpace = in.nextDouble();

        System.out.print("Please enter the price of paint per gallon: ");
        paintPrice = in.nextDouble();

        double PaintGallons = getPaintGallons(wallSpace, wallSpaceConstant);
        double LaborHours = getLaborHours(wallSpace, wallSpaceConstant, laborHoursConstant);
        double PaintCost = getPaintCost(PaintGallons, paintPrice);
        double LaborCharges = getLaborCharges(LaborHours, companyChargesConstant);
        double PaintJobTotal = getPaintJobTotal(PaintCost, LaborCharges);
    
        System.out.println("So, this will be the following cost of the painting: ");
        System.out.println("The number of gallon/s of paint required is " + PaintGallons + " gallon/s.");
        System.out.println("The hour/s of labor required is " + LaborHours + " hour/s.");
        System.out.println("The cost of the paint is $" + PaintCost);
        System.out.println("The labor charges is $" + LaborCharges);
        System.out.println("And the total cost of the paint job is $" + PaintJobTotal);
    }
    
    public static double getPaintGallons(double wallSpace, int wallSpaceConstant) 
    {
        return Math.round((wallSpace / wallSpaceConstant)*100.0)/100.0;
    }
    
    public static double getLaborHours(double wallSpace, int wallSpaceConstant, int laborHoursConstant) 
    {
        return Math.round(((wallSpace / wallSpaceConstant)*laborHoursConstant)*100.0)/100.0;
    }
    
    public static double getPaintCost(double paintGallon, double paintPrice) 
    {
        return Math.round((paintGallon * paintPrice)*100.0)/100.0;
    }
    
    public static double getLaborCharges(double LaborHours, int companyChargesConstant) 
    {
        return Math.round((LaborHours * companyChargesConstant)*100.0)/100.0;
    }
    
    public static double getPaintJobTotal(double PaintCost, double LaborCharges) 
    {
        return Math.round((PaintCost + LaborCharges)*100.0)/100.0;
    }
}