#include <iostream>
#include "crate.h"
#include <cstdlib>
using namespace std;

void crate:: insert(const int_type& entry){
	if(size()>= CAPACITY){
		std::cout<<"BAg is full"<<std::endl;
	}
	data[used] = entry;
	++used;
}



bool crate:: eraseOne(const int_type& entry){
	size_type index;
	index = 0;
	//while ((index < used) && (data[index]!= entry))
	//	index++;
	//if(index == used){
	//	return false;
	//}
	//used--;
	//data[index] = data[used];
	//return true;
	for(index = 0; index <used; index++){
		if(data[index] == entry){
			used--;
			data[index] = data[used]; // my inefficient way of doing
			return true;
		}
		else if(index == used){
			return false;
		}
}
return true;
}
	


size_t crate:: erase(const size_type& entry){
	used = 0;
	return used;
}

void crate:: operator+=(const crate& addend){
	for(size_t i = 0; i < addend.size(); i++){
		if(used + addend.size() > CAPACITY){
			std::cout<<"crate will be overloaded"<<std::endl;
		}
		++used;
		data[used] = addend.data[i];
	}
}

crate operator+(const crate& c1, const crate& c2){
	if(c1.size() + c2.size() > crate::CAPACITY){
		std::cout<<"Overload of crate."<<std::endl;
	}
	crate answer;
	answer+= c1;
	answer+= c2;
	return answer;
}

