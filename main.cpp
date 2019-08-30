#include <bits/stdc++.h>

int main() {
    int numberOfPermittedInputs = 0, number = 0, flipOperation = 0;

    while (std::cin >> numberOfPermittedInputs) {
        int arr[numberOfPermittedInputs];
        for (int i = 0; i < numberOfPermittedInputs; ++i) {
            std::cin >> number;
            arr[i] = number;
        }
        for (int j = 1; j < numberOfPermittedInputs; ++j) {
            for (int i = 0; i < j; ++i) {
                if (arr[i] > arr[j]) {
                    ++flipOperation;
                }
            }
        }
        std::cout << "Minimum exchange operations : " << flipOperation << std::endl;
    }

    return 0;
}