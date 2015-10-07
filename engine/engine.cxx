#include <engine.h>
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
	for (; event->type != UIEventQuit; event = ui.getEvent()) {
	}
	return 0;
}
