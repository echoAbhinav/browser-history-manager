# Browser History Manager - Testing Guide

## Quick Test Commands

After compilation, you can test the program with these steps:

### Test Scenario 1: Basic Navigation
1. Run the program: `browser_history.exe`
2. Choose option 1: Visit new page
3. Enter: `www.google.com`
4. Choose option 1 again: Visit new page
5. Enter: `www.youtube.com`
6. Choose option 3: Show current page (should show YouTube)
7. Choose option 2: Go back (should show Google)
8. Choose option 3: Show current page (should show Google)
9. Choose option 4: Exit

### Test Scenario 2: Edge Cases
1. Run the program
2. Choose option 2: Go back (should show error - no history)
3. Choose option 3: Show current page (should show no current page)
4. Choose option 1: Visit page, enter: `www.example.com`
5. Choose option 2: Go back (should show error - at first page)
6. Choose option 4: Exit

### Test Scenario 3: Additional Features
1. Run the program
2. Visit several pages (google.com, youtube.com, facebook.com)
3. Choose option 5: Show complete history
4. Choose option 6: Show stack status
5. Go back a few times
6. Check stack status again
7. Exit

## Expected Output Sample

```
Browser History Manager initialized!
You can now start visiting pages.

*** Welcome to Browser History Manager ***
This program demonstrates stack behavior using arrays!

Sample Usage Example:
1. Visit 'www.google.com' → Added to history[0]
2. Visit 'www.youtube.com' → Added to history[1]
3. Go back → Now viewing history[0] (www.google.com)
4. Current page → Shows www.google.com

=====================================
    BROWSER HISTORY MANAGER
   (Array-Based Stack Implementation)
=====================================
1 → Visit new page
2 → Go back
3 → Show current page
4 → Exit
=====================================
Additional Options:
5 → Show complete history
6 → Show stack status
=====================================
Enter your choice (1-6): 1
Enter URL to visit: www.google.com
Successfully visited: www.google.com
Page added to history at position 1
```