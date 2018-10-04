#include <iostream>
#include "crate.h"


int main(){
	crate one;
	crate two;
	std::cout<<"Crate size: "<<one.size()<<std::endl;
	one.insert(25);
	one.insert(34);
	one.insert(46);
	two.insert(21);
	two.insert(18);
	one.eraseOne(34);
	one+=two;
	std::cout<<"Crate size now: "<<one.size()<<std::endl;
}
