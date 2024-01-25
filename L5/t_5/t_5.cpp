

#include <iostream>

int main() {
    int A, B, C, M, N, K;
    std::cin >> A >> B >> C >> M >> N >> K;

    // Проверка первой ориентации коробки
    if ((A <= M && B <= N && C <= K) || (A <= M && B <= K && C <= N) || (A <= N && B <= M && C <= K) ||
        (A <= N && B <= K && C <= M) || (A <= K && B <= M && C <= N) || (A <= K && B <= N && C <= M)) {
        std::cout << "Коробка помещается внутрь" << std::endl;
    }
    // Проверка второй ориентации коробки
    else if ((A <= N && B <= K && C <= M) || (A <= K && B <= N && C <= M) || (A <= M && B <= K && C <= N) ||
        (A <= N && B <= M && C <= K) || (A <= K && B <= M && C <= N) || (A <= M && B <= N && C <= K)) {
        std::cout << "Коробка помещается внутрь, повернутая на 90 градусов" << std::endl;
    }
    else {
        std::cout << "Коробка не помещается внутрь" << std::endl;
    }

    return 0;
}
