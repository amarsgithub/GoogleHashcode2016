#include <iostream>
#include <sstream>
#include <algorithm>
#include <math.h>
using namespace std;

typedef unsigned int uint;
typedef pair<int,int> intp;
//hello! i am pushing -jewel
//more!

struct Product
{

};

struct Drone 
{
    Load()
    {

    }

    Deliver()
    {

    }

    Unload()
    {

    }

    Wait()
    {

    }

    intp droneLocation = 

};

struct Location
{

};

struct House
{

};

struct Warehouse
{

};

struct Solution 
{
    int rows, cols, drones, turns, maxPayLoad;

    Solver(ifstream &ifs)
    {
        string s;
        stringstream ss;
        getline(ifs, s);
        ss << s;

        // uint 
    }



    // Amar will write the main algorithm here
    

};

// EMMETT PLZ WRITE THE FOLLOWING FUNCTION TO CALCULATE DISTANCE BETWEEN 2 POINTS. RETURN DOUBLE.
double GetDistance(intp one, intp two)
{
    double returnValue;
    int xSub = 0;
    int ySub = 0;
    xSub = one.first - two.first;
    ySub = one.second - two.second;
    int xPow = pow(xSub, 2);
    int yPow = pow(ySub, 2);
    returnValue = sqrt(xPow + yPow);
    
    return returnValue;
}


int main(void)
{
    // File IO shit goes here 
    // All of the files would ideally go into a vector of ifstream objects. 
    ifstream input();

    double test = GetDistance(pair<int, int>(0,0), pair<int, int>(4,4));
    std::cout << test << std::endl;

    // Create a solution vector as well that takes in all files 
    


    return 0;
}