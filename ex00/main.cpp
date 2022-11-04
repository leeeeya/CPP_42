//
//Created by Claribel Stefany on 11/4/22.
//

#include <iostream>
#include <cctype>

void to_upper(char &ch) {
	ch = toupper(ch);
}

int main(int argc, char **argv) {
	if (argc > 1){
		for (int i = 1; argv[i] != nullptr; i++) {
			std::string s = argv[i];
			std::for_each(s.begin(), s.end(), to_upper);
			std::cout << s;
		}
		std::cout << std::endl;
	} else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
