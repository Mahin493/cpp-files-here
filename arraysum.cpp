#include<iostream>
using namespace std;

int main(){
int marks[6];
double sum=0;
double average;
int counter=0;

for(int i=0;i<6;i++){
   cout<<"enter marks"<<i+1<<": ";

   cin>>marks[i];

}

for(int i=0;i<6;i++){

   cout<<marks[i]<<" ";

   sum+=marks[i];

   ++counter;

}

cout<<"Sum of marks is: "<<sum<<endl;
average=sum/counter;

cout<<"Average marks is: "<<average;



}
