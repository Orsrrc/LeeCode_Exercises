string longestCommonPrefix(vector<string>& strs) {

			//存放前缀
			string Prefix;
			//查看vector中有元素个数
			int vectorLength = 0;
			vectorLength = strs.size();
			int sum = 0;
			int stringLength = strs[0].length();	
			if (vectorLength == 1)
			{
				Prefix = strs[0];
				return Prefix;
			}
			for (int i = 1; i < vectorLength - 1; i++)
			{
				for (int j = 0; j < stringLength -1; j++)
				{
					if (strs[i][j] == strs[i+1][j] && strs[i][j] == strs[i-1][j])
					{
						sum++;
					}
				}
			}
			if (sum == 0)
			{
				return "";
			}
			else {
				for (int m = 0; m < sum; m++)
				{
					Prefix += strs[0][m];
				}
				return Prefix;
			}
		}