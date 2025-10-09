#include "BrowserHistory.h"
#include <iostream>

BrowserHistory::BrowserHistory() {
    top = -1;
}

void BrowserHistory::visitPage(const std::string& url) {
    if (url.empty()) {
        std::cout << "Error: URL cannot be empty!" << std::endl;
        return;
    }

    if (top >= 99) {
        std::cout << "Error: History is full!" << std::endl;
        return;
    }

    top++;
    history[top] = url;
    std::cout << "Visited: " << url << std::endl;
}

void BrowserHistory::goBack() {
    if (top <= 0) {
        if (top == -1) {
            std::cout << "No pages in history!" << std::endl;
        } else {
            std::cout << "Already at the first page!" << std::endl;
        }
        return;
    }

    top--;
    std::cout << "Went back to: " << history[top] << std::endl;
}

void BrowserHistory::currentPage() {
    if (top == -1) {
        std::cout << "No current page - history is empty!" << std::endl;
    } else {
        std::cout << "Current page: " << history[top] << std::endl;
    }
}

void BrowserHistory::displayHistory() {
    if (top == -1) {
        std::cout << "No history available." << std::endl;
        return;
    }

    std::cout << "\n=== Browsing History ===" << std::endl;
    for (int i = 0; i <= top; i++) {
        std::cout << (i + 1) << ". " << history[i];
        if (i == top) {
            std::cout << " (Current)";
        }
        std::cout << std::endl;
    }
}

void BrowserHistory::clearHistory() {
    top = -1;
    std::cout << "History cleared!" << std::endl;
}

bool BrowserHistory::isEmpty() {
    return top == -1;
}

bool BrowserHistory::isFull() {
    return top >= 99;
}