#include <string>
#include <random>

using namespace std;

string randDNA (int seed, string bases, int n)
{
	int index = -1;
	int min = 0;
	int max = bases.size() -1;
	string letters = "";

	std::mt19937 eng1(seed);
	std::uniform_int_distribution <> uni(min, max);

	for (int i = 0; i < n; i++)
	{
		index = uni(eng1);
		letters += bases[index];
	}

	return letters;
}

