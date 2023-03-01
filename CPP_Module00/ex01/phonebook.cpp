
#include "phonebook.hpp"

Phonebook::Phonebook(void) : _index(0)
{
}

Phonebook::~Phonebook(void)
{
}

void    Phonebook::add_contact(void)
{
    if (this->_index == 8)
        _array[0].add_info();
    else
    {
        this->_array[this->_index].add_info();
        this->_index++;
    }
}

void    Phonebook::searching()  const
{
    std::string cmd;

    while (1)
    {
        std::cout << ">> ";
        std::getline(std::cin, cmd);
        if (!isdigit(cmd[0]) || (atoi( cmd.c_str())) > 8 || (atoi( cmd.c_str())) < 0)
            std::cout << "Enter a correct input" << std::endl;
        else if ( (atoi(cmd.c_str())) <= 7 && (atoi(cmd.c_str())) >= 0
            && (atoi( cmd.c_str())) < this->_index)
                this->_array[this->_index - 1].display_specific_info();
        else if ( ( atoi( cmd.c_str()) ) == 8 )
            break;
        else if ( (atoi( cmd.c_str())) >= this->_index )
            std::cout << "This contact does not exist yet" << std::endl;
    }
}

void    Phonebook::search_contact() const
{
    int         i;
    int         j;
    int         ind;

    if (this->_index == 0)
    {
        std::cout << "Add a contact before searching" << std::endl;
        return ;
    }
    i = -1;
    j = -1;
    ind = this->_index;
    std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    while (ind)
    {
        this->_array[++i].display_info(++j);
        ind--;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "Enter index of the contact you want to see or 8 to quit" << std::endl;
    this->searching();
}