#include <iostream>
#include <math.h>
using namespace std;

typedef unsigned int uint;
typedef pair<int,int> intp;


struct Product
{

};

struct Drone 
{

};


struct Solution 
{
    int rows, cols, drones, turns, maxPayLoad;




};

// EMMETT PLZ WRITE THE FOLLOWING FUNCTION TO CALCULATE DISTANCE BETWEEN 2 POINTS. RETURN DOUBLE.
double GetDistance(intp one, intp two)
{
    double returnValue;
    int xSub = 0;
    int ySub = 0;
    xSub = one.first - two.first;
    ySub = one.second - two.second;
    xPow = pow(xSub, 2);
    yPow = pow(ySub, 2);
    returnValue = sqrt(xPow + yPow);
    
    return returnValue;
}


int main(void)
{
    // File IO shit goes here 
    // All of the files would ideally go into a vector of ifstream objects. 
    ifstream input();

    // Create a solution vector as well that takes in all files 
    


    return 0;
}