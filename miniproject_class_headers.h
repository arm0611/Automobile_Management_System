class Login  // login class definition
{
public:
    int flag = 0, st_counter = 0, ch, x = 0;
    char username[100], password[100],st_un[100][100] , st_password[100][100];

    int input();
    void login();
    void sign_up();
    void encrypt();
    int validate();
    
};

class Finance // finance class definition
{
public:
    float pr;

    void fin_choice(float p);
    
    void Pay();
    void Pay(long int cn);
    void Pay(char bn[50], long int chn);
    void Pay (int crs);
    void bill(char type[25] , char name[30] , float pri);
    
};

// buy_sell class definition
class buy_sell : public Finance   // finance class is inherited by buy_sell 
{
public:
    int i, j;			
    int b_s_ch;			 
    int select;			
    
    char car_name[30], type[25];
    float price;
    
    char car_list[5][25] = { "Tata_Punch", "Suzuki_Swift", "Toyota_Innova" , "Renault_Kwid", "Kia_Seltos" };
    float car_price[5]= {500000, 700000, 1800000, 400000, 800000 }; 


    void choice ();
    void buy ();
    void sell ();
    friend class Rent_Lease;

};

// Rent_Lease class definition
class Rent_Lease : public Finance   // finance class is inherited by Rent_Lease
{
private:
    int choice, select ;
    float days, years, amount,cost_rl;
    char selection[25], type[25];
    
public:
    void rent(buy_sell b);
    void lease(buy_sell s);
    void display();
    
};

class Accessories : public Finance  // Accessories class definition
{
    public:
        float LED= 2500;
        float TV = 5000;
        float PMount = 500;
        float Camera = 1750;
        float sensor = 1200;
        float cover = 3000;
        int item, count;
        float cost;
        char accn[30], type[25];
        
        void disp();
        

    void calculate();
        
};

// enquiry class definition
class enquiry: protected buy_sell, protected Accessories   // enquiry class inherits buy_sell and Accessories
{   
private:
    int op;
    int i,u;

public:
    int en();
};


