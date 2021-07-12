
#include "matric.hpp"


//this function changes matic numbers into binary
int texdrum(int arr[5][5]){
	string h;
	int k = erkuakan(matricsumner(arr),"");	
	h = to_string(k);
	string g;
	int s;
	int f = 0;
	for (int a = 1; a<5; a++){
		for (int b = 0; b<a; b++ ){
			if(f<tvierkar(k,0)){
				g = h[f];
				s = stoi(g);
				arr[a][b] = s;	
				f++;
			}
			else{
				break;
			}		

		}	
	}
	f = 0;
	int e = erkuakan(matricsumver(arr),"");
	h= to_string(e);
	for (int a = 0; a<5; a++){
		for (int b = a+1; b<5; b++ ){
			if(f<tvierkar(e,0)){
				g = h[f];
				s = stoi(g);
				arr[a][b] = s;	
				f++;
			}
			else{
				break;
			}		

		}	
	}

	int c,m;
	for(m = 0; m < 5; ++m)
	{
		for(c = 0; c < 5; ++c){
			cout << arr[m][c] << " ";

		}
		cout << endl;
	}
	return 0;
}
