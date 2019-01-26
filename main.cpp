#include <iostream>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <math.h>
#include <vector>
using namespace std;

typedef unsigned int uint;
typedef pair<int,int> intp;
//hello! i am pushing -jewel
//more!

uint totalTurns; 

struct Product
{
    Product(){}
    Product(int weight)
    {

    }
};

struct Drone 
{
    intp pair;
    int maxPayLoad;
    vector<product> products; // same size as wareHouse product vecotr

    Drone(int maxP)
    {
        maxPayLoad = maxP;
    }


    //items is a vector of amount of items to take from each product ; should be the same size as w
    //d = GetDistance(droneLocation, wareHouseLocation)
    Load(double d, WareHouse& w, Vector& items) 
    {
        for(unsigned int i = 0; i < items.Size(); i++)
        {  
            w.listProdType[1] = w.listProdType[i] - items[i];
            products[i] = products[i] + items[i];
            maxPayLoad = maxPayLoad + (items[i] * items[i].weight);
        }
        totalTurns  = totalTurns +  d + 1;
    }

    Deliver(double d, Order& o)
    {
        

    }

    void Unload()
    {

    }

    void Wait()
    {

    }

};

struct Location
{
    intp loc; 
    Location()
    {

    }

    Location(pair<int,int> location)
    {

    }
};

struct House
{
    vector <int> numProdDeliv;
    int houseRow;
    int houseCol;

    House(pair<int, int> location, vector<int> prodType)
    {

    }
};

struct Warehouse
{
    int warRow;
    int warColumn;
    vector <int> listProdType;
    int totalInventory;
    Warehouse(pair<int, int> location, vector<int> prodType)
    {
        this->warRow = location.first;
        this->warColumn = location.second;
        this->listProdType = prodType;
    }
};

struct Order
{
    Order(pair<int, int> location, vector<int> products)
    {

    }
};

struct Solution 
{
    int rows, cols, numDrones, turns, maxPayLoad;

    vector<Drone> drones;
    vector<Order> ordersVec;
    vector<Warehouse> warehouses;
    vector<House> houses;
    vector<Product> products; 

    int numProductTypes;
    int numWarehouses; 
    int numOrders;

    Solution(ifstream &ifs)
    {
        string s;
        stringstream ss;
        getline(ifs, s);
        ss << s;

        ss >> this->rows >> this->cols >> this->numDrones >> totalTurns >> this->maxPayLoad;


        getline(ifs, s); // num types of products 
        numProductTypes = stoi(s);

        getline(ifs, s); // all of the product values 
        // below loop reads through each of the products weights
        for (int i = 0; i < numProductTypes; i++)
        {
            int tempWeight; 
            ss << s;
            int tempValue = stoi(s);
            Product p(tempValue);
            products.push_back(p);
        }


        // Warehouse part 
        getline(ifs, s);
        numWarehouses = stoi(s);
        for (int i = 0; i < numWarehouses; i++)
        {
            getline(ifs, s); // s contains x and y location 
            ss << s; // x location in ss right now 
            int xLoc = stoi(ss.str());
            ss << s; // y location in ss
            int yLoc = stoi(ss.str());

            vector<int> items;
            getline(ifs, s);
            for (int i = 0; i < numProductTypes; i++)
            {
                ss << s; // item
                items.push_back(stoi(ss.str()));
            }         
            Warehouse tempWarehouse(intp(xLoc, yLoc), items);          
            warehouses.push_back(tempWarehouse);
        }

        // // s contains numOrders
        getline(ifs, s); 
        numOrders = stoi(s);

        for (int i = 0; i < numOrders; i++)
        {
            getline(ifs, s); // s contains x and y coordinate for order
            ss << s; 
            int xLoc = stoi(ss.str());
            ss << s;
            int yLoc = stoi(ss.str());

            getline(ifs, s); // s contains number of items in order 
            int numItems = stoi(s);

            getline(ifs, s);
            vector<int> orders(numItems, 0);
            for(int i = 0; i < numItems; i++)
            {
                ss << s;
                orders[stoi(ss.str())]++;
            }
            Order tempOrder(pair<int,int>(xLoc, yLoc), orders);
            ordersVec.push_back(tempOrder);
        }
    }
    
    // Amar and Jewel will write the main algorithm here


    

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
    ifstream input("input.txt");

    double test = GetDistance(pair<int, int>(0,0), pair<int, int>(4,4));
    std::cout << test << std::endl;

    // Create a solution vector as well that takes in all files 
    Solution solver(input);

    return 0;
}