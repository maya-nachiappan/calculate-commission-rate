//
//  CIS25 - assignment 10
//
//  Created by maya nachiappan on 9/15/24.
//
// program to calculate commission rate based on the value of sales

#include <iostream>
using namespace std;
int main ()
{
    double sales;
    double rate;
    double commission;
    
    cout <<"Enter the value of sales: " << endl;
    cin >> sales;
    
    // check for error input
    if (sales<0)
    {
        cout << "The sales value cannot be negative" << endl;
        return 1;
    }
    
    // check sales value and calculate commission rate
    
    if (sales >15000)
    {
        rate = 0.20;
    }
    else if (sales>= 10000)
    {
        rate = 0.15;
    }
    else
    {
        rate = 0.10;
    }
    
    commission = sales * rate;
    cout <<"The comission rate is: " << rate * 100 << "%" << endl;
    cout << "The commission for the sales value is: "<< commission << endl;
    return 0;
    }

