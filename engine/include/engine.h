#include <ui.h>
class Engine
{
private:
	UI ui;
	virtual int gameInit();
protected:
	void log(const char *text);
public:
	int run();
};
