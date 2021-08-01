#include "Hand.h"

void Hand::Add(Card* card_)
{
	Cards.push_back(card_);
}

void Hand::Clear()
{
	Cards.clear();
	
}

int Hand::GetValue() const
{
	int result = 0;
	if (Cards.size() > 0)
	{
		std::vector<int> summ = { 0 };
		for (int i = 0; i < Cards.size(); i++)
		{
			int koll = summ.size();
			for (int j = 0; j < koll; j++)
			{
				int value = Cards[i]->GetValue();
				summ[j] += value;
				if (value == 1)
				{
					summ.push_back(summ[j] + 10);
				}
			}
		}
		int result_1 = -1;
		int result_2 = 999;
		for (int i = 0; i < summ.size(); i++)
		{
			if (summ[i]<22 && summ[i]>result_1)
			{
				result_1 = summ[i];
			}
			if(summ[i]>22 && summ[i]<result_1)
			{
				result_1 = summ[i];
			}

		}
		if (result_1 != -1)
		{
			return result_1;
		}
		else
		{
			return result_2;
		}
	}
	
	return result;
}
