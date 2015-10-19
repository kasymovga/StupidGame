class Tic {
private:
	unsigned long int timer;
	unsigned long int timePrevious;
	unsigned long int timeCurrent;
	unsigned long int timeDelta;
	void updateTime();
public:
	Tic();
	unsigned long int tic(unsigned int frameTime);
};
