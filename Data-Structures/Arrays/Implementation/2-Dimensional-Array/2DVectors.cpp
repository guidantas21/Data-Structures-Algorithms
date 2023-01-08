#include <iostream>
#include <vector>
#include <time.h>

int getRandomNumber(int max) {
    return rand() % max;
}

std::vector<int> getRandomVector(size_t size) {
    std::vector<int> v;
    for (int i = 0; i < size; i++)
        v.push_back(getRandomNumber(10));

    return v;
}

void random2DArray(std::vector<std::vector<int>> &v, size_t rows, size_t cols) {
    for (int i = 0; i < rows; i++)
        v.push_back(getRandomVector(cols));
}

std::vector<std::vector<int>> getRandom2DVector(size_t rows, size_t cols) {
    std::vector<std::vector<int>> v;

    for (int i = 0; i < rows; i++)
        v.push_back(getRandomVector(cols));

    return v;
}

void print2DVector(std::vector<std::vector<int>> v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++)
            std::cout << v[i][j] << "\t";
        std::cout << "\n";
    }
}

int main() {
    std::vector<std::vector<int>> v = {
        {2,6,1},
        {4,8,2},
        {9,5,1}
    };

    print2DVector(v);

    std::cout << "\n";


    /////////////////////////////////////////////

    std::vector<std::vector<int>> v2;

    std::srand(time(NULL));

    random2DArray(v2, 2, 2);

    print2DVector(v2);

    std::cout << "\n";


    ///////////////////////////////////////////

    print2DVector(getRandom2DVector(5,3));

    return 0;
}