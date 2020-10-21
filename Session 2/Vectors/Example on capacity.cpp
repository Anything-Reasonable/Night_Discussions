#include <iostream> 
#include <vector> 
using namespace std;
int main() {
	vector<int> vector1;
	for (int x = 1; x <= 10; x++)
		vector1.push_back(x);
	cout << "Vector size: " << vector1.size()<< endl;
	cout << "Vector capacity: " << vector1.capacity() << endl;
	cout << "Maximum size of vector: " << vector1.max_size()<< endl;
	vector1.resize(5);
	cout << "Vector size after resizing: " << vector1.size() << endl;
	if (vector1.empty() == false)
		cout << "Vector is not empty"<<endl;
	else
		cout << "Vector is empty"<<endl;
	return 0;
}
