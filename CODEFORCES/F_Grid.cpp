#include <iostream>
#include <vector>
#include "qrcodegen/QrCode.hpp"

// Function to generate QR code from grid of 0s and 1s
qrcodegen::QrCode generateQRCodeFromGrid(const std::vector<std::vector<bool>>& grid) {
    const int size = grid.size();
    qrcodegen::QrCode qr = qrcodegen::QrCode::encodeBinary(std::vector<uint8_t>(), qrcodegen::QrCode::Ecc::LOW);

    // Iterate over the grid and set modules in the QR code accordingly
    for (int y = 0; y < size; ++y) {
        for (int x = 0; x < size; ++x) {
            qr.setModule(x, y, grid[y][x]);
        }
    }

    return qr;
}

// Function to print QR code to console
void printQRCode(const qrcodegen::QrCode& qr) {
    constexpr int border = 2;
    for (int y = -border; y < qr.getSize() + border; ++y) {
        for (int x = -border; x < qr.getSize() + border; ++x) {
            std::cout << (qr.getModule(x, y) ? "\033[40m  " : "\033[47m  ");
        }
        std::cout << "\033[0m\n";
    }
}

int main() {
    // Example grid of 0s and 1s
    std::vector<std::vector<bool>> grid = {
        {1,1,1,1,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,1,0,0,0,1,1,0,0,1,0,0,0,0,0,1},
        {1,0,1,1,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1},
        {1,0,1,1,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1},
        {1,0,1,1,1,0,1,0,1,0,0,1,0,0,1,0,1,0,1,1,1},
        {1,0,0,0,0,0,0,1,0,0,1,1,1,1,1,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
        {1,1,1,1,0,0,1,0,1,1,1,1,1,0,0,1,1,0,1,1,1},
        {0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1},
        {1,0,0,1,1,1,1,0,1,0,1,1,0,1,0,0,0,0,1,1,1},
        {0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,0},
        {1,1,1,1,0,1,1,1,0,0,0,0,0,0,1,1,0,1,0,1,1},
        {0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1,1,1,1,0},
        {1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,0,1,0,1,0,0},
        {1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,1,1},
        {1,0,1,1,1,0,1,0,1,0,1,1,0,1,0,0,0,0,1,1,0},
        {1,0,1,1,1,0,1,0,1,0,0,0,0,0,0,1,0,0,1,0,0},
        {1,0,1,1,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,0},
        {1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1},
        {1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,0,0}
    };

    // Generate QR code
    qrcodegen::QrCode qr = generateQRCodeFromGrid(grid);

    // Print QR code
    printQRCode(qr);

    return 0;
}
