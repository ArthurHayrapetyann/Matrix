
#include "matric.hpp"

//this function makes number into binary 
int erkuakan(int a,string h){
	int k;
	int l = a % 2;
	int g = a/2;
	h += to_string(l);
	if (g<1){
		reverse(h.begin() , h.end());
		int k = stoi(h);
		return k;
	}else{
		return erkuakan(g,h);
	}

}

