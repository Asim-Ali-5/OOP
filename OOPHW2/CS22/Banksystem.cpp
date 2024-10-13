#include<iostream>

using namespace std;

class Bank_balance
{
private:
    string employee_name;
    static int balance;
    static int Total_number_employee;

public:
    Bank_balance(string employee_name, int balance)
    {
        this->employee_name = employee_name;
        this->balance = balance;
        Total_number_employee++;
    }
    void deposit(int amount)
    {
        if (amount > 0)
        {
           
            balance += amount;
            cout<<"Deposited successfully."<<endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount<=balance)
        {
            
            balance -= amount;
            cout<<"Withdrawn successfully."<<endl;
        }
        else{
            cout<<"Invalid amount "<<endl;
        }
    }
    void Display_balance()
    {
        cout << "Mr " << employee_name <<",Your current balance is : " << balance << endl;
    }
};
int Bank_balance::balance = 0;
int Bank_balance::Total_number_employee = 0;
int main(){
    string name;
    int balance;
    cout<<"Enter your name and initial_balance. "<<endl;
    if(balance>=0){
    cin>>name>>balance;
    }
    else {
        cout<<"Initial balance cannot be negative. "<<endl;
    }

    Bank_balance b1(name,balance);
  
    b1.Display_balance();
    cout<<"Enter your deposited amount."<<endl;
    cin>>balance;
    b1.deposit(balance);
   
    
    cout<<"Enter your withdrawn amount."<<endl;
    cin>>balance;
    b1.withdraw(balance);
    
    
    cout<<"After your deposition and withdraw."<<endl;
    b1.Display_balance();
    }