// C++ program to check if successive
// pair of numbers in the stack are
// consecutive or not
#include <bits/stdc++.h>
using namespace std;

// Function to check if elements are
// pairwise consecutive in stack
bool pairWiseConsecutive(stack<int> s)
{
	// Transfer elements of s to aux.
	stack<int> aux;
	while (!s.empty()) {
		aux.push(s.top());
		s.pop();
	}

	// Traverse aux and see if
	// elements are pairwise
	// consecutive or not. We also
	// need to make sure that original
	// content is retained.
	bool result = true;
	while (aux.size() > 1) {

		// Fetch current top two
		// elements of aux and check
		// if they are consecutive.
		int x = aux.top();
		aux.pop();
		int y = aux.top();
		aux.pop();
		if (abs(x - y) != 1)
		result = false;

		
	}

	

	return result;
}


int main()
{
	stack<int> s;
	s.push(4);
	s.push(5);
	s.push(-2);
	s.push(-3);
	s.push(11);
	s.push(10);
	s.push(5);
	s.push(6);
	s.push(20);

	if (pairWiseConsecutive(s))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	
	

	return 0;
}
