    int numberOfValues;
    std::cout << "ادخل عدد القيم: ";
    std::cin >> numberOfValues;

    std::cout << "ادخل الأرقام:" << std::endl;
    for (int i = 0; i < numberOfValues; ++i) {
        int inputNumber;
        std::cout << "ادخل عدد: ";
        std::cin >> inputNumber;
        numbers.push_back(inputNumber);
    }

    // طباعة التخطيط للرقم 5
    for (int i : numbers) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "5 ";
        }
        std::cout << std::endl;
    }

    return 0;
}