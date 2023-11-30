#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <iterator>
using namespace std;
class Mnoj {
private:
    vector<int> elements;
    int dlin;
public:
    Mnoj() {
        Mnoj::elements = elements;
        Mnoj::dlin = 5;
    }
    Mnoj(vector<int> elements, int dlin) {
        Mnoj::elements = elements;
        Mnoj::dlin = dlin;
    }
    void setdl(int dlina) {
        Mnoj::dlin = dlina;
    }
    void add(int element) {
        elements.push_back(element);
        std::cout << "Ёлемент был успешно добавлен" << std::endl;
    }
    void delel(int element) {
        bool del = false;
        for(int i = 0;i<size(elements);++i)
        {
	        if(elements[i]==element)
	        {
                elements.erase(elements.begin() + i);
                break;
	        }
        }
        if (del)cout << "Ёлемент успешно удален";
        if(!del)cout << "Ёлемент не найден";
    }
    bool sravn(vector<int> s1, vector<int> s2) {
        bool ravn = true;
        if (size(s1) == size(s2)) {
            for (int i = 0; i < size(s1); ++i)
            {
                if (s1[i] != s2[i])
                {
                    ravn = false;
                    break;
                }
            }
        }
        else ravn = false;
        return ravn;
    }
    bool elin(int el) const {
        bool res = false;
        for(int i = 0; i < size(elements); ++i)
        {
	        if(elements[i]==el)
	        {
                res = true;
                break;
	        }
        }
        return res;
    }
    void clearp() {
        elements.clear();
    }
    void razn(vector<int> s2)
    {
        vector<int> s1 = elements;
        vector<int> result;
        if(size(s2)>=size(s1))
        {
	        for(int i =0;i<size(s1);++i)
	        {
                result.push_back(s1[i] - s2[i]);
	        }
        }
        if (size(s2) < size(s1))
        {
            for (int i = 0; i < size(s2); ++i)
            {
                result.push_back(s2[i] - s1[i]);
            }
        }
        for (int i : result)cout << i << " ";
        cout << endl;
    }
    void peres(vector<int> s2) {
        vector<int> result;
            for (int i : elements) {
                if (std::find(s2.begin(), s2.end(), i) != s2.end()) {
                    result.push_back(i);
                }
            }
            for (int i : result)cout << i << " ";
            cout << endl;
    }
    void prisv(vector<int> s) {
        elements = s;
    }
    // ѕотоковый ввод
    friend istream& operator>>(istream& is, Mnoj& omagad) {
        int element = 0;
        int dlina = omagad.dlin;
        for(int i = 0;i<dlina;++i) {
            is >> element;
            omagad.add(element);

        }
        return is;
    }
    // ѕотоковый вывод
    friend ostream& operator<<(ostream& os, const Mnoj& omagad) {
        for (int element : omagad.elements) {
            os << element << " ";
        }
        return os;
    }
    ~Mnoj()
    {
        std::cout << "Destructor ended his work";
    }
};