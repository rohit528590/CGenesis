#include <stdio.h>

/*
================================================================================
                    FUNCTION CALL FLOW AND CONTROL TRANSFER
================================================================================

Understanding Function Calls:
------------------------------
When functions call other functions, program control transfers between them
in a specific order. Understanding this flow is crucial for debugging and
writing complex programs.

Call Flow Mechanics:
--------------------
1. Program execution always starts with main()
2. When a function is called, control transfers to that function
3. The called function executes its statements
4. Upon reaching return (or end), control returns to the caller
5. Execution continues from where the function was called

Stack Mechanism (Behind the Scenes):
-------------------------------------
Functions use a "call stack":
- Each function call is pushed onto the stack
- When a function returns, it is popped from the stack
- This enables nested function calls and proper return flow

================================================================================
*/

// Function declarations (prototypes)
void england();
void australia();
void india();

// Third level function
void england()
{
    printf("→ Entered england()\n");
    printf("  You are in England.\n");
    printf("← Exiting england(), returning to australia()\n\n");
    return; // Explicit return (optional for void functions)
}

// Second level function
void australia()
{
    printf("→ Entered australia()\n");
    printf("  You are in Australia.\n");
    printf("  australia() is now calling england()...\n\n");

    england(); // Calls third function

    printf("→ Back in australia() after england() returned\n");
    printf("← Exiting australia(), returning to india()\n\n");
    return;
}

// First level function
void india()
{
    printf("→ Entered india()\n");
    printf("  You are in India.\n");
    printf("  india() is now calling australia()...\n\n");

    australia(); // Calls second function

    printf("→ Back in india() after australia() returned\n");
    printf("← Exiting india(), returning to main()\n\n");
    return;
}

int main()
{
    printf("╔════════════════════════════════════════════╗\n");
    printf("║  Function Call Flow Demonstration          ║\n");
    printf("╚════════════════════════════════════════════╝\n\n");

    printf("→ Program starts in main()\n");
    printf("  main() is now calling india()...\n\n");

    india(); // First function call - starts the chain

    printf("→ Back in main() after india() returned\n");
    printf("← Program execution complete!\n\n");

    printf("Call Flow Summary:\n");
    printf("  main() → india() → australia() → england()\n");
    printf("  england() → australia() → india() → main()\n");

    return 0;
}

/*
================================================================================
                          CALL FLOW VISUALIZATION
================================================================================

Execution Order:
----------------
1. main() starts
2. main() calls india()
   3. india() executes
   4. india() calls australia()
      5. australia() executes
      6. australia() calls england()
         7. england() executes
         8. england() returns to australia()
      9. australia() completes and returns to india()
   10. india() completes and returns to main()
11. main() completes


Stack Visualization:
--------------------
Step 1:        Step 2:         Step 3:          Step 4:
+-------+      +-------+       +-------+        +-------+
| main  |      |england|       |       |        |       |
+-------+      +-------+       +-------+        +-------+
               |austral|       |austral|        |       |
               +-------+       +-------+        +-------+
               | india |       | india |        | india |
               +-------+       +-------+        +-------+
               | main  |       | main  |        | main  |
               +-------+       +-------+        +-------+


================================================================================
*/
