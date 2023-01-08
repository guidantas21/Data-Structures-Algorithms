#include <iostream>
#include <vector>
#include <time.h> 

int getRandomNumber(int max) {
    return rand() % max;
}

void randomVector(std::vector<int> &v, size_t size) {
    for (int i = 0; i < size; i++)
        v.push_back(getRandomNumber(10));
}

std::vector<int> getRandomVector(size_t size) {
    std::vector<int> v;
    for (int i = 0; i < size; i++)
        v.push_back(getRandomNumber(10));

    return v;
}

void printVector(std::vector<int> v) {
    std::cout << "Address: " << &v << "\n";
    std::cout << "Elements: ";
    for (auto i : v)
        std::cout << i << " ";
    std::cout << "\n";
    std::cout << "Size: " << v.size() << "\n";
    std::cout << "Max size: " << v.max_size() << "\n";
    std::cout << "Capacity: " << v.capacity() << "\n";
    std::cout << "Empty: " << v.empty() << "\n";
    std::cout << "\n";
}

int main() {
    // Declare a vector
    std::vector<int> v1 = { 2,6,8,9,3 };
    printVector(v1);

    // Add an element in the last position
    v1.push_back(6);
    printVector(v1);

    // Delete the element from the last position
    v1.pop_back();
    printVector(v1);

    // Insert an element in a specific position
    v1.insert(v1.begin() + 2, 4);
    printVector(v1);

    // Delete an element from a specific position
    v1.erase(v1.begin() + 2);
    printVector(v1);

    // Delete all elements
    v1.clear();
    printVector(v1);

    std::cout << "\n";

    /////////////////////////////////////////////////////

    std::vector<int> v2;
    size_t size = 9;

    std::srand(time(NULL));

    randomVector(v2, size);
    printVector(v2);

    std::cout << "\n";

    ////////////////////////////////////////////////////

    printVector(getRandomVector(size));

    return 0;
}