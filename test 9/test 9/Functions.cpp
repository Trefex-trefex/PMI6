#include<iostream>

using namespace std;

typedef int datatype;

struct elem_list {
	datatype data;
	elem_list* next;
};

bool exists(elem_list* begin, datatype x) {
	elem_list* p;
	p = begin;
	while (p) {
		if (p->data == x) { return true; }
		else {
			p = p->next;
		}
	}
	return false;
}