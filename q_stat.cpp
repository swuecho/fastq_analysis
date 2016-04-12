#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>



int main(int argc, char * argv[])
{
    std::ifstream file(argv[1]);
    std::string line;

    int line_num = 0;
    std::unordered_map <char, int> freq;
    while (std::getline(file, line)) {
         if ( line_num % 4 == 3) {
	    for(char& c: line) {
			freq[c] +=1; // TODO: check the value of freq[c] if c is not exists
		}
         }
       	 line_num++;
    }
    for (const auto& ch: freq) {
	std::cout << ch.first - 33  << ": " << ch.second << std::endl;
    }
    return 0;
}
