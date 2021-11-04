/*
Group Members Name and Id:
1) Asadulla Al Mamun (21-45862-3)
2) Abu Sayeed Rifat (21-45863-3)
3) Ehsanul Karim (21-45859-3)
*/

#include<iostream>
using namespace std;
int main(){
string foodCourtName="Welcome to Chef's Home Food Court!";
cout<<"\t\t\t"<<foodCourtName<<"\n"<<endl;
string name;
string foodName;
//back to menu array
char letter;
//end of menu array
//Varient declare
int varient;
//end
//burger price
int burger1=200;
int burger2 = 250;
//burger price ending

//burger Quantity
int quantityOfBurger;
//end of burgerQuantity

//total price of burger
double priceOfBurger;
//ending of total price of burger

//declaration of vat
double vat = 0.05;
double totalVat;
//ending declaration of vat

//price of burger after vat
double totalPriceOfBurger;
//ending of burger

//Price of Pizza;
int pizza1 = 1034;
int pizza2 = 1500;

//end of pizza price
//Quantity Of Pizza
int quantityOfPizza;
//end Of Quantity Of Pizza

//total price of pizza
double priceOfPizza;
//ending of total price of pizza

//declaration of vat
//double vat = 0.05;
double totalVatOfPizza;
//ending declaration of vat

//price of pizza after vat
double totalPriceOfPizza;
//ending of pizza

//start of shawarma

//Price of Shawarma;
int shawarma1= 150;
int shawarma2= 100;

//end of Shawarma price
//Quantity Of shawarma
int quantityOfShawarma;
//end Of Quantity Of Shawarma

//total price of shawarma
double priceOfShawarma;
//ending of total price of shawarma

//declaration of vat
//double vat = 0.05;
double totalVatOfShawarma;
//ending declaration of vat

//price of shawarma after vat
double totalPriceOfShawarma;
//ending of Shawarma


//Price of Sandwiche;
int sandwiche= 120;
//end of Sandwiche price
//Quantity Of Sandwiche
int quantityOfSandwiche;
//end Of Quantity Of Sandwiche

//total price of Sandwiche
double priceOfSandwiche;
//ending of total price of Sandwiche

//declaration of vat
//double vat = 0.05;
double totalVatOfSandwiche;
//ending declaration of vat

//price of Sandwiche after vat
double totalPriceOfSandwiche;
//ending of Sandwiche

//Price of chowmein;
int chowmein= 320;
//end of chowmein price
//Quantity Of chowmein
int quantityOfChowmein;
//end Of Quantity Of chowmein

//total price of chowmein
double priceOfChowmein;
//ending of total price of Chowmein

//declaration of vat
//double vat = 0.05;
double totalVatOfChowmein;
//ending declaration of vat

//price of Chowmeinafter vat
double totalPriceOfChowmein;
//ending of Chowmein



//test declare
double priceOfAll;
//end test declare

cout<<"Please Enter Your Name For Order : ";
getline(cin,name);
starting :
double price[100];
string menu[100]={"\0","Burger","Pizza","Shawarma","Sandwich","Chowmein"};
cout<<"*****************************Food Menu********************************\n" <<endl;
for(int i=1;i<=5;i++){

    cout<<i<<")"<<menu[i]<<endl;
}
cout<<"\n*****************************Food Menu********************************" <<endl;
cout<<"Please Type Food Name For Order: ";
cin>>foodName;;
//For Burger

if(foodName == "Burger"||foodName =="burger"){
    cout<<"What Kind Of Burger You Want to Order "<<name<<" " <<"Sir:"<<endl;
    string burgerVarient []={"\0","Chicken Burger","Beef Burger"};

    for(int i=1;i<=2;i++){
        cout<<i<<")"<<burgerVarient[i]<<endl;

    }
     cout<<"Enter Number for Burger Price: ";
     cin>>varient;
     if(varient ==1){
        cout<<"Chicken Burger price is: "<<burger1<<endl;
        cout<< "Please Select Your Quantity: ";
        cin>>quantityOfBurger;
        priceOfBurger = burger1*quantityOfBurger;
        totalVat = priceOfBurger*vat;
        totalPriceOfBurger = priceOfBurger + totalVat;
        cout<<"Your Net Payable Amount (incluting 5% VAT) Is: "<<totalPriceOfBurger<<" "<<"BDT"<<endl;
        price[0]=totalPriceOfBurger;
        //cout<<price[0]<<endl;
        cout<<"Would You Like To Order Anything Else "<<name<<" "<<"Sir! Then Type Y Otherwise N"<<endl;
        cin>>letter;
        if(letter =='Y'|| letter=='y'){
            goto starting;
        }
        else if(letter=='N'||letter=='n'){
             cout<<"Thank You For Your Order!"<<endl;
            priceOfAll =price[0] +price[1]+price[2]+price[3]+price[4];
            cout<<"Your Net Payable Amount (incluting 5% VAT) Is: "<<priceOfAll<<" "<<"BDT"<<endl;
        }
        else{
            cout<<"You Typed Wrong Code!"<<endl;
        }
        }

     else if(varient ==2){
        cout<<"Beef Burger price is: "<<burger2<<endl;
        cout<< "Please Select Your Quantity: ";
        cin>>quantityOfBurger;
        priceOfBurger = burger2*quantityOfBurger;
        totalVat = priceOfBurger*vat;
        totalPriceOfBurger = priceOfBurger + totalVat;
        price[0]=totalPriceOfBurger;
        //cout<<price[0]<<endl;
        cout<<"Your Net Payable Amount (including 5% VAT) Is: "<<totalPriceOfBurger<<" "<<"BDT"<<endl;
        cout<<"Would You Like To Order Anything Else "<<name<<" "<<"Sir! Then Type Y Otherwise N"<<endl;
        cin>>letter;
        if(letter =='Y'|| letter=='y'){
            goto starting;
        }
        else if(letter=='N'||letter=='n'){
             cout<<"Thank You For Your Order!"<<endl;
            priceOfAll =price[0] +price[1]+price[2]+price[3]+price[4];
            cout<<"Your Net Payable Amount (incluting 5% VAT) Is: "<<priceOfAll<<" "<<"BDT"<<endl;
        }

    }

     else{
        cout<<"You Typed Wrong Varient Number"<<endl;
     }
     }



//End Of Burger


//Starting of Pizza
if(foodName=="Pizza"|| foodName =="pizza") {
    cout<<"What Kind Of Pizza You Want to Order "<<name<<" " <<"Sir:"<<endl;
    string PizzaVarient []={"\0","Cheese Pizza","BBQ Chicken Pizza"};

    for(int i=1;i<=2;i++){
        cout<<i<<")"<<PizzaVarient[i]<<endl;

    }
     cout<<"Enter Number for Pizza Price: ";
     cin>>varient;
    if(varient ==1){
        cout<<"Cheese Pizza price is: "<<pizza1<<endl;
        cout<< "Please Select Your Quantity: ";
        cin>>quantityOfPizza;
        priceOfPizza = pizza1*quantityOfPizza;
        totalVatOfPizza = priceOfPizza*vat;
        totalPriceOfPizza = priceOfPizza + totalVatOfPizza;
        cout<<"Your Net Payable Amount (including 5% VAT) Is: "<<totalPriceOfPizza<<" "<<"BDT"<<endl;
        price[1]=totalPriceOfPizza;
        //cout<<price[0]<<endl;
        cout<<"Would You Like To Order Anything Else "<<name<<" "<<"Sir! Then Type Y Otherwise N"<<endl;
        cin>>letter;
        if(letter =='Y'|| letter=='y'){
            goto starting;
        }
        else if(letter=='N'||letter=='n'){
            cout<<"Thank You For Your Order!"<<endl;
            priceOfAll =price[0] +price[1]+price[2]+price[3]+price[4];
            cout<<"Your Net Payable Amount (including 5% VAT) Is: "<<priceOfAll<<" "<<"BDT"<<endl;
        }
        else{
            cout<<"You Typed Wrong Code!"<<endl;
        }
    }

    //varient 2 of pizza
    else if(varient ==2){
        cout<<"Cheese Pizza price is: "<<pizza2<<endl;
        cout<< "Please Select Your Quantity: ";
        cin>>quantityOfPizza;
        priceOfPizza = pizza2*quantityOfPizza;
        totalVatOfPizza = priceOfPizza*vat;
        totalPriceOfPizza = priceOfPizza + totalVatOfPizza;
        cout<<"Your Net Payable Amount (including 5% VAT) Is: "<<totalPriceOfPizza<<" "<<"BDT"<<endl;
        price[1]=totalPriceOfPizza;
        //cout<<price[0]<<endl;
        cout<<"Would You Like To Order Anything Else "<<name<<" "<<"Sir! Then Type Y Otherwise N"<<endl;
        cin>>letter;
        if(letter =='Y'|| letter=='y'){
            goto starting;
        }
        else if(letter=='N'||letter=='n'){
            cout<<"Thank You For Your Order!"<<endl;
            priceOfAll =price[0] +price[1]+price[2]+price[3]+price[4];
            cout<<"Your Net Payable Amount (including 5% VAT) Is: "<<priceOfAll<<" "<<"BDT"<<endl;
        }
        else{
            cout<<"You Typed Wrong Code!"<<endl;
        }
    }
}

//starting Of Shawarma

    if(foodName=="Shawarma"|| foodName =="shawarma"){
    string ShawarmaVarient[]={"\0","Beef Shawarma","Chicken Shawarma"};

    for(int i=1;i<=2;i++){
    cout<<i<<")"<<ShawarmaVarient[i]<<endl;
    }
    cout<<"Enter Number for Shawarma Price: ";
     cin>>varient;
    if(varient ==1){
        cout<<"Beef Shawarma price is: "<<shawarma1<<endl;
        cout<< "Please Select Your Quantity: ";
        cin>>quantityOfShawarma;
        priceOfShawarma = shawarma1*quantityOfShawarma;
        totalVatOfShawarma = priceOfShawarma*vat;
        totalPriceOfShawarma = priceOfShawarma + totalVatOfShawarma;
        cout<<"Your Net Payable Amount (incluting 5% VAT) Is: "<<totalPriceOfShawarma<<" "<<"BDT"<<endl;
        price[2]=totalPriceOfShawarma;
        //cout<<price[0]<<endl;
        cout<<"Would You Like To Order Anything Else "<<name<<" "<<"Sir! Then Type Y Otherwise N"<<endl;
        cin>>letter;
        if(letter =='Y'|| letter=='y'){
            goto starting;
        }
        else if(letter=='N'||letter=='n'){
            priceOfAll =price[0] +price[1]+price[2]+price[3]+price[4];
            cout<<"Your Net Payable Amount (incluting 5% VAT) Is: "<<priceOfAll<<" "<<"BDT"<<endl;
            cout<<"Thank You For Your Order!"<<endl;
        }
        else{
            cout<<"You Typed Wrong Code!"<<endl;
        }

    }
    else if(varient ==2){
        cout<<"Chikcken Shawarma price is: "<<shawarma2<<endl;
        cout<< "Please Select Your Quantity: ";
        cin>>quantityOfShawarma;
        priceOfShawarma = shawarma2*quantityOfShawarma;
        totalVatOfShawarma = priceOfShawarma*vat;
        totalPriceOfShawarma = priceOfShawarma + totalVatOfShawarma;
        cout<<"Your Net Payable Amount (including 5% VAT) Is: "<<totalPriceOfShawarma<<" "<<"BDT"<<endl;
        price[2]=totalPriceOfShawarma;
        //cout<<price[0]<<endl;
        cout<<"Would You Like To Order Anything Else "<<name<<" "<<"Sir! Then Type Y Otherwise N"<<endl;
        cin>>letter;
        if(letter =='Y'|| letter=='y'){
            goto starting;
        }
        else if(letter=='N'||letter=='n'){
            priceOfAll =price[0] +price[1]+price[2]+price[3]+price[4];
            cout<<"Your Net Payable Amount (incluting 5% VAT) Is: "<<priceOfAll<<" "<<"BDT"<<endl;
            cout<<"Thank You For Your Order!"<<endl;
        }
        else{
            cout<<"You Typed Wrong Code!"<<endl;
        }

    }


    }
    //End Of Shawarma

    //Start of Sandwiche
    if(foodName=="Sandwich"||foodName =="sandwich"){
       cout<<"Sandwich price is: "<<sandwiche<<endl;
        cout<< "Please Select Your Quantity: ";
        cin>>quantityOfSandwiche;
        priceOfSandwiche = sandwiche*quantityOfSandwiche;
        totalVatOfSandwiche = priceOfSandwiche*vat;
        totalPriceOfSandwiche = priceOfSandwiche+ totalVatOfSandwiche;
        cout<<"Your Net Payable Amount (including 5% VAT) Is: "<<totalPriceOfSandwiche<<" "<<"BDT"<<endl;
        price[3]=totalPriceOfSandwiche;
        //cout<<price[0]<<endl;
        cout<<"Would You Like To Order Anything Else "<<name<<" "<<"Sir! Then Type Y Otherwise N"<<endl;
        cin>>letter;
        if(letter =='Y'|| letter=='y'){
            goto starting;
        }
        else if(letter=='N'||letter=='n'){
            priceOfAll =price[0] +price[1]+price[2]+price[3]+price[4];
            cout<<"Your Net Payable Amount (including 5% VAT) Is: "<<priceOfAll<<" "<<"BDT"<<endl;
            cout<<"Thank You For Your Order!"<<endl;
        }
        else{
            cout<<"You Typed Wrong Code!"<<endl;
        }
    }
    //end of sandwiche
    //start of chowmein
    if(foodName =="Chowmein"||foodName =="chowmein"){
       cout<<"Chow mein price is: "<<chowmein<<endl;
        cout<< "Please Select You'r Quantity: ";
        cin>>quantityOfChowmein;
        priceOfChowmein = chowmein*quantityOfChowmein;
        totalVatOfChowmein = priceOfChowmein*vat;
        totalPriceOfChowmein = priceOfChowmein+ totalVatOfChowmein;
        cout<<"Your Net Payable Amount (incluting 5% VAT) Is: "<<totalPriceOfChowmein<<" "<<"BDT"<<endl;
        price[4]=totalPriceOfChowmein;
        //cout<<price[0]<<endl;
        cout<<"Would You Like To Order Anything Else "<<name<<" "<<"Sir! Then Type Y Otherwise N"<<endl;
        cin>>letter;
        if(letter =='Y'|| letter=='y'){
            goto starting;
        }
        else if(letter=='N'||letter=='n'){
            priceOfAll =price[0] +price[1]+price[2]+price[3]+price[4];
            cout<<"Your Net Payable Amount (including 5% VAT) Is: "<<priceOfAll<<" "<<"BDT"<<endl;
            cout<<"Thank You For Your Order!"<<endl;
        }
        else{
            cout<<"You Typed Wrong Code!"<<endl;
        }
    }



return 0;
}
