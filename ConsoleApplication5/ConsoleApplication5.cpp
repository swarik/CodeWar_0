#include <iostream>
#include <string>
#include <vector>

using namespace std;
class StockList
{
public:
	static string stockSummary(vector<string>& lstOfArt, vector<string>& categories) {
		string res="", l;
		int n = 0, cnt = 0, book_num = 0;

		if (categories.empty() && lstOfArt.empty()) {
			return res;
		}
		while (n < categories.size()) {
			int s = 0;
			while (s < lstOfArt.size()) {

				if (categories[n][0] == lstOfArt[s][0])	{
					cnt = lstOfArt[s].find(" ");
					l = lstOfArt[s].erase(0, cnt + 1);
					book_num += stoi(l);
				}
				s++;
			}
			res += "(" + categories[n] + " : " + to_string(book_num) + ")";
			if (n+1 != categories.size()) {
				res += " - ";
			}
			book_num = 0;
			n++;
		}
		return  res;
	}
};




int main()
{
	vector<string> art = { "BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600" };
	vector<string> cd = { "A", "B", "C", "D", "N"};
	StockList result;
	cout << result.stockSummary(art, cd);
	int t = 0;
	__asm 
	{
		mov eax,5
		
		loops:
		inc eax
			cmp eax, 5000
			jnz loops
		add t, eax
	}
	cout << "\nT= " << t << endl;

}
