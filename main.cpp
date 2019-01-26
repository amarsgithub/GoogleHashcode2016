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
    Product(){}
    Product(int weight, int numProd)
    {

    }
};

struct Drone 
{
    intp currentLoc;
    int maxPayLoad;
    vector<product> products; // same size as wareHouse product vecotr

    Drone(int maxP)
    {
        maxPayLoad = maxP;
        currentLoc.first = 0;
        currentLoc.second = 0;
    }


    //items is a vector of amount of items to take from each product ; should be the same size as w
    //d = GetDistance(droneLocation, wareHouseLocation)
    Load(WareHouse& w, Vector& items) 
    {
        d = GetDistance(currentLoc, w.warLoc)
        for(unsigned int i = 0; i < items.Size(); i++)
        {  
            w.listProdType[1] = w.listProdType[i] - items[i];
            products[i] = products[i] + items[i];
            maxPayLoad = maxPayLoad + (items[i] * items[i].weight);
        }
        totalTurns  = totalTurns - d - 1;
    }

    //must drop of ALL items 
    Deliver(intp DeliverLoc, Order& o, Vector& itmes)
    {
        double d = GetDistance(currentLoc, DeliverLoc);
        for(unsigned int i = 0; i < o.size(), i++)
        {
            order[i] = order[i] - items[i];
            maxPayLoad = maxPayload - (items[i] * items[i].weight);
        }
        totalTurns  = totalTurns -  d - 1;

    }

    Unload()
    {

    }

    Wait()
    {

    }

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