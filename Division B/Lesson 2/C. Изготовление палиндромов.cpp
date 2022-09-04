#include <iostream>

int main()
{
	std::string s, s1, s2;
	std::cin >> s;
	s1 = s.substr(0, (s.length() / 2 + 0.5) + (s.length() % 2 == 0 ? 0 : 1));
	s2 = s.substr((s.length() / 2 + 0.5), s.length());
	//std::cout << s1 << "\t" << s2 << "\n";

	for (int i = (s.length() / 2 + 0.5) - 1; i >= 0; i--)
	{
		s1 += s1[i];
	};

	for (int i = 0; i < (s.length() / 2 + 0.5); i++)
	{
		s2 = s2[i * 2 + (s.length() % 2 == 0 ? 0 : 1)] + s2;
	};

	int m1 = 0, m2 = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != s1[i])
			m1++;
		if (s[i] != s2[i])
			m2++;
	}

	std::cout << (m1 > m2 ? m2 : m1);
}