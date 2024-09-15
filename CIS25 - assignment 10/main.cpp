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
    double sales, commissionRate, commission;
    cout <<"Enter the value of sales: " << endl;
    cin >> sales;
    
    if(sales<10000 && sales>0 )
    {
        commissionRate = 10/100;
    }
    else if (sales>= 10000 && sales <15000)
    {
        commissionRate = 15/100;
    }
    else if (sales>=15000)
    {
        commissionRate = 20/100;
    }
    else
    {
        cout << "you have not entered a valid sales value. please re-enter the sales value: " << endl;
        cin >> sales;
    }
    
    commission = sales*commissionRate;
    cout << "The commission for the sales value is: "<< commission << endl;
    return 0;
    }

