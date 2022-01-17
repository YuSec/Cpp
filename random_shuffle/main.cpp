#include <iostream>
#include <algorithm>
#include <vector>
int main() {
	std::vector<int> tmp;
	for (int i = 0; i < 50; i++)
		tmp.push_back(i);
	for (int i = 0; i < 10; i++) {
		std::random_shuffle(tmp.begin(), tmp.end());//打乱向量
		int num = tmp.size();
	}
}
