#include <iostream>
#include <string.h>
#include "miniproject_class_headers.h"    //To include the Header file containing the class defn.
#define TRUE 1
using namespace std;

void Accessories::disp()     //Function to display the list of accessories
{
    cout<<"ACCESSORIES LIST"<<endl;
    cout<<"1. LED Lights : Rs 2500"<<endl;
    cout<<"2. Touchscreen TV : Rs 5000"<<endl;
    cout<<"3. Phone Mount :Rs 500"<<endl;
    cout<<"4. Dashboard Camera : Rs 1750"<<endl;
    cout<<"5. Parking Sensors : Rs 1200"<<endl;
    cout<<"6. Seat Cover : Rs 3000"<<endl;
    
    cout<<"Choose Your Accessory : "<<endl;
    cin>> item;
   
 
    switch(item)      //Switch case to choose between the list of accessories
    {
        case 1: cout << "LED Lights"<<endl;
                strcpy (accn, "LED_Lights");
                cost=LED;
                calculate();
                fin_choice(cost);
                strcpy (type, "Buy_Accessories");
                bill(type, accn, cost );
                break;
                
        case 2: cout << "Touchscreen TV"<<endl;
                strcpy (accn, "Touchscreen_TV");
                cost=TV;
                calculate();
                fin_choice(cost);
                strcpy (type, "Buy_Accessories");
                bill(type, accn, cost );
                break;
                
        case 3: cout << "Phone Mount"<<endl;
                strcpy (accn, "Phone_Mount");
                cost=PMount;
                calculate();
                fin_choice(cost);
                strcpy (type, "Buy_Accessories");
                bill(type, accn, cost );
                break;
        
        case 4: cout << "Dashboard Camera"<<endl;
                strcpy (accn, "Dashboard_Camera");
                cost=Camera;
                calculate();
                fin_choice(cost);
                strcpy (type, "Buy_Accessories");
                bill(type, accn, cost);
                break;
        
        case 5: cout << "Parking Sensors"<<endl;
                strcpy (accn, "Parking_Sensors");
                cost=sensor;
                calculate();
                fin_choice(cost);
                strcpy (type, "Buy_Accessories");
                bill(type, accn, cost);
                break;
        
        case 6: cout << "Seat Covers"<<endl;
                strcpy (accn, "Seat_Covers");
                cost=cover;
                calculate();
                fin_choice(cost);
                strcpy (type, "Buy_Accessories");
                bill(type, accn, cost );
                break;
    
     }
 }

void Accessories::calculate()   //Function to calculate the cost of accessories
{
    cout<<"\nEnter the quantity :"<<endl;
    cin>>count;
    
    cout<<"Cost is : ";
    cost=cost*count;
    cout<<cost<<endl;
} 