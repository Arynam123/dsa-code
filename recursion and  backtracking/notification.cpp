#include <iostream>
#include <chrono>
#include <windows.h> // For MessageBox

void waitFor30Minutes() {
    // Get the current time
    auto start = std::chrono::steady_clock::now();
    // Wait for 30 minutes
    while (std::chrono::steady_clock::now() - start < std::chrono::minutes(30)) {
        // Busy wait (do nothing)
    }
}

int main() {
    while (true) {
        std::cout << "Waiting for 30 minutes..." << std::endl;

        // Call the wait function
        waitFor30Minutes();

        // Show a message box with the specified message
        MessageBox(NULL, "The pain of feeling sad is much more easier than the pain of working hard", "Reminder", MB_OK | MB_ICONINFORMATION);

        // Optional console output
        std::cout << "Notification sent!" << std::endl;
    }

    return 0;
}
