#include <iostream>
#include <string>
using namespace std;

int main()
{
    float owes =0.0;
    float pays=0.0;
    double change=0.0;
    float quarter = .25;
    float penny = .01;
    float nickel = .05;
    float dime = .10;
    float dollar = 1;
    float dollarcount = 0;
    float quartercount=0;
    float pennycount=0;
    float nickelcount=0;
    float dimecount=0;
    cout << "Customer owes: ";
    cin >> owes;
    cout << "Customer Pays: ";
    cin >> pays;
    change = (int)(pays * 100) - (int)(owes * 100);
    cout << "Change due is: " << change/100 << endl;

    while (change >= 0) {
        change -= dollar;
        dollarcount++;
    }while (change >= 0) {
        change -= quarter;
        quartercount++;
    }while (change >= 0) {
        change -= dime;
        dimecount++;
    }while (change >= 0) {
        change -= nickel;
        nickelcount ++;
    }while (change >= 0) {
        change -= penny;
        pennycount ++;
    }
    cout << dollarcount << " dollars" << endl;
    cout << quartercount << " quarters" << endl;
    cout << dimecount << " dimes" << endl;
    cout << nickelcount << " nickels" << endl;
    cout << pennycount << " pennies" << endl;

}