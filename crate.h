#include <iostream>
#include <cstdlib>

class crate{
	public:
		typedef int int_type;
		typedef size_t size_type;
		crate(){used = 0;}
		static const int_type CAPACITY = 30;
		void insert(const int_type& target);
		bool eraseOne(const int_type& target);
		size_type erase(const size_type& target);
		size_type size() const {return used;}
		void operator +=(const crate& add);
	private:
		size_type used;
		int_type data[CAPACITY];
};


crate operator +(const crate& one, const crate& two); //its outside
						    // because it doesnt need
						    // any private members.

		

