#include <iostream>
#include <sstream>
#include <algorithm>
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
    int rows, cols, numDrones, turns, maxPayLoad;

    vector<Drone> drones;
    vector<Order> orders;
    vector<Warehouse> warehouse;
    vector<House> houses;
    vector<Product> products; 

    int numProductTypes;
    int numWarehouses; 
    int numOrders;

    Solver(ifstream &ifs)
    {
        string s;
        stringstream ss;
        getline(ifs, s);
        ss << s;

        ss >> this->rows >> this->cols >> this->numDrones >> this->turns >> this->maxPayLoad;


        getline(ifs, s); // num types of products 
        numProductTypes = stoi(s);

        getline(ifs, s); // all of the product values 
        // below loop reads through each of the products weights
        for (int i = 0; i < numProductTypes; i++)
        {
            int tempWeight; 
            ss << s;
            products.push_back(Product(stoi(s)));
        }


        // Warehouse part 
        getline(ifs, s);
        numWarehouses = stoi(s);
        for (int i = 0; i < numWarehouses; i++)
        {
            getline(ifs, s); // s contains x and y location 
            ss << s; // x location in ss right now 
            int xLoc = stoi(ss);
            ss << s; // y location in ss
            int yLoc = stoi(ss);

            vector<int> items;
            getline(ifs, s);
            for (int i = 0; i < numProductTypes; i++)
            {
                ss << s; // item
                items.push_back(stoi(ss));
            }                    
            Warehouse(make_pair(xLoc, yLoc), items);
        }

        // s contains numOrders
        getline(ifs, s); 
        numOrders = stoi(s);

        for (int i = 0; i < numOrders; i++)
        {
            getline(ifs, s); // s contains x and y coordinate for order
            ss << s; 
            int xLoc = stoi(ss);
            ss << s;
            int yLoc = stoi(ss);

            getline(ifs, s); // s contains number of items in order 
            int numItems = stoi(s);

            getline(ifs, s);
            vector<int> orders(numItems, 0);
            for(int i = 0; i < numItems; i++)
            {
                ss << s;
                orders[stoi(ss)]++;
            }

            orders.push_back(Order(make_pair<int,int>(xLoc, yLoc), orders));   
        }
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