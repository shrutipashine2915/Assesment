#include <iostream>
#include <vector>

std::vector<std::vector<int>> reconstructMatrix(std::vector<int>& rowSum, std::vector<int>& colSum) {
    int m = rowSum.size();
    int n = colSum.size();
    std::vector<std::vector<int>> result(m, std::vector<int>(n, 0));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = std::min(rowSum[i], colSum[j]);
            rowSum[i] -= result[i][j];
            colSum[j] -= result[i][j];
        }
    }

    return result;
}

int main() {
    std::vector<int> rowSum = {3, 8};
    std::vector<int> colSum = {4, 7};

    std::vector<std::vector<int>> matrix = reconstructMatrix(rowSum, colSum);

    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
