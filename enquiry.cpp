#include <iostream>
#include <string.h>
#include "miniproject_class_headers.h"
#define TRUE 1
using namespace std;

int enquiry::en()      //provides the ENQUIRY MENU for selecting your enquiry
{
    do{
    cout << "*****ENQUIRY MENU*****" << endl;
    cout << "1. PRINT LIST OF AVAILABLE CARS" << endl;
    cout << "2. PRINT LIST OF ACCESORIES" << endl;
    cout << "3. EXIT" << endl;
    cout << "PLEASE ENTER YOUR CHOICE: " << endl;
    cin >> op;
    switch(op)
    {
        case 1: cout << "THE LIST OF AVAILABLE CARS ARE:" << endl;
                for(i = 0; i<5;i++)
                {
                    cout << i+1 << ". " << car_list[i] << endl;
                }
                break;
        case 2: cout << "THE LIST OF ACCESSORIES ARE:" << endl;
                cout<<"1. LED Lights"<<endl;
                cout<<"2. Touchscreen TV"<<endl;
                cout<<"3. Phone Mount"<<endl;
                cout<<"4. Dashboard Camera"<<endl;
                cout<<"5. Parking Sensors"<<endl;
                cout<<"6. Seat Cover"<<endl;
                break;
        case 3: cout << "WOULD YOU LIKE TO LOGIN AND CONTINUE FURTHER?" << endl;
                cout << "PRESS 1 TO CONTINUE AND 0 TO TERMINATE SESSION." << endl;
                cout << "ENTER YOUR CHOICE" << endl;
                cin >> u;
                if(u==1)
                {
                    return u;
                }
                else if(u == 0)
                {
                    cout << "SESSION ENDED" << endl;
                    return u;
                }
                else
                {
                    cout << "PLEASE ENTER EITHER 1 OR 0. Thank You" << endl;
                }
                break;
        default: cout << "ERROR! PLEASE ENTER AN APPROPRIATE VALUE." << endl;
    }
    }while(op!=3 && u == 1 || u == 0);   
}