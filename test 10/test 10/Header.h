#pragma once
struct elem {
    int data;
    elem* lt, * rt;
};

typedef elem* tree;

int findRightmostValue(tree root);
tree create(int n);
void erase(tree& t);