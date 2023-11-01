#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    int c_bean;
    int milk;
    int water;

public:
    CoffeeMachine(int, int , int);

    void serveCappuccino();
    void serveLatte();
    void serveEspresso();
    void serveMilk();
    void serveWater();
    void fillCoffeeBeans(int quantity);
    void fillMilk(int quantity);
    void fillWater(int quantity);
    void displayIngredients();
};
CoffeeMachine::CoffeeMachine(int initial_coffee_beans, int initial_milk, int initial_water) {
    c_bean = initial_coffee_beans;
    milk = initial_milk;
    water = initial_water;
}
void CoffeeMachine::serveCappuccino() {
    if (c_bean < 2 || milk < 2 || water < 1) {
        cout << "Cappuccino cannot be served due to insufficient ingredients!" << endl;
    } else {
        c_bean -= 2;
        milk -= 2;
        water--;
        cout << "Cappuccino served successfully!" << endl;
    }
}

void CoffeeMachine::serveLatte() {
    if (c_bean < 2 || milk < 3 || water < 1) {
        cout << "Latte cannot be served due to insufficient ingredients!" << endl;
    } else {
        c_bean -= 2;
        milk -= 3;
        water--;
        cout << "Latte served successfully!" << endl;
    }
}

void CoffeeMachine::serveEspresso() {
    if (c_bean < 3 || water < 1) {
        cout << "Espresso cannot be served due to insufficient ingredients!" << endl;
    } else {
        c_bean -= 3;
        water--;
        cout << "Espresso served successfully!" << endl;
    }
}

void CoffeeMachine::serveMilk() {
    if (milk < 3) {
        cout << "Milk cannot be served due to insufficient ingredients!" << endl;
    } else {
        milk -= 3;
        cout << "Milk served successfully!" << endl;
    }
}

void CoffeeMachine::serveWater() {
    if (water < 3) {
        cout << "Water cannot be served due to insufficient ingredients!" << endl;
    } else {
        water -= 3;
        cout << "Water served successfully!" << endl;
    }
}

void CoffeeMachine::fillCoffeeBeans(int quantity) {
    if (c_bean + quantity <= 10) {
        c_bean += quantity;
        cout << quantity << " units of Coffee beans filled successfully." << endl;
    } else {
        cout << "Coffee beans cannot be filled due to overflow. Ensure the machine's capacity." << endl;
    }
}

void CoffeeMachine::fillMilk(int quantity) {
    if (milk + quantity <= 10) {
        milk += quantity;
        cout << quantity << " units of milk filled successfully." << endl;
    } else {
        cout << "Milk cannot be filled due to overflow. Ensure the machine's capacity." << endl;
    }
}

void CoffeeMachine::fillWater(int quantity) {
    if (water + quantity <= 10) {
        water += quantity;
        cout << quantity << " units of water filled successfully." << endl;
    } else {
        cout << "Water cannot be filled due to overflow. Ensure the machine's capacity." << endl;
    }

}

void CoffeeMachine::displayIngredients() {
    cout << "Coffee Beans: " << c_bean << " units" << endl;
    cout << "Milk: " << milk << " units" << endl;
    cout << "Water: " << water << " units" << endl;
}

int main() {
    CoffeeMachine coffeeMachine(10, 10, 10);

    cout << "Please select an option from the following menu:" << endl;

        cout << "1. Serve Cappuccino" << endl;
        cout << "2. Serve Latte" << endl;
        cout << "3. Serve Espresso" << endl;
        cout << "4. Serve Milk" << endl;
        cout << "5. Serve Water" << endl;
        cout << "6. Fill Coffee beans" << endl;
        cout << "7. Fill Milk" << endl;
        cout << "8. Fill Water" << endl;
        cout << "9. Display current ingredient quantities" << endl;
        cout << "10. Turn off" << endl;
    while (true) {
        

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                coffeeMachine.serveCappuccino();
                break;
            case 2:
                coffeeMachine.serveLatte();
                break;
            case 3:
                coffeeMachine.serveEspresso();
                break;
            case 4:
                coffeeMachine.serveMilk();
                break;
            case 5:
                coffeeMachine.serveWater();
                break;
            case 6:
                int coffeeBeansToAdd;
                cout << "Enter the quantity of coffee beans to add: ";
                cin >> coffeeBeansToAdd;
                coffeeMachine.fillCoffeeBeans(coffeeBeansToAdd);
                break;
            case 7:
                int milkToAdd;
                cout << "Enter the quantity of milk to add: ";
                cin >> milkToAdd;
                coffeeMachine.fillMilk(milkToAdd);
                break;
            case 8:
                int waterToAdd;
                cout << "Enter the quantity of water to add: ";
                cin >> waterToAdd;
                coffeeMachine.fillWater(waterToAdd);
                break;
            case 9:
                coffeeMachine.displayIngredients();
                break;
            case 10:
                cout << "Turning off the coffee machine." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
                break;
        }
    }

    return 0;
}
