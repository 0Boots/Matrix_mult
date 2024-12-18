#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

// Function to perform matrix-matrix multiplication
vector<vector<double>> matrix_multiply(const vector<vector<double>> &A, const vector<vector<double>> &B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();

    vector<vector<double>> C(rowsA, vector<double>(colsB, 0.0));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

// Function to read a matrix from a file
vector<vector<double>> read_matrix(ifstream &file, int rows, int cols) {
    vector<vector<double>> matrix(rows, vector<double>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            file >> matrix[i][j];
        }
    }
    return matrix;
}

// Function to print a matrix
void print_matrix(const vector<vector<double>> &matrix) {
    for (const auto &row : matrix) {
        for (const auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    ifstream input("input.txt");
    if (!input) {
        cerr << "Error opening input file" << endl;
        return 1;
    }

    cout << "Matrix Multiplication Results:\n" << endl;
    string line;

    while (getline(input, line)) {
        if (line == "---" || line.empty()) continue;

        istringstream iss(line);
        int rowsA, colsA, rowsB, colsB;
        iss >> rowsA >> colsA;
        input >> rowsB >> colsB;

        if (colsA != rowsB) {
            cerr << "Matrix dimensions do not allow multiplication." << endl;
            return 1;
        }

        auto A = read_matrix(input, rowsA, colsA);
        auto B = read_matrix(input, rowsB, colsB);

        auto C = matrix_multiply(A, B);

        cout << "Resultant Matrix:" << endl;
        print_matrix(C);
        cout << endl;
    }

    input.close();
    return 0;
}
