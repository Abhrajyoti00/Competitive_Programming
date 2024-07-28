#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile("numbers.txt"); // Open a file for writing

    // Check if the file is opened successfully
    if (!outputFile.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }
    outputFile <<50000<<endl;
    // Write numbers to the file
    for (int i = 1; i <= 50000; i++) {
        outputFile << 99991 << "\n";
    }

    // Close the file
    outputFile.close();
    
    cout << "Numbers have been written to 'numbers.txt'." << endl;

    return 0;
}
