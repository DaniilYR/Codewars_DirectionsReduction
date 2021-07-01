#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> dirReduc(std::vector<std::string> &arr){
		std::vector<std::string>::iterator it = arr.begin();
		while(it != arr.end() && (it+1) != arr.end()) {
		std::cout << *it << " " << *(it+1) << std::endl;
			if(*it == "NORTH" && *(it+1) == "SOUTH" || 
			   *it == "SOUTH" && *(it+1) == "NORTH" ||
			   *it == "EAST" && *(it+1) == "WEST" ||
			   *it == "WEST" && *(it+1) == "EAST") 
			{
				arr.erase(it, it+2);
				std::cout << "---------" << std::endl;
				for(auto & it : arr){
					std::cout << it << " ";	
				}
				std::cout << std::endl;
				std::cout << "---------" << std::endl;
				it = arr.begin();
			}
			else{
		  		it++;
			}
	  }
	  return arr;
}


int main(){
	std::vector<std::string> n = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
	std::vector<std::string>::iterator it;
	auto d = dirReduc(n);
	for(auto & it : d){
		std::cout << it << std::endl;	
	}
	return 0;
}
