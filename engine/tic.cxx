#include <tic.h>
#include <SDL.h>

Tic::Tic() {
	timePrevious = 0;
	timeCurrent = 0;
	timeDelta = 0;
	updateTime();
	timer = timeCurrent;
}

void Tic::updateTime() {
	timePrevious = timeCurrent;
	timeCurrent = SDL_GetTicks();
	timeDelta = timeCurrent > timePrevious ? timeCurrent - timePrevious : 0;
}

unsigned long int Tic::tic(unsigned int frameTime) {
	updateTime();
	timer += frameTime;
	if (timer > timeCurrent)
		SDL_Delay(timer - timeCurrent);

	return timeDelta;
}
