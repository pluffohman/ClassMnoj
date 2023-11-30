#include "Mnog.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <windows.h>
#include <algorithm>
#include <iterator>
using namespace std;
int main() {
    system("chcp 1251");
    system("cls");
    Mnoj set1, set2;
    std::cout << "Программа для работы с множествами. Введите длину множества: ";
    int dl; std::cin >> dl;
    set1.setdl(dl);
    std::cout << "Введите элементы множества через пробел: ";
    cin >> set1;
    while(true) {
        Sleep(2000);
    	system("cls");
        
	    std::cout << "Выберите действие: " << std::endl;
	    std::cout << "1) Добавить элемент" << std::endl;
	    std::cout << "2) Удалить элемент" << std::endl;
	    std::cout << "3) Проверка принадлежности элемента к множеству" << std::endl;
	    std::cout << "4) Разность множеств" << std::endl;
	    std::cout << "5) Пересечение множеств" << std::endl;
	    std::cout << "6) Присваивание ваших элементов другому множеству" << std::endl;
        std::cout << "7) Очистить множество" << std::endl;
        std::cout << "8) Вывести множество на экран" << std::endl;
        std::cout << "0) Выход" << std::endl;
        int res; std::cin >> res;
        int vrem;
        bool ans;
        vector<int> poco;
	    switch (res)
	    {
	    case 1:
            std::cout << "Введите элемент:";
            std::cin >> vrem;
            set1.add(vrem);
            break;
	    case 2:
            std::cout << "Введите элемент:";
            std::cin >> vrem;
            set1.delel(vrem);
            break;
        case 3:
            std::cout << "Введите элемент:";
            std::cin >> vrem;
            ans = set1.elin(vrem);
            if (ans)cout << "Элемент содержится в данном множестве" << endl;
            else cout << "Элемент не найден" << endl;
            break;
        case 4:
            std::cout << "Введите длину второго множества: ";
            std::cin >> vrem;
            std::cout << "Введите второе множество: ";
            int ele;
            for(int i = 0; i < vrem; ++i)
            {
                std::cin >> ele;
                poco.push_back(ele);
            }
            set1.razn(poco);
            break;
        case 5:
            std::cout << "Введите длину второго множества: ";
            std::cin >> vrem;
            std::cout << "Введите второе множество: ";
            for (int i = 0; i < vrem; ++i)
            {
                std::cin >> ele;
                poco.push_back(ele);
            }
            set1.peres(poco);
            break;
        case 6:
            std::cout << "Введите длину второго множества: ";
            std::cin >> vrem;
            std::cout << "Введите новое множество: ";
            for (int i = 0; i < vrem; ++i)
            {
                std::cin >> ele;
                poco.push_back(ele);
            }
            set1.prisv(poco);
            break;
        case 7:
            set1.clearp();
            cout << "Множество было успешно очищено";
            break;
        case 8:
            cout << set1;
            break;
        case 0:
            return 0;
            break;
	    }
    }
}