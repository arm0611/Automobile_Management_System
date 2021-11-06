#include <iostream>
#include <string.h>
#include "miniproject_class_headers.h"
#define TRUE 1
using namespace std;

void buy_sell::choice ()  //this function will let you choose whether to buy or sell
{
    cout << "Enter option if you want to buy or Sell." << endl;
    cout << "Enter 1 if you want to buy." << endl;
    cout << "Enter 2 if you want to sell." << endl;
    cout << "Enter your option: ";
    cin >> b_s_ch;
    
    switch (b_s_ch)
    {
        case 1: buy ();  //buy function is invoked 
                fin_choice(price);
                strcpy (type, "Buying_Car");
                bill(type, car_name , price );   //sell function is invoked
                break;
        case 2: sell ();
                strcpy (type, "Selling_Car");
                bill(type, car_name , price );
                break;
        default: cout << "Please enter an option between 1 and 2. Thank you" << endl;
                
    }

}

void buy_sell::buy ()      //function for buying a car from a given list of cars
{
    for (int i = 0; i < 5; i++)
    {
        cout << i+1 << "  "<< car_list[i]<< "  " << car_price[i] << endl;;
    }
    
    cout << "\n\nPlease enter the car number from the list of cars: ";
    cin >> select;
    
    strcpy(car_name, car_list[select-1]);
    price = car_price[select-1];
    
    cout << "\nThe car you bought is " << car_list[select-1] << "worth Rs." << car_price[select-1] << endl;
}
    
void buy_sell::sell ()    //function for selling a car to customer using AMS 
{
    cout << "Enter the car name you want to sell: ";
    cin >> car_name;
    cout << "Enter the price at which you want to sell the car at: ";
    cin >> price;
}
