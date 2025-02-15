#include <iostream>
#include <ctime>
#include <cstdlib>

// black jack game vs the dealer (computer)
// Cℋ

void BJFunc()
{
	// this is useless

}

int main()
{
	std::cout << "==================================" << '\n';
	std::cout << "   OVER AND UNDER  " << '\n';
	std::cout << "  ENTER 1 TO PLAY  " << '\n';
	std::cout << "==================================" << '\n';


	int g{};
	std::cin >> g;

	if (g == 1)
	{
		std::cout <<"    " << '\n';

		std::cout << "==================================" << '\n';
		std::cout << "ADD MONEY ($)" << '\n';
		std::cout << "==================================" << '\n';

		int y{};
		std::cin >> y;

		if (y > 0)
		{
			std::cout << "----------------------------------------" << '\n';
			std::cout << " BALANCE : $"<<y<< '\n';
			std::cout << "----------------------------------------" << '\n';
			std::cout << "ENTER IN BET AMOUNT" << '\n';
			std::cout << "----------------------------------------" << '\n';
			int u{};
			std::cin >> u;	

			if (y < u)
			{
				std::cout << "==================================" << '\n';

				std::cout << "NOT ENOUGH FUNDS.." << '\n';
				
				return 0;
			}

			std::cout << "----------------------------------------" << '\n';
			std::cout << "DEALING" << '\n';
			std::cout << "----------------------------------------" << '\n';

			srand(static_cast<unsigned>(time(nullptr)));
//			int k = time(0);
//			srand(k);
			int RandomNum = 1 + rand() % 10;
			int RandomNumAdd2 = RandomNum + RandomNum;
			std::cout << "YOU GOT : " << RandomNum <<"  " << RandomNum <<" = " << RandomNumAdd2 <<'\n';
			std::cout << "----------------------------------------" << '\n';


//			int t = time(0);
//			srand(t);
			int RandomNum2 = 1 + rand() % 10;
			int RandNumAdd = RandomNum2 + RandomNum2;
			std::cout << "Computer Got : " << RandomNum2 << "  " << RandomNum2 << " = " << RandNumAdd << '\n';
			std::cout << "----------------------------------------" << '\n';

			if (RandomNumAdd2 > RandNumAdd)
			{

				std::cout << "YOU WIN! +$" << u << '\n';
			
	
				 std::cout << "----------------------------------------" << '\n';
				 std::cout << " BALANCE : $" << y + u << '\n';
				 std::cout << "----------------------------------------" << '\n';

			}

			if (RandomNumAdd2 < RandNumAdd)
			{

				std::cout << "YOU LOSE! -$" << u << '\n';
				
	
				std::cout << "----------------------------------------" << '\n';
				std::cout << " BALANCE : $" << y - u << '\n';
				std::cout << "----------------------------------------" << '\n';

			}

			if (RandomNum == RandomNum2)
			{
				std::cout << "TIE!" << '\n';
	
				std::cout << "----------------------------------------" << '\n';
				std::cout << " BALANCE : $" << y << '\n';
				std::cout << "----------------------------------------" << '\n';

			
			}

			


		}

	}






}	