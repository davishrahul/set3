#include <iostream>
using namespace std;

int main() {
	int number;
	cin>>number;
	int numArray[number];
	for(int i=0;i<number;i++)
	{
		cin>>numArray[i];
		cout<<numArray[i]<<" "<<i<<"\n";
	}
	return 0;
}
