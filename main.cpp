#include <bits/stdc++.h>

int main() {
    int numberOfPermittedInputs = 0, arr[1000];

    while (std::cin >> numberOfPermittedInputs) {
        for (int i = 0; i < numberOfPermittedInputs; ++i) {
            std::cin >> arr[i];
        }
        int flipOperation = 0;
        for (int i = 1; i < numberOfPermittedInputs; ++i) {
            for (int j = 0; j < i; ++j) {
                if (arr[j] > arr[i]) {
                    flipOperation = flipOperation + 1;
                }
            }
        }
        std::cout << "Minimum exchange operations : " << flipOperation << std::endl;
    }

    return 0;
}