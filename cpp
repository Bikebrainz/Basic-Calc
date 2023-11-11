#include <iostream>
#include <iomanip> // For setprecision

int main() {
    char op;
    float num1, num2;
    char choice;

    do {
        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> op;

        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        std::cout << std::fixed << std::setprecision(2); // Set precision for floating point output

        switch(op) {
            case '+':
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
                break;
            case '/':
                if(num2 != 0.0)
                    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
                else
                    std::cout << "Division by zero is not allowed." << std::endl;
                break;
            default:
                std::cout << "Invalid operator!" << std::endl;
        }

        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}
