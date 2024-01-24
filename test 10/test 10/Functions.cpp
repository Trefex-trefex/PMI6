#include <iostream>

using namespace std;

struct elem {
    int data;
    elem* lt, * rt;
};

typedef elem* tree;

int findRightmostValue(tree root) {
    if (root == nullptr) {
        return -1; // ¬озвращаем какое-то значение по умолчанию или обрабатываем ошибку по-другому
    }
    while (root->rt != nullptr || root->lt != nullptr) {
        if (root->rt != nullptr) {
            root = root->rt;
        }
        else {
            root = root->lt;
        }
    }
    return root->data;
}

tree create(int n) {
    tree p;
    int d;
    if (n > 0) {
        p = new elem;
        cout << "element: "; cin >> p->data;
        d = n / 2;
        p->lt = create(d);
        p->rt = create(n - 1 - d);
        return p;
    }
    else return nullptr;
}

void erase(tree& t) {
    if (t != nullptr) {
        erase(t->lt);
        erase(t->rt);
        delete(t);
        t = nullptr;
    }
}



