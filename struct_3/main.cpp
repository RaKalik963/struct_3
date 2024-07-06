#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct WASHING_MACHINE {
public:
    char brand[20];
    char color[10];
    double width;
    double length;
    double height;
    double power;
    double speed;
    double temperature;
};

int main() {
    WASHING_MACHINE Wash;
    strcpy_s(Wash.brand, "Samsung");
    strcpy_s(Wash.color, "Grey");
    Wash.width = 65;
    Wash.length = 60;
    Wash.height = 90;
    Wash.power = 2000;
    Wash.speed = 800;
    Wash.temperature = 30;

    cout << "Brand: " << Wash.brand << endl;
    cout << "Color: " << Wash.color << endl;
    cout << "Width: " << Wash.width << " cm" << endl;
    cout << "Length: " << Wash.length << " cm" << endl;
    cout << "Height: " << Wash.height << " cm" << endl;
    cout << "Power: " << Wash.power << " W" << endl;
    cout << "Speed: " << Wash.speed << " rpm" << endl;
    cout << "Temperature: " << Wash.temperature << " C" << endl;

    int choice;
    while (true) {
        cout << "\nChoose what to change:" << endl;
        cout << "1 - Brand" << endl;
        cout << "2 - Color" << endl;
        cout << "3 - Width" << endl;
        cout << "4 - Length" << endl;
        cout << "5 - Height" << endl;
        cout << "6 - Power" << endl;
        cout << "7 - Speed" << endl;
        cout << "8 - Temperature" << endl;
        cout << "0 - Exit" << endl;

        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            cout << "Enter new brand: ";
            cin >> Wash.brand;
            break;
        case 2:
            cout << "Enter new color: ";
            cin >> Wash.color;
            break;
        case 3:
            cout << "Enter new width (cm): ";
            cin >> Wash.width;
            break;
        case 4:
            cout << "Enter new length (cm): ";
            cin >> Wash.length;
            break;
        case 5:
            cout << "Enter new height (cm): ";
            cin >> Wash.height;
            break;
        case 6:
            cout << "Enter new power (W): ";
            cin >> Wash.power;
            break;
        case 7:
            cout << "Enter new speed (rpm): ";
            cin >> Wash.speed;
            break;
        case 8:
            cout << "Enter new temperature (C): ";
            cin >> Wash.temperature;
            break;
        case 0:
            cout << "Bye";
            return 0;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        cout << "\nUpdated Washing Machine Details:" << endl;
        cout << "Brand: " << Wash.brand << endl;
        cout << "Color: " << Wash.color << endl;
        cout << "Width: " << Wash.width << " cm" << endl;
        cout << "Length: " << Wash.length << " cm" << endl;
        cout << "Height: " << Wash.height << " cm" << endl;
        cout << "Power: " << Wash.power << " W" << endl;
        cout << "Speed: " << Wash.speed << " rpm" << endl;
        cout << "Temperature: " << Wash.temperature << " C" << endl;
    }

    return 0;
}