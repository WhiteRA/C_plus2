#include <iostream>
#include <vector>

bool checkWin(const std::string& s) {
    return (s == "XXX" || s == "OOO");
}

bool checkIncorrect(const std::vector<std::string>& grid) {
    int xCount = 0, oCount = 0;
    for (const auto& row : grid) {
        int xInRow = 0, oInRow = 0;
        for (char c : row) {
            if (c == 'X') xInRow++;
            else if (c == 'O') oInRow++;
        }
        if (xInRow > 1 && checkWin(row)) return true;
        if (oInRow > 1 && checkWin(row)) return true;
        xCount += xInRow;
        oCount += oInRow;
    }
    if (oCount > xCount || (oCount == xCount && checkWin("OOO"))) return true;
    for (int i = 0; i < 3; i++) {
        int j = 0;
        for (; j < 3; j++) if (grid[j][i] == '.') break;
        if (j < 3 && grid[j][i] != 0 && grid[j][i] != grid[0][i] && grid[j][i] == grid[j+1][i]) return true;
    }
    if (checkWin("X.X") || checkWin(".XX")) return true;
    return false;
}

std::string checkResult(const std::vector<std::string>& grid) {
    if (checkIncorrect(grid)) return "Incorrect";
    if (checkWin("XXX")) return "Petya won";
    if (checkWin("OOO")) return "Vanya won";
    return "Nobody";
}

int main() {
    std::vector<std::string> grid(3);
    for (auto& row : grid) std::cin >> row;
    std::cout << checkResult(grid) << std::endl;
    return 0;
}