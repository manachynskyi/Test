#include <iostream>
#include <vector>
using namespace std;
 
void main()
{
	vector<int> v;
	for(int i = 1; i < 10; ++i)
		v.push_back(i);
	vector<int>::iterator i;
	cout << "line print vector : ";
	for(i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << ' ';
	}
	cout << endl;
	vector<int>::reverse_iterator ri;
	cout << "rev print vector : ";
	for(ri = v.rbegin(); ri != v.rend(); ++ri)
		cout << *ri << ' ';
	cout << endl;


}