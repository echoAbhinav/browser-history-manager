#include "BrowserHistory.h"
#include <iostream>

void displayMenu() {
    std::cout << "\n=============================" << std::endl;
    std::cout << "  BROWSER HISTORY MANAGER" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "1. Visit new page" << std::endl;
    std::cout << "2. Go back" << std::endl;
    std::cout << "3. Show current page" << std::endl;
    std::cout << "4. Show history" << std::endl;
    std::cout << "5. Clear history" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "Enter your choice: ";
}

int main() {
    BrowserHistory browser;
    int choice;
    std::string url;

    std::cout << "Welcome to Browser History Manager!" << std::endl;

    while (true) {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                std::cout << "Enter URL: ";
                std::getline(std::cin, url);
                browser.visitPage(url);
                break;

            case 2:
                browser.goBack();
                break;

            case 3:
                browser.currentPage();
                break;

            case 4:
                browser.displayHistory();
                break;

            case 5:
                browser.clearHistory();
                break;

            case 6:
                std::cout << "Thank you for using Browser History Manager!" << std::endl;
                return 0;

            default:
                std::cout << "Invalid choice! Please enter 1-6." << std::endl;
                break;
        }

        std::cout << "\nPress Enter to continue...";
        std::cin.get();
    }

    return 0;
}