#include<iostream>
#include<stdlib.h>
using namespace std;

//void  introduceMe(string Name,string city,string email,int age);

void introduceMe(string name,string city,string email,int age=0){


cout<<"My name is "<<name<<endl;
cout<<"I am from "<<city<<endl;
if(age!=0){
   cout<<"I'm "<<age<<" years old"<<endl;
}

cout<<"My Email address is "<<email;


}


int main(){

  //introduceMe("Mahin");
  //cout<<endl;
  string name,city,email;
  int age;
  cout<<"Enter your name:"<<endl;
  cin>>name;

  cout<<"Enter your city:"<<endl;
  cin>>city;
  cout<<"Enter your Age"<<endl;
  cin>>age;
  cout<<"Enter your Email:"<<endl;
  cin>>email;


  introduceMe(name,city,email,age);

  cout<<endl;
  cout<<endl;

  //introduceMe(name,city,email);


}

