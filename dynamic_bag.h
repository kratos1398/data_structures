#include <cstdlib> //provides size_t

class bag{
    public:
        //typedefs and member constants
        typedef int value_type;
        typedef size_t size_type;
        static const size_type DEFAULT_CAPACITY = 30;
        //constructor
        bag(size_type initial_capacity = DEFAULT_CAPACITY);
        bag(const bag& source); //copy constructor
        ~bag(); //destructor
        //modifying methods (changes the bag)
        bool erase_one(const value_type& target); 
        size_type erase(const value_type& target);
        void insert(const value_type& entry);
        void reserve(size_type new_capacity);
        void operator =(const bag& source);
        void operator +=(const value_type& entry);
        //const methods (doesn't change the bag)
        size_type size() const {return used; }
        size_type count(const value_type& target) const;
    private:
        value_type *data;
        size_type used;
        size_type capacity;
    };
// acts on bags but doesn't need access to private attributes
bag operator +(const bag& b1, const bag& b2);
