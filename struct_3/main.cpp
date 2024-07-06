#include <iostream>

using namespace std;

struct BOILER {
    char brand[30];
    char color[20];
    double power;
    double volume;
    double heatingTemperature;
};

void printBoilerDetails(const BOILER& boiler) {
    cout << "\nBoiler Details:" << endl;
    cout << "Brand: " << boiler.brand << endl;
    cout << "Color: " << boiler.color << endl;
    cout << "Power: " << boiler.power << " W" << endl;
    cout << "Volume: " << boiler.volume << " L" << endl;
    cout << "Heating Temperature: " << boiler.heatingTemperature << " C" << endl;
}

int main() {
    BOILER boiler;

    cout << "Enter brand: ";
    cin.ignore();  
    cin.getline(boiler.brand, 30);
    cout << "Enter color: ";
    cin.getline(boiler.color, 20);
    cout << "Enter power (W): ";
    cin >> boiler.power;
    cout << "Enter volume (L): ";
    cin >> boiler.volume;
    cout << "Enter heating temperature (C): ";
    cin >> boiler.heatingTemperature;
    cin.ignore(); 

    printBoilerDetails(boiler);

    int choice;
    while (true) {
        cout << "\nChoose what to change:" << endl;
        cout << "1 - Brand" << endl;
        cout << "2 - Color" << endl;
        cout << "3 - Power" << endl;
        cout << "4 - Volume" << endl;
        cout << "5 - Heating Temperature" << endl;
        cout << "0 - Exit" << endl;

        cin >> choice;
        cin.ignore();  

        switch (choice) {
        case 1:
            cout << "Enter new brand: ";
            cin.getline(boiler.brand, 30);
            break;
        case 2:
            cout << "Enter new color: ";
            cin.getline(boiler.color, 20);
            break;
        case 3:
            cout << "Enter new power (W): ";
            cin >> boiler.power;
            break;
        case 4:
            cout << "Enter new volume (L): ";
            cin >> boiler.volume;
            break;
        case 5:
            cout << "Enter new heating temperature (C): ";
            cin >> boiler.heatingTemperature;
            break;
        case 0:
            cout << "Bye";
            return 0;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
        cin.ignore();  

        printBoilerDetails(boiler);
    }

    return 0;
}
