/*Immanuel Braxton
   3 / 7 / 2024
   This program will ask for given coordinates of a center point and a point on its circumference of the circle. 
   This program that provides the radius, circumference and area of a circle.These cooridinates will be asked to be 
   provided in the main function, where the main function will then call prototype calcRadius to calculate the radius via calling 
   the calcDistance function. The calcDistance function will return an actual value, the calculated distance, which in turn is the
   calculated radius. In the calcRadius function the distance will be renamed radius and recieved by the mainfunction as a reference value. 
   The reference value will then be accessed by both prototype functions, calccircumference and calcArea functions.  These 
   functions will output their respective calculated values prior to going back to the main function and terminating. 
 "

    
*/



#include <iostream> 

#include <iomanip> //includes manipulators (that take parameters, strings are left justified, numbers are right justified)

#include <string>

#include <fstream> //fstream header

using namespace std;

const double pi = 3.1416;// definition of pi by professor
// precondition : main funbtion will provide perameters and called by calradius
//  posconditions: distence is returned to calradius.
double calcDistance(double x1, double y1, double x2, double y2); 

// precondition : main funbtion will provide perameters it will call call calcDistance and calradius  
//  posconditions: will rename distance radius and give cout radius and send to main as a reference value.
void calcRadius(double x1, double y1, double x2, double y2, double& radius);

// precondition : called by main function and the main funbtion will provide reference values - radius
// posconditions: Will calculate area and c out the area.
void calcArea(double nubx1, double nuby1, double nubx2, double nuby2, double rad);

// precondition : Is called by the main function and the main function provides the refernce value.
// posconditions: Will calculate the circumference and c out the circumference.
void calcCircumference(double nux1, double nuy1, double nux2, double nuy2, double radi);

int main()
{
    
        double numx1, numy1, numx2, numy2, r;
        numx1 = 0;
        numy1 = 0;
        numx2 = 0;
        numy2 = 0;
        r = 0;

        cout << " Please, enter input the coordinates of the first point (x1 y1) in the cartesian plane separated by a space: ";
        cin >> numx1 >> numy1;

        cout << "Enter the coordinates of the second point (x2 y2) in the cartesian plane separated by a space: ";
        cin >> numx2 >> numy2;

        calcRadius (numx1, numy1,numx2, numy2,r);

        calcCircumference (numx1,numy1, numx2, numy2, r);

        calcArea (numx1,numy1, numx2, numy2, r);
        

        return 0;

}


void calcArea(double nubx1, double nuby1, double nubx2, double nuby2, double rad)
{
    double area = pi * rad * rad;
    cout << "The area of the circle is: " << endl;
    cout << fixed << showpoint << setprecision(2) << setw(4) << area << endl;
}

void calcCircumference(double nux1, double nuy1, double nux2, double nuy2, double radi)
{
    double circumference = 2 *pi * radi;
    cout << "The circumference of the circle is: " << endl;
    cout << fixed << showpoint << setprecision(2) << setw(4) << circumference << endl;
}


void calcRadius(double x1, double y1, double x2, double y2, double& radius)
{
   
    radius = calcDistance(x1, y1, x2, y2); 

    cout << "The radius between the points is: " << endl;
    cout << fixed << showpoint << setprecision(2) << setw(4) << radius << endl;
}


double calcDistance(double x1, double y1, double x2, double y2)
{
    
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
   
    

    //cout << "The distance between the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << endl;
    //cout << fixed << showpoint << setprecision(2) << setw(4) << distance << endl;
}
