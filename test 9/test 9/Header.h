#pragma once
typedef int datatype;

struct elem_list {
	datatype data;
	elem_list* next;
};

bool exists(elem_list* begin, datatype x);