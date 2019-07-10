#include <iostream>
using namespace std;

int main() {
	int minutes,r,q;
	cin>>minutes;
	q=minutes/60;
	r=minutes%60;
	cout<<q<<" "<<r;
	return 0;
}
