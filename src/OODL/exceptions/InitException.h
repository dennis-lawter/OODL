#ifndef INITEXCEPTION_H_
#define INITEXCEPTION_H_

#include <exception>
#include <string>

namespace oodl {

class InitException : public std::exception {
private:
	std::string msg;
public:
	InitException();
	InitException(const std::string&);
	virtual ~InitException() throw();
	virtual const char* what() const throw();
};

}

#endif
