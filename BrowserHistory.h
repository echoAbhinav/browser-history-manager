#ifndef BROWSER_HISTORY_H
#define BROWSER_HISTORY_H

#include <string>

class BrowserHistory {
private:
    std::string history[100];
    int top;

public:
    BrowserHistory();
    void visitPage(const std::string& url);
    void goBack();
    void currentPage();
    void displayHistory();
    void clearHistory();
    bool isEmpty();
    bool isFull();
};

#endif