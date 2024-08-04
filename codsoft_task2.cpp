#include <iostream>
using namespace std;

int main() {
    int result;
    cout << "Enter the first number: " << endl;
    cin >> result;
    
    while (true) {
        int y;
        cout << "Enter the second number: " << endl;
        cin >> y;
        
        char op;
        cout << "Enter the operation you want to perform: " << endl;
        cin >> op;

        switch (op) {
            case '+':
                result = result + y;
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = result - y;
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = result * y;
                cout << "Result: " << result << endl;
                break;
            case '/':
                if (y != 0) {
                    result = result / y;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Cannot be divided by zero." << endl;
                }
                break;
            default:
                cout << "Enter a valid operation i.e. '+', '-', '*' or '/' " << endl;
                break;
        }

        char choice;
        cout << "Do you want to continue? (y/n)" << endl;
        cin >> choice;
        
        if (choice == 'n' || choice == 'N') {
            cout<<"Exiting..."<<endl;
            break;
        }
    }

    return 0;
}
