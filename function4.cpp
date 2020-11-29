#include<iostream>
#include<stdlib.h>
using namespace std;

void showmenu(){

cout<<" ********Menu********"<<endl;
cout<<" 1.Check Balance"<<endl;
cout<<" 2.Deposit Money"<<endl;
cout<<" 3.Withdraw Money"<<endl;
cout<<" 4. Exit"<<endl;
cout<<"*******************"<<endl;



}

int main(){


   double balance=5000;
   int options;



  do{


   showmenu();
   cout<<"Enter your Option: ";
   cin>>options;
   //system("cls");



   switch(options){

   case 1: cout<<"Your balance is: "<<balance<<endl;
   break;
   case 2:
      double deposit;
      cout<<"Enter your deposit amount :";
      cin>>deposit;
      balance+=deposit;
      cout<<"After deposit your new balance is: "<<balance<<endl;
      break;

   case 3:
      double withdraw;
      cout<<"Enter your amount to Withdraw: ";
      cin>>withdraw;
      if(withdraw<=balance){
      balance-=withdraw;

      cout<<"Your withdraw has been completed. and remaining balance: "<< balance<<endl;
      }

      else
         cout<<"You have not sufficient balance to Withdraw."<<endl;
      break;


      }

   }while(options!=4);

   //default:
     //cout<<"Wrong try!!!";




//balance,deposit,withdraw,showmenu;






}
