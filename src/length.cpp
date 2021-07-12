
#include "matric.hpp"

//this function counts binary number length
int tvierkar(int h,int c){
	int k=h/10;
	if (k<1){
		assert(c >= 1);
		return c+1;
	}else{
		return tvierkar(k,c+1);
	}

}
