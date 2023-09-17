#include <iostream>

int main()
{
	const int n = 100;
	char str[n];
	int count = 0;
	int count2 = 0;
	char max;
	std::cin.getline(str, 100);
	for(int i = 0; str[i] != '\0'; ++i)
	{
		if(str[i] == ' ')
		{
			continue;
		}
		for(int j = 0; str[j] != '\0'; ++j)
		{
			if(str[i] == str[j])
			{
				++count;
			}
		}
		if(count >= count2)
		{
			max = str[i];
			count2 = count;
		}
		count = 0;
		
	}
	std::cout << max << std::endl;

	return 0;
}
