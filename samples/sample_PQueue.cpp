#include "PQueue.h"
#include <locale.h>
#include <iostream>
#include "TMonom.h"
#include <exception>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	//Õ¿ ÷≈À€’ ◊»—À¿’

	/*PQueue<int> q(3);
	
	q.enqueue(120, 2);
	q.enqueue(11, 1);
	q.enqueue(10, 1);
	q.enqueue(5, 0);
	q.enqueue(4, 0);
	q.enqueue(0, 0);
	
	while (!q.IsEmpty()) {
		cout << q.peek() << endl;
		q.dequeue();
	}*/


	//Õ¿ ÃŒÕŒÃ¿’

	PQueue<TMonom> Qm(3);
	TMonom a(3.22, 1, 2, 1);
	TMonom b(4.5, 3, 3, 2);
	TMonom c(2.0, 7, 3, 7);
	TMonom d(7.1, 2, 1, 4);
	TMonom e(15.5, 7, 3, 2);
	Qm.enqueue(a, 0);
	Qm.enqueue(b, 2);
	Qm.enqueue(c, 0);
	Qm.enqueue(d, 1);
	Qm.enqueue(e, 1);

	while (!Qm.IsEmpty()) {
		cout << Qm.peek() << endl;
		Qm.dequeue();
	}
}