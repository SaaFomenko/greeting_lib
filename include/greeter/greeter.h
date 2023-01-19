#if !defined(GREETER_CLASS_H)
#define GREETER_CLASS_H

class Greeter
{
	std::string msg_;
	
	public:
		Greeter(std::string);
		Greeter();
		~Greeter();

		std::string greet(std::string);
};

#endif
