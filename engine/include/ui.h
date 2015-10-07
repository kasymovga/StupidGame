struct UIPrivateStruct;

enum UIEventType {
	UIEventNone,
	UIEventQuit
};

struct UIEvent {
	UIEventType type;
};

class UI {
private:
	UIEvent event;
	struct UIPrivateStruct *privateStruct;
public:
	UIEvent *getEvent();
	UI();
	~UI();
};
