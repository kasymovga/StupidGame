#include <engine.h>
#include <tic.h>
#include <stdio.h>

int Engine::gameInit() {
	return 0;
}

void Engine::log(const char *text) {
	printf("%s", text);
}

int Engine::run() {
	gameInit();
	struct UIEvent *event;
	Tic tic;
	for (; event->type != UIEventQuit; event = ui.getEvent()) {
		tic.tic(13);
	}
	return 0;
}
