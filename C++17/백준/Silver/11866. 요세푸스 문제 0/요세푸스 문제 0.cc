#include <iostream>
#include <deque>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	deque<int> q;
	
	for (int i = N; i > 0;i--) {
		q.push_front(i);
	}
	cout << "<";
	while (q.size()-1) {
		for (int i = 0; i < K - 1;i++) {
			q.push_back(q.front());
			q.pop_front();
		}
		cout << q.front() << ", ";
		q.pop_front();
	}
	cout << q.front() << ">";
	q.pop_front();

}
