#include "mainwindow.h"
#include <QApplication>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>

using namespace std;
class account
{
        int acno;
        char name[50];
        long double deposit;
        char type;
public:
        void create_account();
        void show_account();
        void modify();
        void dep(int);
        void draw(int);
        void report();
        int retacno();
        int retdeposit();
        char rettype();
};

void account::create_account()
{
    cout<<"\n Enter the account number: ";
    cin>>acno;
    cout<<"\n Enter the name of the account holder: ";
    cin>>name;
    cout<<"\n Enter the type of account (C/S): ";
    cin>>type;
    type=toupper(type);
    cout<<"\n Enter the initial amount\n (More than 500 for Savings and more than 1000 for Current): ";
    cin>>deposit;
    cout<<"\n\n Account created.";
}

void account::show_account()
{
    cout<<"\n Account number: "<<acno;
    cout<<"\n Account holder's name: "<<name;
    cout<<"\n Type of account: "<<type;
    cout<<"\n Balance amount: "<<deposit;
}

void account::modify()
{
    cout<<"\n Account number: "<<acno;
    cout<<"\n Enter the name of the account holder; ";
    cin>>name;
    cout<<"\n Enter the type of account: ";
    cin>>type;
    type=toupper(type);
    cout<<"\n Enter the balance amount: ";
    cin>>deposit;
}

void account::dep(int x)
{
    deposit = deposit + x;
}

void account::draw(int x)
{
    deposit = deposit - x;
}

void account::report()
{
    cout<<""<<acno<<setw(10)<<""<<name<<setw(10)<<""<<type<<setw(6)<<""<<deposit<<endl;
}

int account::retacno()
{
    return acno;
}

int account::retdeposit()
{
    return deposit;
}

char account::rettype()
{
    return type;
}

void write_account();
void display_sp(int);
void modify_account(int);
void delete_account(int);
void display_al();
void deposit_withdraw(int, int);
void intro();


int main()
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    char ch;
    int num;
    intro();
    do{
        cout<<"\n\n\t Main Menu";
        cout<<"\n\n\t 01. New Account";
        cout<<"\n\n\t 02. Deposit Amount";
        cout<<"\n\n\t 03. Withdraw Amount";
        cout<<"\n\n\t 04. Balance Enquiry";
        cout<<"\n\n\t 05. All Account Holder's List";
        cout<<"\n\n\t 06. Close An Account";
        cout<<"\n\n\t 07. Modify An Account";
        cout<<"\n\n\t 08. Exit";
        cout<<"\n\n\n\t Please select an option (1-8): ";
        cin>>ch;
        switch(ch)
        {
        case '1':
            write_account();
            break;

        case '2':
            cout<<"\n\n\t Enter the account number: ";
            cin>>num;
            deposit_withdraw(num, 1);
            break;

        case '3':
            cout<<"\n\n\t Enter the account number: ";
            cin>>num;
            deposit_withdraw(num, 2);
            break;

        case '4':
            cout<<"\n\n\t Enter the account number: ";
            cin>>num;
            display_sp(num);
            break;

        case '5':
            display_al();
            break;

        case '6':
            cout<<"\n\n\t Enter the account number: ";
            cin>>num;
            delete_account(num);
            break;

        case '7':
            cout<<"\n\n\t Enter the account number: ";
            cin>>num;
            modify_account(num);
            break;

        case '8':
            cout<<"\n\n\t Thank you for using Bank Management System!\n\n";
            break;

        default:
            cout<<"\a";

        }
    }while(ch!='8');
    return 0;
}
    void write_account()
    {
        account ac;
        ofstream outFile;
        outFile.open("account1.dat", ios::binary | ios::app);
        ac.create_account();
        outFile.write((char *) &ac, sizeof(account));
        outFile.close();
    }

    void display_sp(int n)
    {
        account ac;
        int flag = 0;
        ifstream inFile;
        inFile.open("account1.dat", ios::binary);
        if(!inFile)
        {
            cout<<" File could not be opened! Try again.";
            return;
        }
        cout<<"\n Balance details\n";
        while(inFile.read((char *) &ac, sizeof(account)))
        {
            if(ac.retacno()==n)
            {
                ac.show_account();
                flag = 1;
            }
        }
        inFile.close();
        if(flag == 0)
            cout<<"\n\n Account number does not exist";
    }

    void modify_account(int n)
    {
        int found = 0;
        account ac;
        fstream File;
        File.open("account1.dat", ios::binary | ios::in | ios::out);
        if(!File)
        {
            cout<<" File could not be opened! Try again.";
            return;
        }
        while(File.read((char *) &ac, sizeof(account)) && found ==0)
        {
            if(ac.retacno()==n)
            {
                ac.show_account();
                cout<<"\n\n Enter the new details of account: ";
                ac.modify();
                int pos=(-1)*sizeof(account);
                File.seekp(pos, ios::cur);
                File.write((char *) &ac, sizeof(account));
                cout<<"\n\n\t Record updated.";
                found = 1;
            }
        }
        File.close();
        if(found == 0)
            cout<<"\n\n Record not found!";
    }

    void delete_account(int n)
    {
        account ac;
        ifstream inFile;
        ofstream outFile;
        inFile.open("account1.dat", ios::binary);
        if(!inFile)
        {
            cout<<" File could not be opened! Try again.";
            return;
        }
        outFile.open("Temp1.dat", ios::binary);
        inFile.seekg(0, ios::beg);
        while(inFile.read((char *) &ac, sizeof(account)))
        {
            if(ac.retacno()!=n)
            {
                outFile.write((char *) &ac, sizeof(account));
            }
        }
        inFile.close();
        outFile.close();
        remove("account1.dat");
        rename("Temp1.dat", "account1.dat");
        cout<<"\n\n\t Record deleted.";
    }

    void display_al()
    {
        account ac;
        ifstream inFile;
        inFile.open("account1.dat", ios::binary);
        if(!inFile)
        {
            cout<<" File could not be opened! Try again.";
            return;
        }
        cout<<"\n\t\t\t Account holder's list\n\n";
        cout<<" =========================================================\n";
        cout<<" A/C No."<<setw(10)<<"Name"<<setw(10)<<"Type"<<setw(13)<<"Balance\n";
        cout<<" =========================================================\n";
        while(inFile.read((char *) &ac, sizeof(account)))
        {
            ac.report();
        }
        inFile.close();
    }

    void deposit_withdraw(int n, int option)
    {
        int amt;
        int found = 0;
        account ac;
        fstream File;
        File.open("account1.dat", ios::binary | ios::in | ios::out);
        if(!File)
        {
            cout<<" File could not be opened! Try again.";
            return;
        }
        while(File.read((char *) &ac, sizeof(account)) && found == 0)
        {
            if(ac.retacno() == n)
            {
                ac.show_account();
                if(option == 1)
                {
                    cout<<"\n\n\t To deposit amount";
                    cout<<"\n\n Enter the amount to be deposited: ";
                    cin>>amt;
                    ac.dep(amt);
                }
                if(option == 2)
                {
                    cout<<"\n\n\t To withdraw amount";
                    cout<<"\n\n Enter the amount to be withdrawn: ";
                    cin>>amt;
                    int bal = ac.retdeposit()-amt;
                    if((bal < 500 && ac.rettype() == 'S') || (bal < 1000 && ac.rettype() == 'C'))
                        cout<<" Insufficient balance!";
                    else
                        ac.draw(amt);
                }
                int pos=(-1)* sizeof(ac);
                File.seekp(pos, ios::cur);
                File.write((char *) &ac, sizeof(account));
                cout<<"\n\n\t Record updated.";
                found = 1;
            }
        }
        File.close();
        if(found == 0)
            cout<<"\n\n Record not found!";
    }

    void intro()
    {
        cout<<"\n\n\n\t Welcome to the Bank Management System";
        cout<<"\n\t\t Made by: The Sluggish Sages";
    }

    //return a.exec();
