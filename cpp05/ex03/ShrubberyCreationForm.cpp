#include "ShrubberyCreationForm.hpp"
#include <fstream>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm():Form(145, "ShrubberyCreationForm",137), target("defualt")
{
	std::cout<< "Default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ):Form(src), target(src.target)
{
	std::cout << "Copy Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):target(target)
{
	std::cout<< "Default constructor" << std::endl;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default Destructor"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setSigned(rhs.isSigned());
		this->target = rhs.target;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << "_name=" <<  i.getName()<<std::endl;
	o << "_grade= " << i.getGrade()<<std::endl;
	o << "_excute grade = " << i.getExcute()<<std::endl;
	o <<"_signed grade= " << i.isSigned()<<std::endl;
	return o;
}


void	ShrubberyCreationForm::_print_tree()const
{
	std::ofstream	my_file;
	std::string chejra;
	
	my_file.open(this->target + "_shrubbery");
	if (!my_file.is_open())
			exit (0);
my_file <<"###########################'`################################"<<std::endl;
my_file <<"###########################  V##'############################"<<std::endl;
my_file <<"#########################V'  `V  ############################"<<std::endl;
my_file <<"########################V'      ,############################"<<std::endl;
my_file <<"#########`#############V      ,A###########################V"<<std::endl;
my_file <<"########' `###########V      ,###########################V',#"<<std::endl;
my_file <<"######V'   ###########l      ,####################V~~~~'',###"<<std::endl;
my_file <<"#####V'    ###########l      ##P' ###########V~~'   ,A#######"<<std::endl;
my_file <<"#####l      d#########l      V'  ,#######V~'       A#########"<<std::endl;
my_file <<"#####l      ##########l         ,####V''         ,###########"<<std::endl;
my_file <<"#####l        `V######l        ,###V'   .....;A##############"<<std::endl;
my_file <<"#####A,         `######A,     ,##V' ,A#######################"<<std::endl;
my_file <<"#######A,        `######A,    #V'  A########'''''##########''"<<std::endl;
my_file <<"##########,,,       `####A,           `#''           '''  ,,,"<<std::endl;
my_file <<"#############A,                               ,,,     ,######"<<std::endl;
my_file <<"######################oooo,                 ;####, ,#########"<<std::endl;
my_file <<"##################P'                   A,   ;#####V##########"<<std::endl;
my_file <<"#####P'    ''''       ,###             `#,     `V############"<<std::endl;
my_file <<"##P'                ,d###;              ##,       `V#########"<<std::endl;
my_file <<"##########A,,   #########A              )##,    ##A,..,ooA###"<<std::endl;
my_file <<"#############A, Y#########A,            )####, ,#############"<<std::endl;
my_file <<"###############A ############A,        ,###### ##############"<<std::endl;
my_file <<"###############################       ,#######V##############"<<std::endl;
my_file <<"###############################      ,#######################"<<std::endl;
my_file <<"##############################P    ,d########################"<<std::endl;
my_file <<"##############################'    d#########################"<<std::endl;
my_file <<"##############################     ##########################"<<std::endl;
my_file <<"##############################     ##########################"<<std::endl;
my_file <<"#############################P     ##########################"<<std::endl;
my_file <<"#############################'     ##########################"<<std::endl;
my_file <<"############################P      ##########################"<<std::endl;
my_file <<"###########################P'     ;##########################"<<std::endl;
my_file <<"###########################'     ,###########################"<<std::endl;
my_file <<"##########################       ############################"<<std::endl;
my_file <<"#########################       ,############################"<<std::endl;
my_file <<"########################        d###########P'    `Y#########"<<std::endl;
my_file <<"#######################        ,############        #########"<<std::endl;
my_file <<"######################        ,#############        #########"<<std::endl;
my_file <<"#####################        ,##############b.    ,d#########"<<std::endl;
my_file <<"####################        ,################################"<<std::endl;
my_file <<"###################         #################################"<<std::endl;
my_file <<"##################          #######################P'  `V##P'"<<std::endl;
my_file <<"#######P'     `V#           ###################P'"<<std::endl;
my_file <<"#####P'                    ,#################P'"<<std::endl;
my_file <<"###P'                      d##############P''"<<std::endl;
my_file <<"##P'                       V##############'"<<std::endl;
my_file <<"#P'                         `V###########'"<<std::endl;
my_file <<"#'                             `V##P'"<<std::endl;

	my_file.close();		
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
	is_signed				b;
	ExecuteTooLowException	a;

	if (this->isSigned()  == false)
	{
		throw b;
	}
	if (executor._getGrade() > this->getExcute())
	{
		throw a;
	}
	else
		this->_print_tree();
}