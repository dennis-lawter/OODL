#include "OODL.h"

#include <stdlib.h>

namespace oodl {
	OODL::OODL(Uint32 flags, bool defaultCleanup) throw(InitException) {
		if(SDL_Init(flags) != 0) {
			throw InitException();
		}
		
		if(defaultCleanup) {
			atexit(SDL_Quit);
		}
	}
	
	OODL::~OODL() {
		SDL_Quit();
	}
	
	
}
