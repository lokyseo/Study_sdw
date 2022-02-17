#include <iostream>
#include "Update.h"

int main()
{
	MainUpdate Main;
	Main.Start();

	while (true)
	{
		Main.Update();
		Main.Render();
	}

	Main.Destroy();

	return 0;
}