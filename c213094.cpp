#include<bits/stdc++.h>
#include<fstream>
#include<iostream>
using namespace std;
class Product{
public:
    int ProductId;
    string ProductCategory,ProductName;

};
class SoldProduct:public Product{
public:
    string CustomerName;
    int CustomerId,Price;
};
class BoughtProduct : public Product{
public:
    string BuyerName;
    int BuyerId,Price;

};
int main()
{
    Product Pr1;
    SoldProduct Spr1;
    BoughtProduct Bpr1;

    ifstream prd("productIN.txt");
    prd>>Pr1.ProductId;
    prd.ignore();
    getline(prd,Pr1.ProductCategory);
    getline(prd,Pr1.ProductName);
    prd.close();
    ofstream prout("productOut.txt");
    prout<< "Product ID: "<<Pr1.ProductId<<endl;
    prout<< "Product Category: "<<Pr1.ProductCategory<<endl;
    prout<< "Product Name: "<<Pr1.ProductName<<endl;
    prout.close();

    ifstream byr("buyerIN.txt");;
    byr>>Bpr1.ProductId;
    byr.ignore();
    getline(byr,Bpr1.ProductCategory);
    getline(byr,Bpr1.ProductName);
    getline(byr,Bpr1.BuyerName);
    byr>>Bpr1.BuyerId;
    byr>>Bpr1.Price;
    byr.close();
    ofstream byrout("buyerOut.txt");
    byrout<< "Product ID: "<<Bpr1.ProductId<<endl;
    byrout<< "Product Category: "<<Bpr1.ProductCategory<<endl;
    byrout<< "Product Name: "<<Bpr1.ProductName<<endl;
    byrout<< "Buyer Name: "<<Bpr1.BuyerName<<endl;
    byrout<< "Buyer ID: "<<Bpr1.BuyerId<<endl;
    byrout<< "Price: "<<Bpr1.Price<<endl;
    byrout.close();

    ifstream sprd("customerIN.txt");
    sprd>>Spr1.ProductId;
    sprd.ignore();
    getline(sprd,Spr1.ProductCategory);
    getline(sprd,Spr1.ProductName);
    getline(sprd,Spr1.CustomerName);
    sprd>>Spr1.CustomerId;
    sprd>>Spr1.Price;
    sprd.close();

   ofstream sprout("CustomerOut.txt");
    sprout<< "Product ID: "<<Spr1.ProductId<<endl;
    sprout<< "Product Category: "<<Spr1.ProductCategory<<endl;
    sprout<< "Product Name: "<<Spr1.ProductName<<endl;
    sprout<< "Customer Name: "<<Spr1.CustomerName<<endl;
    sprout<< "Customer ID: "<<Spr1.CustomerId<<endl;
    sprout<< "Sold Price: "<<Spr1.Price<<endl;
    sprout.close();


    return 0;
}
