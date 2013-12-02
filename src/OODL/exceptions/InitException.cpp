#include "InitException.h"

#include <SDL2/SDL.h>

namespace oodl {

InitException::InitException() :
		std::exception(), msg(SDL_GetError()) {
}

InitException::InitException(const std::string& m) :
		exception(), msg(m) {
}

InitException::~InitException() throw () {
}

const char* InitException::what() const throw () {
	return msg.c_str();
}

}
