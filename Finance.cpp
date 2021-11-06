#include <iostream>
#include <string.h>
#include <math.h>
#include "miniproject_class_headers.h"   // to include the header file containing class definitions
#define TRUE 1
using namespace std;


void Finance::fin_choice(float p)    // to choose which method of payment
{
    int ch, x, cr_s;
    long int c_no, ch_no ;
    char ch_name[50];

    pr = p;
    cout << "1. Pay by Cash. " << endl;
    cout << "2. Pay by Card. " << endl;
    cout << "3. Pay by Cheque. " << endl;
    cout << "4. Pay via financing. " << endl;
    cout << "5. Exit. " << endl;
    cout << "Please make a choice. " << endl;
    cin >> ch;

    switch (ch)
    {
    case 1: Pay();
            break;
    
    case 2: cout << "Please enter your card number: " << endl ;
            cin >> c_no;
            Pay(c_no);
            break;
    
    case 3: cout << "Please enter the bank from which cheque is being issued: " << endl;
            cin >> ch_name;
            cout << "Please enter cheque number: " << endl;
            cin >> ch_no;
            Pay(ch_name, ch_no);
            break;
    case 4: cout << " Please enter your CIBIL credit score: " << endl;
            cin >> cr_s;
            Pay (cr_s);
            break;
    case 5: cout << "Session ended! Thank you!" << endl;
            break;
    default: cout << "Error! Please enter correct value." << endl;
    }

    
    
}

void Finance::Pay()    // paying by cash
{
    cout << "Thank you for paying Rs. " << pr << "by cash." << endl;        
}

void Finance::Pay(long int cn)   // paying by card
{
    int cvv,otp;
    cout << "Your card number is: " << cn << endl;
    cout << "Please enter your cvv: " << endl;
    cin >> cvv;
    cout << "Please enter your OTP: " << endl;
    cin >> otp;
    cout << "Transaction successful ! " << endl;

}

void Finance::Pay(char bn[50], long int chn)   // paying by cheque
{
    cout << "Your cheque issued under " << bn << "bank with number: "<< chn  << "will be cashed in 7-12 business days."<< endl;
}

void Finance::Pay (int crs)    // financing
{
    if (crs <549)
    {
        cout << "Your credit score is poor! " << endl;
        float intrst = 0.18;
        cout << "Your monthly interest rate is: "<< (intrst*100) << "percent" << endl;
        float downpayment = 0.7 * pr;
        cout << "You need to pay Rs. " << downpayment << "as downpayment" << endl;
        float left = pr - downpayment;
        float emi = (left * intrst * pow(1 + intrst, 24))/ (pow(1+intrst, 24)-1);
        cout << "You need to pay " << emi << "for the next 2 years. " << endl;
    }
    else if (550 < crs < 749)
    {
        cout << "Your credit score is good! " << endl;
        float intrst = 0.07;
        cout << "Your monthly interest rate is: "<< (intrst*100) << "percent" << endl;
        float downpayment = 0.5 * pr;
        cout << "You need to pay Rs. " << downpayment << "as downpayment" << endl;
        float left = pr - downpayment;
        float emi = (left * intrst * pow(1 + intrst, 24))/ (pow(1+intrst, 24)-1);
        cout << "You need to pay " << emi << "for the next 2 years. " << endl;
    }
    else 
    {
        cout << "Your credit score is excellent! " << endl;
        float intrst = 0.04;
        cout << "Your monthly interest rate is: "<< (intrst*100) << "percent" << endl;
        float downpayment = 0.1 * pr;
        cout << "You need to pay Rs. " << downpayment << "as downpayment" << endl;
        float left = pr - downpayment;
        float emi = (left * intrst * pow(1 + intrst, 24))/ (pow(1+intrst, 24)-1);
        cout << "You need to pay " << emi << "for the next 2 years. " << endl;
    }
}

void Finance::bill(char type[25] , char name[30] , float pri )   // generating bill
{
    if(strcmp(type, "Buying_Car") == 0)
    {
        cout << "Receipt for " << type << endl;
        cout << "Car Name: " << name << endl;
        cout << "Car Price: " << pri << endl;
        cout << endl;
    }
    else if (strcmp(type, "Selling_Car") == 0)
    {
        cout << "Receipt for " << type << endl;
        cout << "Car Name: " << name << endl;
        cout << "Selling Price: " << pri << endl;   
        cout << endl;
    }
    else if (strcmp(type, "Renting_Car") == 0)
    {
        cout << "Receipt for " << type << endl;
        cout << "Car Name: " << name << endl;
        cout << "Rent Price: " << pri << endl; 
        cout << endl;
    }
    else if (strcmp(type, "Leasing_Car") == 0)
    {
        cout << "Receipt for " << type << endl;
        cout << "Car Name: " << name << endl;
        cout << "Lease Price: " << pri << endl; 
        cout << endl;
    }
    else if (strcmp(type, "Buy_Accessories") == 0)
    {
        cout << "Receipt for " << type << endl;
        cout << "Accessory Name: " << name << endl;
        cout << "Price: " << pri << endl; 
        cout << endl;
    }
}