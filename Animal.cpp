#include <iostream>
class Animal {
	std::string name;
	int age;
public:
	void res() {
		std::cout << "This animal class is " << name;
	};
};
class Mamal : public Animal {
	std::string dogs, elephants, ox;
};
class Bird : public Animal {
	std::string eagles, pigeons;
};