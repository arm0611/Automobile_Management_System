#include <iostream>
#include <string.h>
#include <math.h>
#include "miniproject_class_headers.h"   // to include the header file containing class definitions
#define TRUE 1
using namespace std;
int ch;
void bsrlacch()     // to direct program flow further after logging in
{
    //class objects created
    buy_sell bs;
    Rent_Lease rl;
    Accessories acc;
    do
    {
        cout << "1. Buy/Sell " << endl;
        cout << "2. Rent/Lease" << endl;
        cout << "3. Accessories" << endl;
        cout << "4. Exit" << endl;
        cout << "Please make a choice: " ;
        cin >> ch;
        cout << endl;
        
        switch(ch)
        {
            case 1: bs.choice();
                    break;
            case 2: rl.display();
                    break;
            case 3: acc.disp();
                    break;
            case 4: cout << "Session Ends!" << endl;
                    break;
            default: cout << "Error! " <<endl;
        }
    }while (ch !=4);
}

int main()
{
    //class objects created
    Login l;
    enquiry e;
    

    int t, b;
    do
    {
    cout << "1. Login/Register" << endl;
    cout << "2. Enquiry" << endl;
    cout << "3. Exit" << endl;
    cout << "Please make a choice: " ;
    cin >> ch;
    cout << endl;
    
    switch(ch)
    {
        case 1: t = l.input();
                if(t == 1 )     // if login successful
                {
                    bsrlacch();
                }
                else
                {
                    ch = 3;
                }
                break;
                
        case 2: t = e.en();
                if (t == 1)    // if user wants to proceed further
                {
                    b = l.input();   // if login successful
                    if (b == 1)
                    {
                        bsrlacch();
                    }
                    else
                    {
                        ch = 3;
                    }
                }
                else
                {
                    ch = 3;
                }
                break;
        case 3: cout << "Session ends! Thank you for using our services " << endl;
                break;
        default: cout << "Error! " <<endl;
    }
    
    }while (ch !=3);
    
}
