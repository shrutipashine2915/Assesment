#include <iostream>
#include <vector>

std::vector<std::vector<int>> reconstructMatrix(std::vector<int>& rowSum, std::vector<int>& colSum) {
    int m = rowSum.size();
    int n = colSum.size();
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n, 0));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
           
            matrix[i][j] = std::min(rowSum[i], colSum[j]);
            rowSum[i] -= matrix[i][j];
            colSum[j] -= matrix[i][j];
        }
    }

    return matrix;
}

int main() {
    std::vector<int> rowSum = {3,8};
    std::vector<int> colSum = {4,7};
    std::vector<std::vector<int>> result = reconstructMatrix(rowSum, colSum);

    for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
