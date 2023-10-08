#include <bits/stdc++.h>
using namespace std;
int c_bean = 10, milk = 10, water = 10;
void cappuccino(void) // for cappuccino serve
{
    if (c_bean < 2 || milk < 2 || water < 1) // if ingredient quantity is less than ingredient quantity required for the cappuccino
    {
        cout << "Cappuccino has not been served beacuse of less ingredient!!" << endl;
    }
    else
    {
        c_bean -= 2;
        milk -= 2;
        water -= 1;
        cout << "Cappuccino has been served suceessfuly" << endl;
    }
}
void Latte(void)
{
    if (c_bean < 2 || milk < 3 || water < 1)
    {
        cout << "Latte has not been served beacuse of less ingredient!!" << endl;
    }
    else
    {
        c_bean -= 2;
        milk -= 3;
        water -= 1;
        cout << "Latte has been served suceessfuly" << endl;
    }
}
int Espresso(void)
{
    if (c_bean < 3 || water < 1)
    {
        cout << "Espresso has not been served beacuse of less ingredient!!" << endl;
    }
    else
    {
        c_bean -= 3;
        water -= 1;
        cout << "Espresso has been served suceessfuly" << endl;
    }
}
int Milk(void)
{
    if (milk < 3)
    {
        cout << "Milk has not been served beacuse of less ingredient!!" << endl;
    }
    else
    {

        milk -= 3;
        cout << "Milk has been served suceessfuly" << endl;
    }
}
int Water(void)
{
    if (water < 3)
    {
        cout << "Water has not been served beacuse of less ingredient!!" << endl;
    }
    else
    {
        water -= 3;
        cout << "Water has been served suceessfuly" << endl;
    }
}

void fill_c_beans(void)
{
    int i;
    cout << "Enter the Quantity: ";
    cin >> i;
    c_bean += i;
    if (c_bean < 11)  //if c_bean is less than 11 then go ahead
    {
        cout << i << " Units of Coffee beans filled successfuly." << endl;
    }
    else
    {
        c_bean -= i;
        cout << i << " Units of Coffee beans cannot filled successfuly. there is Overflow!!. Make Sure the capacity of machine" << endl;
    }
}
void fill_milk(void)
{
    int i;
    cout << "Enter the Quantity: ";
    cin >> i;

    milk += i;
    if (milk < 11)
    {
        cout << i << " Units of milk filled successfuly." << endl;
    }
    else
    {
        milk -= i;
        cout << i << " Units of milk cannot filled successfuly. there is Overflow!!. Make Sure the capacity of machine";
    }
}

void fill_water(void)
{
    int i;
    cout << "Enter the Quantity: ";
    cin >> i;
    water += i;
    if (water < 11)
    {
        cout << i << " Units of water filled successfuly." << endl;
    }
    else
    {
        water -= i;
        cout << i << " Units of water cannot filled successfuly. there is Overflow!!. Make Sure the capacity of machine" << endl;
    }
}
void Display()
{
    cout <<"coffe Bean "<< c_bean << endl<<"Milk " << milk << " " <<endl<<"water "<< water << endl;
}
void choice()
{
    int choice;
    cout << "Enter the choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cappuccino();
        break;
    case 2:
        Latte();
        break;
    case 3:
        Espresso();
        break;
    case 4:
        Milk();
        break;
    case 5:
        Water();
        break;
    case 6:
        fill_c_beans();
        break;
    case 7:
        fill_milk();
        break;
    case 8:
        fill_water();
        break;
    case 9:
        Display();
        break;
    case 10:
        cout << "Turn Off..!"<<endl;
        break;
    default:
        cout<<"your choice is doesn't exit..! please give correct choice..!"<<endl;;
    }
}
int main()
{

    cout << "Please Select a choice from the following options:" << endl
         << endl;
    cout << "1. Serve Cappuccino." << endl
         << "2. Serve Latte." << endl
         << "3. Serve Espresso." << endl
         << "4. Serve Milk." << endl
         << "5. Serve Water." << endl
         << "6. Fill Coffee beans." << endl
         << "7. Fill Milk." << endl
         << "8. Fill Water." << endl
         << "9. Diplay current ingredient quantity." << endl
         << "10. Turn off." << endl
         << endl;
   

    while(1)
    {
        choice();
    }

    return 0;
}