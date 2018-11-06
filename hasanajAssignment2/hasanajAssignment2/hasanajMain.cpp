#include "chessBoard.h"
#include "hasanajStart.h"
#include "leaderBoard.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace hasanajAssignment2;

int main(void) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	hasanajAssignment2::hasanajStart form;
	Application::Run(%form);

	return 0;
}