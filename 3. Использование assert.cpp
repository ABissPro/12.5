#include <iostream>
#include <cassert>

float travelTime(float distance, float runnersS[], float time[]) {
    for (int j = 0; j < 5; j++) {
        time[j] = distance / runnersS[j];
    }
    return 0;
}

int main()
{
    system("chcp 1251"); // Установить кодировку
    float distance;
    float runnersS[5] = {};
    float time[5] = {};
    std::cout << "Введите дистанцию: ";
    std::cin >> distance;
    assert(distance > 0);
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Введите скорость:\n";
        std::cin >> runnersS[i];
        assert(runnersS[i] > 0);
    }

    travelTime(distance, runnersS, time);
    for (int i = 0; i < 5; i++) {
        std::cout << "Бегун №" << i + 1 << ": " << time[i] << " секунд.\n";
    }
}

