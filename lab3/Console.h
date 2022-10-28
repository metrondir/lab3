#include <iostream>
#include <array>
#include <Windows.h>



class Console
{
public:
	static int GetValue(std::istream& is)
	{
		setlocale(LC_ALL, "Ukrainian");
		int value;
		while (true)
		{
			is >> value;
			if (is.peek() == '\n')
			{
				is.get();
				break;
			}
			else
			{
				std::cout << "\n\tINCORRECT INPUT! An integer is expected. Repeat: ";
				is.clear();
				while (is.get() != '\n') {};

			}
		}
		return value;
	};


	static char* GetText(std::istream& is)
	{
		char* buffer = new char[255];
		while (true)
		{
			setlocale(LC_ALL, "Ukrainian");
			SetConsoleCP(1251);
			is.getline(buffer, 255, '\n');
			SetConsoleCP(866);

			if (strlen(buffer) > 0)
			{
				int emptyChar = 0;
				for (int i = 0; i < strlen(buffer); i++)
					if (buffer[i] == ' ')
						emptyChar++;
				if (emptyChar != strlen(buffer))
					break;
			}
			std::cout << "\n\tINCORRECT INPUT! Text information is expected. Repeat the input : " << std::endl;

		}
		is.clear();
		return buffer;
	};


};