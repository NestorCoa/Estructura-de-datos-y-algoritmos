#include <iostream>
#include "fibonacci.cpp"

using namespace std;

int main(){
	fibonacci<int> fibHeap;

	for(int i = 0; i<15; ++i)
	{
		fibHeap.insert(i);
	}
	fibHeap.print();

	return 0;
}
