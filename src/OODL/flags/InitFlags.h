#ifndef INITFLAGS_H_
#define INITFLAGS_H_

#include <SDL/SDL.h>

namespace oodl {

class InitFlags{
private:
	Uint32 flagValue;
public:
	InitFlags();
	InitFlags(Uint32 flags);
	virtual ~InitFlags();
};

}
