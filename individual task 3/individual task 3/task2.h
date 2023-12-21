#pragma once
struct list {
	int data;
	list* next;
};
typedef list* sp_ptr;

int sumOfDigits(int num);
void processList(sp_ptr& head);
sp_ptr sp_create();
void print_sp(sp_ptr L);
void erase(sp_ptr& L);
