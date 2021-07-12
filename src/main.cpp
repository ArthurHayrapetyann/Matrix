
#include "matric.hpp"

int main(){
	
	int a[5][5];
	for (int i = 0; i<5; i++){
		for (int j = 0; j<5; j++)
			cin >> a[i][j];
	}

	cout << "----------" << endl;
	texdrum(a);
}
