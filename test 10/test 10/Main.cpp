#include<iostream>
#include "Header.h"

using namespace std;

int main() {
	tree root = create(6); // 13,1,7,9,3,2 - с такими данными создается сбалансированное дерево
	cout << findRightmostValue(root) << endl; // правильный ответ 2

    elem* elem1 = new elem{ 1, nullptr, nullptr };
    elem* elem2 = new elem{ 2, nullptr, nullptr };
    elem* elem3 = new elem{ 3, nullptr, nullptr };

    elem1->rt = elem2;
    elem2->lt = elem3;

    tree root1 = elem1;
    cout << findRightmostValue(root1) << endl; // правильный ответ 3

    erase(root);
    erase(root1);
}