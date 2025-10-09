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
├── BrowserHistory.cpp        # Class implementation
├── main.cpp                  # Main program and interface
├── compile_and_run.bat       # Compilation script
└── browser_history.exe       # Compiled executable
```

## 🔧 Technical Implementation

### Core Concept: Array-Based Stack
The project uses **array-based stack** to manage navigation:

### Flow Diagram
```
Your Source Files:          Compilation Process:         Final Result:
┌─────────────────┐        ┌─────────────────┐         ┌─────────────────┐
│ BrowserHistory.h│   ──►  │                 │   ──►   │                 │
│ BrowserHistory.cpp│  ──► │   C++ Compiler  │   ──►   │ browser_history │
│ main.cpp        │   ──►  │     (g++)       │   ──►   │     .exe        │
└─────────────────┘        └─────────────────┘         └─────────────────┘
   Human-readable             Translation               Machine executable
     C++ code                   process                   binary file
```

## 💡 Program Flow

### BrowserHistory.cpp Implementation

#### visitPage() Function Logic:
```cpp
void BrowserHistory::visitPage(const std::string& url) {
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
}
```

#### Step-by-step execution:
```
Initial state: top = -1, history[] = [empty, empty, ...]

User calls: visitPage("www.google.com")
├── Check: url.empty()? No ✓
├── Check: top >= 99? No (top = -1) ✓  
├── top++ → top becomes 0
├── history[0] = "www.google.com"
└── Print: "Visited: www.google.com"

Result: top = 0, history[0] = "www.google.com"
```

#### goBack() Function Logic:
```cpp
void BrowserHistory::goBack() {
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
}
```

#### goBack() Scenarios:
```
Scenario 1: Empty history (top = -1)
└── Print: "No pages in history!"

Scenario 2: At first page (top = 0) 
└── Print: "Already at the first page!"

Scenario 3: Can go back (top > 0)
├── top-- (decrement pointer)
└── Show previous page: history[top]
```

#### displayHistory() Function Logic:
```cpp
void BrowserHistory::displayHistory() {
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
}
```

#### Example Output:
```
=== Browsing History ===
1. www.google.com
2. www.youtube.com (Current)
```

## 🚀 How to Compile and Run

### Method 1: Using the batch script
```bash
# Double-click or run in terminal
compile_and_run.bat
```

### Method 2: Manual compilation
```bash
g++ -o browser_history.exe main.cpp BrowserHistory.cpp
browser_history.exe
```

## 📋 Sample Usage
```
Welcome to Browser History Manager!

=============================
  BROWSER HISTORY MANAGER
=============================
1. Visit new page
2. Go back
3. Show current page
4. Show history
5. Clear history
6. Exit
=============================
Enter your choice: 1
Enter URL: www.google.com
Visited: www.google.com

Enter your choice: 3
Current page: www.google.com
```

## 🎓 Key Concepts
- **Header/Implementation separation** - Professional code organization
- **Array-based stack** - Simple data structure implementation
- **Object-oriented design** - Encapsulation and clean interface
- **Menu-driven programming** - User-friendly console application

This is a clean, simple implementation perfect for demonstrating fundamental C++ concepts without overcomplication.
