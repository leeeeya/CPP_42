//
// Created by Claribel Stefany on 11/8/22.
//

#include <iostream>
#include <fstream>
#include <unistd.h>

void checkErrors(int argc, char **argv){
	if (argc != 4){
		std::cerr << "ERROR: Invalid number of arguments!" << std::endl;
		exit(-1);
	}
	if (access(argv[1], F_OK)){
		std::cerr << "ERROR: " << argv[1] << ": No such file!"<< std::endl;
		exit(-1);
	}
	if (access(argv[1], R_OK)){
		std::cerr << "ERROR: " << argv[1] << ": Permission denied!"<< std::endl;
		exit(-1);
	}
}


std::string readInputFile(char *inFileName){
	std::string line;
	std::string all;

	std::ifstream in(inFileName);
	if (in.is_open())
	{
		while (getline(in, line))
		{
			all += line;
			if (!in.eof()){
				all += '\n';
			}
		}
		in.close();
	} else{
		std::cerr << "ERROR: Open " << inFileName << std::endl;
		exit(-1);
	}
	return all;
}

void writeReplaced(char *inFileName, std::string data){
	std::string ofName = (std::string)inFileName + ".replace";
	std::ofstream out(ofName);
	if (!out.is_open())
	{
		std::cerr << "ERROR: Open " << out << std::endl;
		exit(-1);
	}
	out<< data;
}

void	ft_replace(std::string *line, std::string original, std::string replasement)
{
	size_t	current_pos;

	while ((current_pos = (*line).find(original)) != std::string::npos)
	{
		(*line).erase(current_pos,original.length());
		(*line).insert(current_pos, replasement);
	}
}

int main(int argc, char **argv){
	checkErrors(argc, argv);

	std::string allData = readInputFile(argv[1]);

	ft_replace(&allData, (std::string)argv[2], (std::string)argv[3]);

	writeReplaced(argv[1], allData);
	return 0;
}