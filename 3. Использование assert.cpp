#include <iostream>
#include <cassert>

float travelTime(float distance, float speed) {
    assert(speed > 0);
    return distance / speed;
}

int main()
{
    system("chcp 1251"); // Установить кодировку
    float distance;
    float speed;
    float runnersS[5];

    std::cout << "Введите дистанцию: ";
    std::cin >> distance;
    assert(distance > 0);

    for (int i = 0; i < 5; i++) {
        std::cout << "Введите скорость:\n";
        std::cin >> speed;
        runnersS[i] = speed;
        assert(runnersS[i] > 0);
    }

    
    for (int i = 0; i < 5; i++) {
        float time = travelTime(distance, speed);
        std::cout << "Бегун №" << i + 1 << ": " << time << " секунд.\n";
    }
}
