
#include <iostream>
#include <string>

int main() {
    std::cout << "IOS GAMING MENU" << std::endl;
    std::cout << "================" << std::endl;

    bool aimTrainer = false;
    float sensitivity = 50.0f;
    float fov = 90.0f;

    std::cout << "Aim Trainer: "
              << (aimTrainer ? "ON" : "OFF") << std::endl;

    std::cout << "Sensitivity: " << sensitivity << std::endl;
    std::cout << "FOV: " << fov << std::endl;

    return 0;
}
