//
// Created by Claribel Stefany on 11/18/22.
//

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
	std::cout << "Default Shrubbery form is created!" << std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery form is destructed!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f) {
	std::cout << "<ShrubberyCreationForm> Copy constructor called" << std::endl;
	*this = f;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm f) {
	std::cout << "<ShrubberyCreationForm> Copy assignment operator called" << std::endl;
	if(this != &f){
		return *this;
	}
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm(target, 145, 137) {
	std::cout << this->getName() << " Shrubbery form is created!" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat &exe) const {
	this->executeCheck(exe);
	std::ofstream file;
	file.open(this->getName() + "_shrubbery");
	if (file.is_open()){
		file <<"                                              .\n"
				"                                   .         ;\n"
				"      .              .              ;%     ;;\n"
				"        ,           ,                :;%  %;\n"
				"         :         ;                   :;%;'     .,\n"
				",.        %;     %;            ;        %;'    ,;\n"
				"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
				"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
				"     `%;.     ;%;     %;'         `;%%;.%;'\n"
				"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
				"         `:%;.  :;bd%;          %;@%;'\n"
				"           `@%:.  :;%.         ;@@%;'\n"
				"             `@%.  `;@%.      ;@@%;\n"
				"               `@%%. `@%%    ;@@%;\n"
				"                 ;@%. :@%%  %@@%;\n"
				"                   %@bd%%%bd%%:;\n"
				"                     #@%%%%%:;;\n"
				"                     %@@%%%::;\n"
				"                     %@@@%(o);  . '\n"
				"                     %@@@o%;:(.,'\n"
				"                 `.. %@@@o%::;\n"
				"                    `)@@@o%::;\n"
				"                     %@@(o)::;\n"
				"                    .%@@@@%::;\n"
				"                    ;%@@@@%::;.\n"
				"                   ;%@@@@%%:;;;.\n"
				"               ...;%@@@@@%%:;;;;,..";
		file.close();
	} else {
		throw GradeTooLowException("Error: Couldn't open file!\n");
	}

}
