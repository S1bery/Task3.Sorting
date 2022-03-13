#include <iostream>

int main() {
    float nums[15];
    std::cout << "Input fifteen numbers: " << std::endl;

    for (int i = 0; i < 15; i++) {
        std::cin >> nums[i];
    }
    std::cout << "--------------" << std::endl;

    float max = nums[0];
    float min = nums[0];

    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++) {
            if (nums[j] > nums[i]) {
                max = nums[j];
                min = nums[i];
                nums[i] = max;
                nums[j] = min;
            }
        }
    }
    for (int i = 0; i < 15; i++) {
        std::cout << i + 1 << ". " << nums[i] << std::endl;
    }
    return 0;
}
