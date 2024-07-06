#include <iostream>

using namespace std;

struct IRON {
    char brand[30];
    char model[30];
    char color[20];
    double minTemperature;
    double maxTemperature;
    bool steamSupply;
    double power;
};

void printIronDetails(const IRON& iron) {
    cout << "\nIron Details:" << endl;
    cout << "Brand: " << iron.brand << endl;
    cout << "Model: " << iron.model << endl;
    cout << "Color: " << iron.color << endl;
    cout << "Min Temperature: " << iron.minTemperature << " C" << endl;
    cout << "Max Temperature: " << iron.maxTemperature << " C" << endl;
    cout << "Steam Supply: " << (iron.steamSupply ? "Yes" : "No") << endl;
    cout << "Power: " << iron.power << " W" << endl;
}

int main() {
    IRON iron;

    cout << "Enter brand: ";
    cin.getline(iron.brand, 30);
    cout << "Enter model: ";
    cin.getline(iron.model, 30);
    cout << "Enter color: ";
    cin.getline(iron.color, 20);
    cout << "Enter min temperature (C): ";
    cin >> iron.minTemperature;
    cout << "Enter max temperature (C): ";
    cin >> iron.maxTemperature;
    cout << "Steam supply (1 for Yes, 0 for No): ";
    cin >> iron.steamSupply;
    cout << "Enter power (W): ";
    cin >> iron.power;
    cin.ignore();  
    printIronDetails(iron);

    int choice;
    while (true) {
        cout << "\nChoose what to change:" << endl;
        cout << "1 - Brand" << endl;
        cout << "2 - Model" << endl;
        cout << "3 - Color" << endl;
        cout << "4 - Min Temperature" << endl;
        cout << "5 - Max Temperature" << endl;
        cout << "6 - Steam Supply" << endl;
        cout << "7 - Power" << endl;
        cout << "0 - Exit" << endl;

        cin >> choice;
        cin.ignore();  

        switch (choice) {
        case 1:
            cout << "Enter new brand: ";
            cin.getline(iron.brand, 30);
            break;
        case 2:
            cout << "Enter new model: ";
            cin.getline(iron.model, 30);
            break;
        case 3:
            cout << "Enter new color: ";
            cin.getline(iron.color, 20);
            break;
        case 4:
            cout << "Enter new min temperature (C): ";
            cin >> iron.minTemperature;
            break;
        case 5:
            cout << "Enter new max temperature (C): ";
            cin >> iron.maxTemperature;
            break;
        case 6:
            cout << "Enter new steam supply (1 for Yes, 0 for No): ";
            cin >> iron.steamSupply;
            break;
        case 7:
            cout << "Enter new power (W): ";
            cin >> iron.power;
            break;
        case 0:
            cout << "Bye";
            return 0;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
        cin.ignore();  

        printIronDetails(iron);
    }

    return 0;
}
