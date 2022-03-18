/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : pointers
*******************************************************/
//-----------------------INCLUDE-----------------------
using namespace std;
#include <iostream>
#include <string>
#include <vector>
//-----------------------------------------------------
//-----------------------CONSTANTS---------------------
//-----------------------------------------------------
//-------------------FUNCTION-PROTOTYPE----------------
//-----------------------------------------------------
class player
{
public:
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say){cout << name << " says " << text_to_say << endl; };
    bool is_dead();
};

class Account
{
public:
    //attributes
    string name;
    int balance;

    //methods
    bool deposit (double ball){balance += ball; cout << "In deposit" << endl;};
    bool withdraw(double ball){balance -= ball; cout << "In withdrew" << endl;};
};


int main()
{
    Account frank_account;
    frank_account.name    = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);


    player frank;
    frank.name   = "Frank";
    frank.health = 100;
    frank.xp     = 12;
    frank.talk("Hi there");

    player *enemy   = new player;
    (*enemy).name   = "Enemy";
    (*enemy).health = 100;
    enemy->xp       = 15;

    enemy->talk("I will destroy you");

    return 0;
    
} 


