#include <iostream>

double balance=0.0;

void show(){
    std::cout<<R"(===== BANK SYSTEM =====
1. Deposit
2. Withdraw
3. Check Balance
4. Exit
)";
}

void deposit(double amount){
    if(amount<=0){
        std::cout<<"Please enter a positive number\n";
        return;
    }
    balance+=amount;
    std::cout<<"Deposit successful!\n";
}

void withdraw(double amount){
    if(amount<=0){
        std::cout<<"Please enter a positive number\n";
        return;
    }
    if(amount>balance){
        std::cout<<"Insufficient balance!\n";
        return;
    }
    balance-=amount;
    std::cout<<"Withdrawal successful!\n";
}

void withdraw(double amount1,double amount2){
    if(amount1<=0||amount2<=0){
        std::cout<<"Please enter positive numbers\n";
        return;
    }
    withdraw(amount1+amount2);
}

void showbalance(){
    std::cout<<"Your balance is $"<<balance<<'\n';
}

int main(){
    while(true){
        std::cout<<'\n';
        int choice{};
        show();
        std::cin>>choice;

        if(!std::cin){
            std::cout<<"Invalid input\n";
            break;
        }

        if(choice==1){
            double amount{};
            std::cout<<"Enter deposit amount: ";
            std::cin>>amount;
            if(!std::cin)break;
            deposit(amount);
        }
        else if(choice==2){
            int a{};
            std::cout<<"Withdraw 1 or 2 amounts? ";
            std::cin>>a;
            if(!std::cin)break;

            if(a==1){
                double amount{};
                std::cout<<"Enter amount: ";
                std::cin>>amount;
                if(!std::cin)break;
                withdraw(amount);
            }
            else if(a==2){
                double amount1{},amount2{};
                std::cout<<"Enter two amounts: ";
                std::cin>>amount1>>amount2;
                if(!std::cin)break;
                withdraw(amount1,amount2);
            }
            else{
                std::cout<<"Please enter 1 or 2\n";
            }
        }
        else if(choice==3){
            showbalance();
        }
        else if(choice==4){
            std::cout<<"Goodbye!\n";
            break;
        }
        else{
            std::cout<<"Please enter an integer from 1 to 4\n";
        }
    }
    return 0;
}