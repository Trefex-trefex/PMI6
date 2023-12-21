#include <iostream>

using namespace std;

struct list {
	int data;
	list* next;
};
typedef list* sp_ptr;

int sumOfDigits(int num) {
	int sum = 0;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

void processList(sp_ptr& head) {
	if (head == nullptr) {
		cout << "Список пуст" << endl;
		return;
	}

	int maxSum = 0;
	int count = 0;
	sp_ptr current = head;
	sp_ptr prev = nullptr;

	// Находим максимальную сумму цифр
	while (current != nullptr) {
		int currentSum = sumOfDigits(current->data);
		maxSum = max(maxSum, currentSum);
		current = current->next;
	}

	// Удаление чисел с максимальной суммой цифр
	current = head;
	prev = nullptr;

	while (current != nullptr) {
		if (sumOfDigits(current->data) == maxSum) {
			count++;
			if (prev != nullptr) {
				prev->next = current->next;
				delete current;
				current = prev->next;
			}
			else {
				sp_ptr temp = current;
				current = current->next;
				head = current;
				delete temp;
			}
		}
		else {
			prev = current;
			current = current->next;
		}
	}

	// Добавление в начало списка элемента, равного количеству удаленных чисел
	sp_ptr newHead = new list{ count, head };
	head = newHead;
}

sp_ptr sp_create() {
	sp_ptr L, p;
	int n;
	cout << "size list->";
	cin >> n; L = NULL;
	for (int i = 0; i < n; ++i) {
		p = new list;
		cout << "list item ->";
		cin >> p->data;
		p->next = L;
		L = p;
	}
	return L;
}

void print_sp(sp_ptr L) {
	sp_ptr p;
	p = L;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n";
}

void erase(sp_ptr& L) {
	sp_ptr t;
	t = L;
	while (t != NULL) {
		L = t->next;
		delete t;
		t = L;
	}
}