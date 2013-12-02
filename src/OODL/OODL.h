#ifndef SDL2_H_
#define SDL2_H_

#include "exceptions/InitException.h"

#include <SDL2/SDL.h>
#include <exception>
#include <string>

namespace oodl {

class OODL {
public:
	OODL();
	OODL(Uint32 flags, bool defaultCleanup) throw (InitException);
	virtual ~OODL();

};

}

#endif
