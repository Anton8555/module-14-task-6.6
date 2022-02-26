#include <iostream>
#include <vector>

int main() {
    std::vector<float> V;
    std::vector<std::vector<float>> M;
    std::vector<float> R;
    int n;

    // data input
    // size
    std::cout << "Enter size:";
    std::cin >> n;
    // elements vector V
    std::cout << "Enter vector elements:";
    V.resize(n);
    for(int i=0; i<n; i++)
        std::cin >> V[i];
    // elements matrix M
    std::cout << "Enter matrix elements:";
    M.resize(n);
    for(int i=0; i<n; i++) {
        M[i].resize(n);
        for (int j = 0; j < n; j++)
            std::cin >> M[i][j];
    }

    // matrix source output
    std::cout
            << std::endl
            << "Matrix 'M':\n";
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout.width(7);
            std::cout << M[i][j];
        }
        std::cout << std::endl;
    }

    // task: calculations
    R.resize(n);
    for(int j=0; j<n; j++) {
        float sum = 0;
        for (int i=0; i<n; i++)
            sum += V[i]*M[i][j];
        R[j] = sum;
    }

    // result output
    std::cout
            << std::endl
            << "Vector 'R':\n";
    for(int i=0; i<n; i++)
        std::cout << R[i] << " ";
    std::cout << std::endl;

    return 0;
}
