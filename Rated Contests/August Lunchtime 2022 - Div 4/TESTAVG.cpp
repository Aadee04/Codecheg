// AS 22/08/22

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int A, B, C;
	    cin >> A >> B >> C;
	    if((A+B)/2 >= 35 && (B+C)/2 >= 35 && (C+A)/2 >= 35)
	        cout << "Pass" << endl;
	    else 
	        cout << "Fail" << endl;
	}
	return 0;
}
