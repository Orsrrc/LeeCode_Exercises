class Solution{
	public:
		int romanToInt(string s)
		{
			int sum = 0;
			int Slenth = s.length();
			map<char, int> romanToValue = {
				{'I', 1},
				{'V', 5},
				{'X', 10},
				{'L', 50},
				{'C', 100},
				{'D', 500},
				{'M', 1000} 
			};
			for (int i = 0; i < Slenth;i++)
			{
				int value = romanToValue[s[i]];
				if (i < Slenth - 1 && romanToValue[s[i]] < romanToValue[s[i+1]])
				{
					sum -= value;
				}
				else
				{
					sum += value;
				}
			}
			return sum;
		}
	};