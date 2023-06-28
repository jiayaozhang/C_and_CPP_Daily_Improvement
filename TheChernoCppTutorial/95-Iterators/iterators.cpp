#include<iostream>
#include<unordered_map>
int main()
{	
	typedef std::unordered_map<std::string,int> ScoreMap;
	ScoreMap map;
	map["ydc"] = 1;
	map["tt"] = 2;
	for (ScoreMap::iterator it = map.begin(); it != map.end(); it++)
	{
		auto& key = it->first;
		auto& value = it->second;
		std::cout<<key<<"="<<value<<std::endl;
	}
	for (auto& kv : map) // C++11引入的范围for循环
	{
		auto& key = kv.first;
		auto& value = kv.second;
		std::cout << key << "=" << value << std::endl;
	}
	for(auto& [key,value]:map) // C++17引入的structure binding
		std::cout << key << "=" << value << std::endl;

	std::cin.get();
}