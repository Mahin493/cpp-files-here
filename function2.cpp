#include<iostream>
#include<stdlib.h>
using namespace std;

bool isprimenumber(int number){

 //bool isprime=true;
 for(int i=2;i<number;i++){
   if(number%i==0){
         return false;

      //isprime=false;
      //break;
   }

 }
  if(number==1){
   return false;
 }
 return true;



}


int main(){

/*int number;
cout<<"Enter a Number: ";
cin>>number;

bool isprimecheck=isprimenumber(number);


  if(isprimecheck){
   cout<<number<<" is a prime number";

  }
  else
   cout<<number<<" is not a prime number";
   */

   for(int i=1;i<=100;i++){
      bool isprime=isprimenumber(i);

      if(isprime){
         cout<<i <<" is a prime number"<<endl;
      }

   }

 }


