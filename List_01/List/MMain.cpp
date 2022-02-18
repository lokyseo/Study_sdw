#include "Update.h"

int main()
{
	MainUpdate Main;
	Main.Start();

	ULONGLONG Time = GetTickCount64();
	float DeltaTime = 0;
	float StartTime = 0;
	float EndTime = 0;


	while (true)
	{
		StartTime = float(GetTickCount64() % 1000) / 1000;

		if (Time + 500 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");
			Main.FixedUpdate();


			cout << DeltaTime << endl;
			Sleep(DeltaTime * 5);
		}
		else
		{
			system("cls");

			Main.Update();
			Main.LateUpdate();
			Main.Render();
		}


		EndTime = float(GetTickCount64() % 1000) / 1000;
		DeltaTime = EndTime - StartTime;
		
	}

	Main.Destroy();
	
	return 0;
}