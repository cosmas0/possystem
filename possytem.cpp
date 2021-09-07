#include <iostream>
#include <cstring>
using namespace std;
int main() {

float price1 = 900.00;
float price2 = 7000.00;
float price3 = 4000.00;
float price4 = 1500.00;
float price5 = 2500.00;
float price6 = 14000.00;
float price7 = 22000.00;

int Qty;
float subtotal;
float totamt;
cout<<"------------------------------"<<endl;
cout<<"   WELCOME TO GROUP 14 STORES"<<endl;
cout<<"------------------------------"<<endl;
cout<<"          POS BILLING SYSTEM"<<endl;

cout<<"------------------------------"<<endl;
cout<<"**********Recipt No:POS 234 *****"<<endl;

cout<<"------------------------------"<<endl;
cout<<endl;

cout<<"Dettol Antibacterial"<<endl;
cout<<"Enter quantity: ";
cin>>Qty;
subtotal = price1 * Qty;
cout<<"#" << subtotal<<endl;
cout<<"-----------------------------"<<endl;

cout<<"Megir men wrist watch"<<endl;
cout<<"Enter quantity: ";
cin>>Qty;
subtotal = price2 * Qty;
cout<<"#" << subtotal<<endl;
cout<<"-----------------------------"<<endl;

cout<<"Dell Wireless Mouse"<<endl;
cout<<"Enter quantity: ";
cin>>Qty;
subtotal = price3 * Qty;
cout<<"#" << subtotal<<endl;

cout<<"-----------------------------"<<endl;

cout<<"Condesner Microphone"<<endl;
cout<<"Enter quantity: ";
cin>>Qty;
subtotal = price4 * Qty;
cout<<"#" << subtotal<<endl;

cout<<"-----------------------------"<<endl;

cout<<"Hair Closure"<<endl;
cout<<"Enter quantity: ";
cin>>Qty;
subtotal = price5 * Qty;
cout<<"#" << subtotal<<endl;

cout<<"-----------------------------"<<endl;

cout<<"Nike Element Backpack"<<endl;
cout<<"Enter quantity: ";
cin>>Qty;
subtotal = price6 * Qty;
cout<<"#" << subtotal<<endl;
cout<<"-----------------------------"<<endl;

cout<<"Bang and Olfren earpods"<<endl;
cout<<"Enter quantity: ";
cin>>Qty;
subtotal = price7 * Qty;
cout<<"#" << subtotal<<endl;
cout<<"-----------------------------"<<endl;


totamt = (price1 * Qty) +(price2 * Qty)+(price3 * Qty)+(price4 * Qty)+(price5 * Qty)+
(price6 * Qty)+(price7 * Qty);
cout<<"Total Amount of Goods Purchased : ";
cout<<"#" << totamt<<endl;
cout<<"------------------------------"<<endl;
cout<<"Thanks for your Patronage!!!"<<endl;

return 0;

}
