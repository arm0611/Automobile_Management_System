#include <iostream>
#include <string.h>
#include "miniproject_class_headers.h"   // to include the header file containing class definitions
#define TRUE 1
using namespace std;

int Login::input ()    //function to choose whether to login/sign-up/exit
{
do
    {
        cout << "1. Login" << endl;
        cout << "2. Sign Up" << endl;
        cout << "3. Exit" << endl;
        cout << "Please make a choice" << endl;
        cin >> ch;
        
        switch (ch)
        {
        case 1: login ();
                if (x == 1)     //if login successful
                {
                  return x;
                }
                break;
                
        case 2: sign_up ();
                break;
                
        case 3: cout << "Session Ends" << endl;
                break;
                
        default: cout << "Error! Please enter a suitable value. " << endl;
        }
    } while (ch != 3);

}

void Login::login ()    //function to login
{
    int y;
    cout << "Please enter your username: " << endl;
    cin >> username;
    
    cout << "Please enter your password: " << endl;
    cin >> password;
    
    encrypt ();   //function to encrypt entered password
    
    y = validate ();   // function to check if account exists
    
    if (y == 1)
    {
        x = 1;
    }
    else if (y == 2)
    {
        cout << "Incorrect Password entered. Please try again !" << endl;
    }
    else
    {
        cout << "Login Failed ! Please create an account first !" << endl;
    }
}

void Login::sign_up ()   //function to create a new account
{
    cout << "Please enter your username: " << endl;
    cin >> username;
    cout << "Please enter your password: " << endl;
    cin >> password;
    encrypt ();
    strcpy (st_un[st_counter], username);    //storing username in list of usernames
    strcpy (st_password[st_counter], password);   //storing password in list of passwords
    st_counter++;                            // counter incremented
    cout << "Your account has been successfully created. Please log in once you reach the main screen." << endl;
}

void Login::encrypt ()       // function to encrypt the password
{
    int e;
    int n = strlen (password);
    for (int i = 0; i < n; i++)
    {
      e = (int) password[i];
      e += 2;
      password[i] = (char) e;
    }
}

int Login::validate ()     // function to check if entered values are correct
{
    int no = 100;
    for (int i = 0; i < no; i++)
    {
        if (strcmp (st_password[i], password) == 0 && strcmp (st_un[i], username) == 0)
        {
          flag = 1;
          break;
        }
          else if (strcmp (st_un[i], username) == 0)
        {
          flag = 2;
          break;
        
        }
          else
        {
          flag = 0;
        }
    
    }
    return flag;
}
