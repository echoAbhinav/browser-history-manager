#ifndef BROWSER_HISTORY_H
#define BROWSER_HISTORY_H

#include <string>
#include <stack>
#include <vector>
using namespace std;

class BrowserHistory {
private:
    stack<string> backStack;
    vector<string> allHistory;

public:
    BrowserHistory() = default;
    void visit(const string &url);
    void back();
    void showHistory() const;
    void clearHistory();
};

#endif // BROWSER_HISTORY_H
