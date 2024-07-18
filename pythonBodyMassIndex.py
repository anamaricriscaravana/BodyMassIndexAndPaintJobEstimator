#Caravana, Ana Maricris A.
#BSCpE 1-1

#III - Programming Exercise
#   Python
#   1. Body Mass Index

def main():
    print (" ")
    print ("Hello!")
    print (" ")
    print ("This program can calculates and displays a person's body mass index (BMI)")
    print (" ")
    print ("If you want to continue")
    weight = int(input("Please enter a person's weight in pounds: "))
    print (" ")
    print ("If you want to continue")
    height = int(input("Please enter a person's height in inches: "))
   
    bmi = round(bmiCalculation(weight, height), 2)
    interpretation = bmiInterpret(bmi)
    print (" ")    
    print("A person's Body Mass Index (BMI) is " + str(bmi) + " and interpret as " + interpretation)
    print (" ")

def bmiCalculation (weight, height):
    constant = 703
    bmi = ((weight * constant) / (height * height))
    return bmi

def bmiInterpret(bmi):
    if (bmi     < 18.5): return "Underweight"
    elif (bmi >= 18.5 and bmi <= 24.9): return "Normal"
    elif (bmi >= 25.0 and bmi <= 29.9): return "Overweight"
    elif (bmi >= 30): return "Obese"
main()
