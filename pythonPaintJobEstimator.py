#Caravana, Ana Maricris A.
#BSCpE 1-1

#III - Programming Exercise
#   Python
#   2. Paint Job Estimator

def main():
    print (" ")
    print ("Hello!")
    print (" ")
    print ("This program can Estimates a Paint Job in a Painting Company")

    print (" ")
    wallSpace = float(input("Please enter the square feet of wall space to be painted: "))
    print (" ")
    paintPrice = float(input("Please enter the price of paint per gallon: "))
    print (" ")

    wallSpaceConstant = 115
    laborHoursConstant = 8
    companyChargesConstant = 20

    PaintGallons = getPaintGallons(wallSpace, wallSpaceConstant)
    LaborHours = getLaborHours(wallSpace, wallSpaceConstant, laborHoursConstant)
    PaintCost = getPaintCost(PaintGallons, paintPrice)
    LaborCharges = getLaborCharges(LaborHours, companyChargesConstant)
    PaintJobTotal = getPaintJobTotal(PaintCost, LaborCharges)

    print (" ")
    print("So, this will be the following cost of the painting: ")
    print (" ")
    print("The number of gallon/s of paint required is {:.2f} gallon/s.".format(PaintGallons))
    print (" ")
    print("The hour/s of labor required is {:.2f} hour/s.".format(LaborHours))
    print (" ")
    print("The cost of the paint is ${:.2f}".format(PaintCost))
    print (" ")
    print("The labor charges is ${:.2f}".format(LaborCharges))
    print (" ")
    print("And the total cost of the paint job is ${:.2f}".format(PaintJobTotal))
    print (" ")

def getPaintGallons(wallSpace, wallSpaceConstant):
    return (wallSpace / wallSpaceConstant)

def getLaborHours(wallSpace, wallSpaceConstant, laborHoursConstant):
    return ((wallSpace / wallSpaceConstant) * laborHoursConstant)

def getPaintCost(paintGallon, paintPrice):
    return (paintGallon * paintPrice)

def getLaborCharges(LaborHours, companyChargesConstant):
    return (LaborHours * companyChargesConstant)

def getPaintJobTotal(PaintCost, LaborCharges):
    return (PaintCost + LaborCharges)
main()
