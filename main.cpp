


#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    double x1, y1, x2, y2, scalar;
    int choice;
    Vector result(0, 0);


    cout << "Enter the coordinates for the first vector (x y): ";
    cin >> x1;
    cin >> y1;
    Vector vector1(x1,y1);


    cout << "Enter the coordinates for the second vector (x y): ";
    cin >> x2;
    cin >> y2;
    Vector vector2(x2,y2);



    do {
        cout << "\nChoose an operation:\n"
             << "1) Add vectors\n"
             << "2) Subtract vectors\n"
             << "3) Multiply first vector by scalar\n"
             << "4) Multiply second vector by scalar\n"
             << "5) Print vectors and their lengths\n"
             << "6) Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                result = vector1 + vector2;
                cout << "Addition result: (" << result.getX() << ", " << result.getY() << ")" << endl;
                break;
            case 2:
                result = vector1 - vector2;
                cout << "Subtraction result: (" << result.getX() << ", " << result.getY() << ")" << endl;
                break;
            case 3:
                cout << "Enter the scalar value for multiplication: ";
                cin >> scalar;
                result = vector1 * scalar;
                cout << "Scaled Vector 1: (" << result.getX() << ", " << result.getY() << ")" << endl;
                break;
            case 4:
                cout << "Enter the scalar value for multiplication: ";
                cin >> scalar;
                result = vector2 * scalar;
                cout << "Scaled Vector 2: (" << result.getX() << ", " << result.getY() << ")" << endl;
                break;
            case 5:
                cout << "Vector 1: (" << vector1.getX() << ", " << vector1.getY() << "), Length:"<< vector1.length() << endl;
                cout << "Vector 2: (" << vector2.getX() << ", " << vector2.getY() << "), Length:"<< vector2.length() << endl;
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Please enter a valid choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}