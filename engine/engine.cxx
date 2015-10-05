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
	return 0;
}
