#include <iostream>
using namespace std;
//This app was created for Education Purposes and not for commercial Use❤️
void showMenu() {
     cout << "WELCOME TO ZEDCASH OFFICIAL" <<endl;
     cout << "**************MENU**************" <<endl;
     cout <<"1. Check Balance" << endl;
     cout <<"2. Deposit" << endl;
     cout <<"3. Withdraw" << endl;
     cout <<"4. Exit" << endl;
     cout << "********************************" <<endl;
     cout << "This App was Created by Wazingwa Mugala, a Software Engineer from Zambia 2023, Please still in Beta Mode" << endl;
}

int main()
{
    //Check balance, deposit, withdraw, show menu
    int option;
    double balance= 0;

    do{
    showMenu();
    cout<< "Choose an Option Please: ";
    cin >> option;
    system("cls");
    switch(option){
    case 1: cout<<" Your Balance is: K"<<balance<< endl;break;
    case 2: cout<<"How much would you like to deposit: "<<endl;
          double depositAmount;
          cin>> depositAmount;
          balance += depositAmount;
          break;
    case 3: cout<<"How much would you like to Withdraw: "<<endl;
          double withdrawAmount;
          cin>> withdrawAmount;
          if(withdrawAmount<=balance)
              balance -= withdrawAmount;

          else
            cout<<"Not enough money, Go and ask from Johab A.K.A MOAB^_~"<<endl;
          break;
    }
    } while(option!=4);
    system("pause>0");
}
