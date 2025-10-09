# Browser History Manager in C++

## Project Overview
A simple console-based Browser History Manager with separate header and implementation files. This project demonstrates:
- **Modular programming** with .h and .cpp files
- **Array-based stack** implementation
- **Object-oriented programming** in C++
- **Menu-driven interface**

## 🎯 Key Features
- **Visit new pages** - Add pages to browsing history using array indexing
- **Navigate backwards** - Go back to previously visited pages by decrementing stack pointer
- **Display current page** - Show which page you're currently viewing
- **View complete history** - See all visited pages in chronological order
- **Stack status monitoring** - Educational feature showing internal stack state
- **Boundary checking** - Proper handling of empty history and full array scenarios

## 📁 File Structure
```
ConsolebrowserHistoryManager/

├── BrowserHistory.h          # Class declaration

├── BrowserHistory.cpp        # Class implementation## 🔧 Technical Implementation

├── main.cpp                  # Main program and interface

├── compile_and_run.bat       # Compilation script### Core Concept: Array-Based Stack

└── browser_history.exe       # Compiled executableThe project uses **array-based stack** to manage navigation:

```

Flow Diagram---->

Your Source Files:          Compilation Process:         Final Result:
┌─────────────────┐        ┌─────────────────┐         ┌─────────────────┐
│ BrowserHistory.h│   ──►  │                 │   ──►   │                 │
│ BrowserHistory.cpp│  ──► │   C++ Compiler  │   ──►   │ browser_history │
│ main.cpp        │   ──►  │     (g++)       │   ──►   │     .exe        │
└─────────────────┘        └─────────────────┘         └─────────────────┘
   Human-readable             Translation               Machine executable
     C++ code                   process                   binary file



BrowserHistory.cpp

Program Flow


<!-- void BrowserHistory::visitPage(const std::string& url) {
    if (url.empty()) {
        std::cout << "Error: URL cannot be empty!" << std::endl;
        return;  // Exit function early
    }

    if (top >= 99) {
        std::cout << "Error: History is full!" << std::endl;
        return;  // Exit function early
    }

    top++;                    // Move to next position
    history[top] = url;       // Store the URL
    std::cout << "Visited: " << url << std::endl;
} -->

Initial state: top = -1, history[] = [empty, empty, ...]

User calls: visitPage("www.google.com")
├── Check: url.empty()? No ✓
├── Check: top >= 99? No (top = -1) ✓  
├── top++ → top becomes 0
├── history[0] = "www.google.com"
└── Print: "Visited: www.google.com"

Result: top = 0, history[0] = "www.google.com"



<!-- void BrowserHistory::goBack() {
    if (top <= 0) {
        if (top == -1) {
            std::cout << "No pages in history!" << std::endl;
        } else {  // top == 0
            std::cout << "Already at the first page!" << std::endl;
        }
        return;
    }

    top--;  // Move back one position
    std::cout << "Went back to: " << history[top] << std::endl;
} -->

Scenario 1: Empty history (top = -1)
└── Print: "No pages in history!"

Scenario 2: At first page (top = 0) 
└── Print: "Already at the first page!"

Scenario 3: Can go back (top > 0)
├── top-- (decrement pointer)
└── Show previous page: history[top]/

<!-- void BrowserHistory::displayHistory() {
    if (top == -1) {
        std::cout << "No history available." << std::endl;
        return;
    }

    std::cout << "\n=== Browsing History ===" << std::endl;
    for (int i = 0; i <= top; i++) {
        std::cout << (i + 1) << ". " << history[i];
        if (i == top) {
            std::cout << " (Current)";  // Mark current page
        }
        std::cout << std::endl;
    }
} -->

=== Browsing History ===
1. www.google.com
2. www.youtube.com (Current)
