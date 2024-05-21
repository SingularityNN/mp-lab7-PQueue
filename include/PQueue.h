#include <iostream>
#include <vector>
using namespace std;

template <class T>
struct item
{
public:
	T data;
	int priority;
};

template <class T>
class PQueue
{
private:
	vector<item<T>> m;

public:
	PQueue(int MaxPriority) : m() { if (MaxPriority < 1) throw "error"; }

	void enqueue(const T& _value, int _priority) {
		item<T> item;
		item.data = _value;
		item.priority = _priority;
		m.push_back(item);
	}

	T peek() {
		int HighestPriority = INT_MIN;
		int ind = -1;
		item<T> res_item;
		T res;

		if (!(m.empty())) res_item = m[0];
		else throw "No items in queue";

		for (int i = 0; i < m.size(); i++) {
			item<T> curr_item = m[i];
			if (HighestPriority == curr_item.priority && ind > -1 && (res_item.data < curr_item.data))
			{
				HighestPriority = curr_item.priority;
				ind = i;
				res_item = m[i];
			}
			else if (HighestPriority < curr_item.priority)
			{
				HighestPriority = curr_item.priority;
				ind = i;
				res_item = m[i];
			}
				
		}
		res = res_item.data;
		return res;
	}

	int get_mp_ind() {
		int HighestPriority = INT_MIN;
		int ind = -1;
		item<T> res_item;
		if (!(m.empty())) res_item = m[0];
		else throw "No items in queue";
		for (int i = 0; i < m.size(); i++) {
			item<T> curr_item = m[i];
			if (HighestPriority == curr_item.priority && ind > -1 && (res_item.data < curr_item.data))
			{
				HighestPriority = curr_item.priority;
				ind = i;
				res_item = m[i];
			}
			else if (HighestPriority < curr_item.priority)
			{
				HighestPriority = curr_item.priority;
				ind = i;
				res_item = m[i];
			}

		}
		return ind;
	}

	void dequeue() {
		if (IsEmpty()) throw "error";
		int ind = get_mp_ind();
		m.erase(m.begin() + ind);
	}

	bool IsEmpty() {
		if (m.empty()) return true;
		else return false;
	}

};
