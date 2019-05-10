using namespace std;

#include "ConsoleEngine.h"

class Racing : public ConsoleTemplateEngine {
public:
	Racing() {
		m_sAppName = L"Racing Game";
	}

private:

protected:
	virtual bool OnUserCreate() {
		return true;
	}

	virtual bool OnUserUpdate(float fElapsedTime) {
		return true;
	}
	
};

int main() {
	Racing game;
	game.ConstructConsole(160, 100, 8, 8);
	game.Start();

	return 0;
}