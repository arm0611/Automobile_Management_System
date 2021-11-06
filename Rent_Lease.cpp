#include <iostream>
#include <string.h>
#include "miniproject_class_headers.h"     //To include the Header file containing the class defn.
#define TRUE 1
using namespace std;

void Rent_Lease::rent(buy_sell b)      //Function to Rent a car
{
    for (int i = 0 ; i < 5 ; i++ )
    {
        cout << i+1 << ".  " << b.car_list[i] << endl;
    }
    cout<<"Choose the car you want to rent:"<<endl;
    cin>>select;
    strcpy(selection, b.car_list[select-1] );
    amount = b.car_price[select-1];
    cout<<endl;
    
    cout<<"Enter the duration of the rent:"<<endl;
    cin>>days;
    cout<<endl;
    if (days > 30)
    {
        cout<<"Invalid duration"<<endl;
        exit(0);
    } 
    cout<<"The car has been rented for "<<days<<" days"<<endl<<endl;
    
    if (1<days && days<5) 
    {
        cost_rl = 0.05 * amount;
        cout<<"The cost of rent is "<< cost_rl <<endl;
    } 
    else if (6<days && days<12) 
    {
        cost_rl = 0.07*amount;
        cout<<"The cost of rent is "<< cost_rl <<endl;
    } 
    else if (13<days && days<20) 
    {
        cost_rl = 0.09*amount;
        cout<<"The cost of rent is "<< cost_rl <<endl;
    } 
     else 
    {
        cost_rl = 0.12*amount;
        cout<<"The cost of rent is "<< cost_rl <<endl;
    }
   
}

void  Rent_Lease::lease(buy_sell s)    //Function to Lease a car
{
    for (int i = 0 ; i < 5 ; i++ )
    {
        cout << i+1 << ".  " << s.car_list[i] << endl;
    }
    cout<<"Choose the car you want to lease:"<<endl;
    cin>>select;
    cout<<endl;
    strcpy(selection , s.car_list[select-1]) ;
    amount = s.car_price[select-1];
    cout<<endl;

    
    cout<<"Enter for how many years you want to lease the car :"<<endl;
    cin>>years;
    cout<<endl;
     if (years > 6)
    {
        cout<<"Invalid duration"<<endl;
        exit(0);
    } 
    cout<<"The car has been leased for "<<years<<" years"<<endl;
    
   if (1<=years && years<=2) 
    {
        cost_rl = 0.15*amount;
        cout<<"The cost of the lease is "<< cost_rl <<endl;
    } 
    else if (3<=years && years<=4) 
    {
        cost_rl = 0.2* amount;
        cout<<"The cost of the lease is "<< cost_rl <<endl;
    }
     else 
    {
        cost_rl = 0.25*amount;
        cout<<"The cost of the lease is "<< cost_rl <<endl;
    }
}

void Rent_Lease::display()      //Function to display a menu of options
{
    cout<<"MENU"<<endl; 
    cout <<"1.Rent a car" <<endl;
    cout <<"2.Lease a car" <<endl;
    cout <<"3.Exit" << endl;
    cout <<"What would you like to choose?"<<endl ;
    cin >> choice;
    cout << endl;
    buy_sell b_s;
    
    switch(choice)      //switch case to choose between the options
    {
        case 1: rent(b_s); 
                fin_choice(amount);
                strcpy (type, "Renting_Car");
                bill(type, selection , cost_rl );
                break;
        case 2: lease(b_s);
                fin_choice(amount);
                strcpy (type, "Leasing_Car");
                bill(type, selection , cost_rl);
                break;
        case 3: cout <<"Thank you availing our services"<< endl;
                break;
        default: cout <<"Error"<<endl;
    }
}