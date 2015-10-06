#include <SDL.h>
#include <ui.h>
struct UIPrivateStruct {
	SDL_Surface *screen;
	const SDL_VideoInfo *videoInfo;
};

UI::UI() {
	SDL_Init(SDL_INIT_EVERYTHING);
	privateStruct = new UIPrivateStruct;
	privateStruct->videoInfo = SDL_GetVideoInfo();
	privateStruct->screen = SDL_SetVideoMode(
			privateStruct->videoInfo->current_w,
			privateStruct->videoInfo->current_h,
			privateStruct->videoInfo->vfmt->BitsPerPixel, SDL_OPENGL);
}

UI::~UI() {
	SDL_FreeSurface(privateStruct->screen);
	delete privateStruct;
}
