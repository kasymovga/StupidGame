class Engine
{
private:
	virtual int gameInit();
protected:
	void log(const char *text);
public:
	int run();
};
